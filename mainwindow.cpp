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
    fillSelectRand(select, 200, 2);

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
    QVector <double> x, y;
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
    ui->textEdit->insertPlainText("min Select: "+minS.toString()+"\nmax Select: "+maxS.toString()+"\nmin Graph: "+minG.toString()+"\nmax Graph: "+maxG.toString());
    //ui->textEdit->insertPlainText(graph.toString());
    displayGraph(select, graph);

}

void MainWindow::displayGraph(Points select, Points graph)
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
    ui->widget->graph(1)->setData(select.getVectorFirstX(), select.getVectorFirstY());
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
    QVector <double> X, Y;
    for (int i = 0; i < 1000; ++i) {
        X.push_back(min + i * ((max - min) / 1000));
        Y.push_back(sin(X[i]));
    }
    ui->widget->graph(2)->setData(X, Y);
    ui->widget->graph(2)->setPen(QColor(0, 255, 0, 255));
    ui->widget->xAxis->setLabel("X");
    ui->widget->yAxis->setLabel("Y");
    ui->widget->xAxis->setRange(min - 0.1, max + 0.1);
    min = select[0].getY(0);
    max = select[0].getY(0);
    for (int i = 1; i < select.sizePoints(); ++i) {
        if (select[i].getY(0) < min) min = select[i].getY(0);
        if (select[i].getY(0) > max) max = select[i].getY(0);
    }
    ui->widget->yAxis->setRange(min - 0.1, max + 0.1);
    ui->widget->replot();
}
