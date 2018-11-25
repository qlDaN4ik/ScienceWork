#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setStyleSheet("QProgressBar {color: rgb(255, 255, 0); background-color: qlineargradient"
                                   "(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(100,0,0,255), stop: 1 rgba(200,0,0,255));"
                                   " border: 2px solid grey; border-radius: 5px;}QProgressBar::chunk {background-color:"
                                   " qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(0,200,255,255),"
                                   " stop: 1 rgba(0,0,255,255));}");
    ui->progressBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::outResult(double bandwidth, double error)
{
    ui->textEdit->insertPlainText("Bandwidth = "
                                  + QString::number(bandwidth)
                                  + "; Error = "
                                  + QString::number(error)
                                  +"\n");
}

void MainWindow::outProgress(int percent)
{
    ui->progressBar->setValue(percent);
    if (percent == 100)
    {
        ui->regressionSave->setEnabled(1);
        ui->pushButton->setEnabled(1);
        ui->currentRadio->setEnabled(1);
        ui->fileRadio->setEnabled(1);
        ui->randomRadio->setEnabled(1);
        ui->componentNumberSpin->setEnabled(1);
        ui->leftSearchSpin->setEnabled(1);
        ui->rightSearchSpin->setEnabled(1);
        ui->selectCountSpin->setEnabled(1);
        ui->countGenerationSpin->setEnabled(1);
        ui->individNumberSpin->setEnabled(1);
        ui->geneNumberSpin->setEnabled(1);
        ui->tournSizeSpin->setEnabled(1);
        ui->mutationCombo->setEnabled(1);
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->fileRadio->isChecked())
        openFile();
    ui->progressBar->show();
    ui->progressBar->setValue(0);
    ui->pushButton->setEnabled(0);
    ui->currentRadio->setEnabled(0);
    ui->fileRadio->setEnabled(0);
    ui->randomRadio->setEnabled(0);
    ui->componentNumberSpin->setEnabled(0);
    ui->leftSearchSpin->setEnabled(0);
    ui->rightSearchSpin->setEnabled(0);
    ui->selectCountSpin->setEnabled(0);
    ui->countGenerationSpin->setEnabled(0);
    ui->individNumberSpin->setEnabled(0);
    ui->geneNumberSpin->setEnabled(0);
    ui->tournSizeSpin->setEnabled(0);
    ui->mutationCombo->setEnabled(0);

    QThread *thread= new QThread;
    Base *my = new Base("A");
    my->moveToThread(thread);
    connect(thread, SIGNAL(started()), my, SLOT(doWork()));

    connect(this, SIGNAL(inData(int,int,int,int,int,int,int,int,int)),
            my, SLOT(outData(int,int,int,int,int,int,int,int,int)), Qt::DirectConnection);
    emit inData(ui->componentNumberSpin->text().toInt(), ui->selectCountSpin->text().toInt(),
                ui->countGenerationSpin->text().toInt(), ui->individNumberSpin->text().toInt(),
                ui->geneNumberSpin->text().toInt(), ui->mutationCombo->currentIndex(),
                ui->tournSizeSpin->text().toInt(), ui->leftSearchSpin->text().toInt(),
                ui->rightSearchSpin->text().toInt());

    connect(this, SIGNAL(inFilename(QString)), my, SLOT(outFilename(QString)), Qt::DirectConnection);
    emit inFilename(filename);

    connect(this, SIGNAL(inPrevSelect(Points)), my, SLOT(outPrevSelect(Points)), Qt::DirectConnection);
    if (ui->currentRadio->isChecked())
        emit inPrevSelect(prevSelect);

    connect(this, SIGNAL(inRadio(bool, bool, bool)), my, SLOT(outRadio(bool, bool, bool)), Qt::DirectConnection);
    emit inRadio(ui->currentRadio->isChecked(), ui->randomRadio->isChecked(), ui->fileRadio->isChecked());

    connect(my, SIGNAL(inResult(double, double)), this, SLOT(outResult(double, double)));

    connect(my, SIGNAL(inProgress(int)), this, SLOT(outProgress(int)));

    connect(my, SIGNAL(inDisplayTable(Points)), this, SLOT(outDisplayTable(Points)));

    connect(my, SIGNAL(inDisplayGraph(Points, Points, Points)), this, SLOT(outDisplayGraph(Points, Points, Points)));

    thread->start();
}

void MainWindow::outDisplayTable(Points select)
{
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
    ui->selectSave->setEnabled(1);
}

void MainWindow::outDisplayGraph(Points selectForGraph, Points select, Points graph)
{
    prevSelect = select;
    this->graph = graph;
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
        funcY.push_back(sin(funcX[i] + 0.3));
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
}

void MainWindow::openFile()
{
    filename=QFileDialog::getOpenFileName(this, tr("Открыть файл выборки"), "", tr("Text files (*.txt *.csv)"));
}

void MainWindow::saveFileSelect()
{
    QString filename=QFileDialog::getSaveFileName(this, tr("Сохранить файл выборки"),"",tr("Excel file (*.csv);;Text file (*.txt)"));
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
    QString filename=QFileDialog::getSaveFileName(this, tr("Сохранить файл регрессии"),"",tr("Excel file (*.csv);;Text file (*.txt)"));
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

void MainWindow::on_currentRadio_clicked()
{
    ui->label_2->hide();
    ui->componentNumberSpin->hide();
    ui->label_5->hide();
    ui->selectCountSpin->hide();
}

void MainWindow::on_fileRadio_clicked()
{
    ui->label_2->hide();
    ui->componentNumberSpin->hide();
    ui->label_5->hide();
    ui->selectCountSpin->hide();
}

void MainWindow::on_randomRadio_clicked()
{
    ui->label_2->show();
    ui->componentNumberSpin->show();
    ui->label_5->show();
    ui->selectCountSpin->show();
}

void MainWindow::on_selectSave_triggered()
{
    saveFileSelect();
}

void MainWindow::on_regressionSave_triggered()
{
    saveFileGraph(graph);
}

void MainWindow::on_setDefault_triggered()
{
    ui->componentNumberSpin->setValue(3);
    ui->leftSearchSpin->setValue(0);
    ui->rightSearchSpin->setValue(5);
    ui->selectCountSpin->setValue(1000);
    ui->countGenerationSpin->setValue(100);
    ui->individNumberSpin->setValue(30);
    ui->geneNumberSpin->setValue(20);
    ui->tournSizeSpin->setValue(2);
    ui->mutationCombo->setCurrentIndex(1);
}
