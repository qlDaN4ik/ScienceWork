#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "content.h"
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
    QString filename;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void displayGraph(Points, Points, Points);
    void on_pushButton_clicked();
    void openFile();
    void saveFileSelect();
    void saveFileGraph(Points);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
