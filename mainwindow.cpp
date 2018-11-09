#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand( time(nullptr));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Выборка
    Points select;
    if(!ui->checkBox->isChecked())
        fillSelectRand(select, 1000, 2);
    else {
        openFile();
        if (filename=="")
            return ;
        QString fileText=readFile(filename);
        QTextStream fileStream(&fileText);
        QString str = fileStream.readLine();
        QStringList lst = str.split(";");
        int sizeX = 0;
        for (int i = 0; i < lst.size(); ++i)
            if (lst.at(i).indexOf("X") >= 0)
                ++sizeX;
        while (!fileStream.atEnd()) {
            str = fileStream.readLine();
            lst = str.split(";");
            QVector <double> x;
            QVector <double> y;
            for (int i = 1; i <= sizeX; ++i)
                x.push_back(lst.at(i).toDouble());
            for (int i = sizeX + 1; i < lst.size(); ++i)
                y.push_back(lst.at(i).toDouble());
            select.add(x, y);

        }
    }

    //Генетика + непараметрика
    NonParametric regression(select);
    GeneticForNonParametric genetic(20, 20);
    genetic.setRegression(regression);
    genetic.setRange(0, 10);
    genetic.fillRating();
    genetic.bestRatingToZero();
    genetic.best();
    for(int k = 0; k < 100; k++)
    {
        genetic.cross(2);
        genetic.mutation(0.02);
        genetic.fillRating();
        genetic.best();
    }
    regression.setBandwidth(genetic.getBest()[1]);
    ui->textEdit->insertPlainText("Bandwidth = "
                                  + QString::number(genetic.getBest()[1])
            + "; Error = "
            + QString::number(-genetic.getBest()[0])
            +"\n");
    //График
    Points graph;
    fillGraph(regression, graph);
    QVector <double> x;
    QVector <double> y;
    x.push_back(0);
    x.push_back(0);
    y.push_back(0);
    Point maxS(x, y), minS(x, y), maxG(x, y), minG(x, y);
    maxS.setY(0, select[0].getY(0));
    minS.setY(0, select[0].getY(0));
    maxG.setY(0, graph[0].getY(0));
    minG.setY(0, graph[0].getY(0));
    for(int i = 1; i < select.sizePoints(); ++i)
    {
        if(select[i].getY(0) > maxS.getY(0))
            maxS = select[i];
        if(select[i].getY(0) < minS.getY(0))
            minS = select[i];
    }
    for(int i = 1; i < graph.sizePoints(); ++i)
    {
        if(graph[i].getY(0) > maxG.getY(0))
            maxG = graph[i];
        if(graph[i].getY(0) < minG.getY(0))
            minG = graph[i];
    }
    ui->textEdit->insertPlainText("min Select: " + minS.toString()+"\nmax Select: " + maxS.toString()
                                  + "\nmin Graph: " + minG.toString() + "\nmax Graph: " + maxG.toString());
    //ui->textEdit->insertPlainText(graph.toString());
    Points selectForGraph;
    for(int i = 0; i < select.sizePoints(); ++i){
        QVector <double> tempX;
        tempX.push_back(select[i].getX(0));
        tempX.push_back(0);
        if(fabs(select[i].getY(0) - regression.getY(tempX)) <= 0.1)
            selectForGraph.add(select[i]);
    }
    displayGraph(selectForGraph, select, graph);

}

void MainWindow::displayGraph(Points selectForGraph, Points select, Points graph)
{
    ui->widget->legend->setVisible(true);
    ui->widget->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
    ui->widget->legend->setFont(QFont("Helvetica", 9));
    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->graph(0)->setName("Регрессия");
    ui->widget->graph(0)->setData(graph.getVectorFirstX(), graph.getVectorFirstY());
    ui->widget->addGraph();
    ui->widget->graph(1)->setName("Значения выборки");
    ui->widget->graph(1)->setData(selectForGraph.getVectorFirstX(), selectForGraph.getVectorFirstY());
    ui->widget->graph(1)->setPen(QColor(255, 0, 0, 255));
    ui->widget->graph(1)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui->widget->addGraph();
    ui->widget->graph(2)->setName("Функция");
    double min = select[0].getX(0);
    double max = select[0].getX(0);
    for (int i = 1; i < select.sizePoints(); ++i) {
        if (select[i].getX(0) < min)
            min = select[i].getX(0);
        if (select[i].getX(0) > max)
            max = select[i].getX(0);
    }
    QVector <double> funcX, funcY;
    for (int i = 0; i < 1000; ++i) {
        funcX.push_back(min + i * ((max - min) / 1000));
        funcY.push_back(sin(funcX[i]));
    }
    ui->widget->graph(2)->setData(funcX, funcY);
    ui->widget->graph(2)->setPen(QColor(0, 255, 0, 255));
    ui->widget->xAxis->setLabel("X");
    ui->widget->yAxis->setLabel("Y");
    ui->widget->xAxis->setRange(min - 0.1, max + 0.1);
    min = funcY[0];
    max = funcY[0];
    for (int i = 1; i < funcY.size(); ++i) {
        if (funcY[i] < min) min = funcY[i];
        if (funcY[i] > max) max = funcY[i];
    }
    ui->widget->yAxis->setRange(min - 0.1, max + 0.1);
    ui->widget->replot();
    //Таблица
    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *item;
    QStringList horizontalHeader;
    for (int i = 0; i < select[0].sizeX(); ++i)
        horizontalHeader.append("X" + QString::number(i+1));
    for (int i = 0; i < select[0].sizeY(); ++i)
        horizontalHeader.append("Y" + QString::number(i+1));
    QStringList verticalHeader;
    for (int i = 0; i < select.sizePoints(); ++i)
        verticalHeader.append(QString::number(i+1));
    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);
    for (int i = 0; i < select.sizePoints(); ++i) {
        for (int j = 0; j < select[0].sizeX(); ++j) {
            item = new QStandardItem(QString::number(select[i].getX(j)));
            model->setItem(i, j, item);
        }
        for (int j = 0; j < select[0].sizeY(); ++j) {
            item = new QStandardItem(QString::number(select[i].getY(j)));
            model->setItem(i, select[0].sizeX() + j, item);
        }
    }

    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    if(ui->checkBox_2->isChecked())
        saveFileSelect();
    if(ui->checkBox_3->isChecked())
        saveFileGraph(graph);
}

void MainWindow::openFile()
{
    filename=QFileDialog::getOpenFileName(this, tr("Открыть файл"), "", tr("Text files (*.txt *.csv)"));
}

void MainWindow::saveFileSelect()
{
    QString filename=QFileDialog::getSaveFileName(this, tr("Сохранить файл"),"",tr("Excel file (*.csv);;Text file (*.txt)"));
    QFile f(filename);

    if( f.open( QIODevice::WriteOnly ) )
    {
        QTextStream ts( &f );
        QStringList strList;

        strList << "\" \"";
        for ( int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c )
            strList << "\"" + ui->tableView->model()->headerData(c, Qt::Horizontal).toString() + "\"";
        ts << strList.join( ";" )+"\n";

        for ( int r = 0; r < ui->tableView->verticalHeader()->count(); ++r ) {
            strList.clear();
            strList << "\"" + ui->tableView->model()->headerData(r, Qt::Vertical).toString() + "\"";
            for( int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c )
                strList << "\"" + ui->tableView->model()->data(ui->tableView->model()->index(r, c), Qt::DisplayRole).toString() + "\"";
            ts << strList.join( ";" ) + "\n";
        }
        f.close();
    }
}

void MainWindow::saveFileGraph(Points graph)
{
    QString filename=QFileDialog::getSaveFileName(this, tr("Сохранить файл"),"",tr("Excel file (*.csv);;Text file (*.txt)"));
    QFile f(filename);

    if( f.open( QIODevice::WriteOnly ) )
    {
        QTextStream ts( &f );
        QStringList strList;

        strList << "\" \"";
        for( int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c )
            strList << "\"" + ui->tableView->model()->headerData(c, Qt::Horizontal).toString() + "\"";
        ts << strList.join( ";" )+"\n";
        ts << graph.toString();
        f.close();
    }
}
