#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "base.h"
#include <ctime>
#include "QStandardItemModel"
#include "QStandardItem"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void outResult(double bandwidth, double error);
    void outProgress(int percent);
    void outDisplayTable(Points select);
    void outDisplayGraph(Points selectForGraph, Points select, Points graph);
    void on_pushButton_clicked();
    void openFile();
    void saveFileSelect();
    void saveFileGraph(Points);

    void on_currentRadio_clicked();

    void on_randomRadio_clicked();

    void on_fileRadio_clicked();

signals:
    void inRadio(bool current, bool random, bool file);
    void inFilename(QString filename);
    void inData(int componentNumber, int selectCount, int countGeneration, int individNumber, int geneNumber, int mut, int tournSize,
                int leftSearch, int rightSearch);
private:
    QString filename;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
