/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *setDefault;
    QAction *selectSave;
    QAction *regressionSave;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *currentRadio;
    QRadioButton *fileRadio;
    QRadioButton *randomRadio;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *componentNumber;
    QLabel *label_2;
    QSpinBox *componentNumberSpin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *selectCountSpin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *countGenerationSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *leftSearchSpin;
    QLabel *label_10;
    QSpinBox *rightSearchSpin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpinBox *individNumberSpin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpinBox *geneNumberSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpinBox *tournSizeSpin;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *mutationCombo;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1310, 814);
        setDefault = new QAction(MainWindow);
        setDefault->setObjectName(QStringLiteral("setDefault"));
        selectSave = new QAction(MainWindow);
        selectSave->setObjectName(QStringLiteral("selectSave"));
        regressionSave = new QAction(MainWindow);
        regressionSave->setObjectName(QStringLiteral("regressionSave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(1030, 490, 271, 251));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 10, 881, 421));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(850, 640, 121, 91));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(1030, 10, 271, 471));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(440, 510, 111, 111));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        currentRadio = new QRadioButton(widget_2);
        currentRadio->setObjectName(QStringLiteral("currentRadio"));
        currentRadio->setEnabled(false);
        currentRadio->setFont(font);

        verticalLayout->addWidget(currentRadio);

        fileRadio = new QRadioButton(widget_2);
        fileRadio->setObjectName(QStringLiteral("fileRadio"));
        fileRadio->setFont(font);

        verticalLayout->addWidget(fileRadio);

        randomRadio = new QRadioButton(widget_2);
        randomRadio->setObjectName(QStringLiteral("randomRadio"));
        randomRadio->setFont(font);
        randomRadio->setChecked(true);

        verticalLayout->addWidget(randomRadio);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 450, 401, 291));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        componentNumber = new QHBoxLayout();
        componentNumber->setSpacing(6);
        componentNumber->setObjectName(QStringLiteral("componentNumber"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        componentNumber->addWidget(label_2);

        componentNumberSpin = new QSpinBox(widget_3);
        componentNumberSpin->setObjectName(QStringLiteral("componentNumberSpin"));
        componentNumberSpin->setValue(3);

        componentNumber->addWidget(componentNumberSpin);


        verticalLayout_2->addLayout(componentNumber);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        selectCountSpin = new QSpinBox(widget_3);
        selectCountSpin->setObjectName(QStringLiteral("selectCountSpin"));
        selectCountSpin->setMaximum(10000);
        selectCountSpin->setValue(1000);

        horizontalLayout_4->addWidget(selectCountSpin);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        countGenerationSpin = new QSpinBox(widget_3);
        countGenerationSpin->setObjectName(QStringLiteral("countGenerationSpin"));
        countGenerationSpin->setMaximum(1000);
        countGenerationSpin->setValue(100);

        horizontalLayout_5->addWidget(countGenerationSpin);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        leftSearchSpin = new QSpinBox(widget_3);
        leftSearchSpin->setObjectName(QStringLiteral("leftSearchSpin"));

        horizontalLayout_3->addWidget(leftSearchSpin);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_3->addWidget(label_10);

        rightSearchSpin = new QSpinBox(widget_3);
        rightSearchSpin->setObjectName(QStringLiteral("rightSearchSpin"));
        rightSearchSpin->setValue(5);

        horizontalLayout_3->addWidget(rightSearchSpin);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        individNumberSpin = new QSpinBox(widget_3);
        individNumberSpin->setObjectName(QStringLiteral("individNumberSpin"));
        individNumberSpin->setValue(30);

        horizontalLayout_6->addWidget(individNumberSpin);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        geneNumberSpin = new QSpinBox(widget_3);
        geneNumberSpin->setObjectName(QStringLiteral("geneNumberSpin"));
        geneNumberSpin->setValue(20);

        horizontalLayout_7->addWidget(geneNumberSpin);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        tournSizeSpin = new QSpinBox(widget_3);
        tournSizeSpin->setObjectName(QStringLiteral("tournSizeSpin"));
        tournSizeSpin->setValue(2);

        horizontalLayout_8->addWidget(tournSizeSpin);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        mutationCombo = new QComboBox(widget_3);
        mutationCombo->addItem(QString());
        mutationCombo->addItem(QString());
        mutationCombo->addItem(QString());
        mutationCombo->setObjectName(QStringLiteral("mutationCombo"));

        horizontalLayout_9->addWidget(mutationCombo);


        verticalLayout_2->addLayout(horizontalLayout_9);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(440, 710, 371, 31));
        progressBar->setValue(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1310, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(selectSave);
        menu->addAction(regressionSave);
        menu_2->addAction(setDefault);

        retranslateUi(MainWindow);

        mutationCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        setDefault->setText(QApplication::translate("MainWindow", "\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", nullptr));
        selectSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\321\213\320\261\320\276\321\200\320\272\321\203...", nullptr));
        regressionSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\263\321\200\320\265\321\201\321\201\320\270\321\216...", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "GO", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\262\321\213\320\261\320\276\321\200\320\272\321\203:", nullptr));
        currentRadio->setText(QApplication::translate("MainWindow", "\321\202\320\265\320\272\321\203\321\211\321\203\321\216", nullptr));
        fileRadio->setText(QApplication::translate("MainWindow", "\320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        randomRadio->setText(QApplication::translate("MainWindow", "\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\203\321\216", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\271:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\202\320\276\321\207\320\265\320\272 \320\262\321\213\320\261\320\276\321\200\320\272\320\270:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\272\320\276\320\273\320\265\320\275\320\270\320\271:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\276\321\202", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\264\320\276", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\270\320\275\320\264\320\270\320\262\320\270\320\264\320\276\320\262 \320\262 \320\277\320\276\320\272\320\276\320\273\320\265\320\275\320\270\320\270:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\263\320\265\320\275\320\276\320\262 \321\203 \320\270\320\275\320\264\320\270\320\262\320\270\320\264\320\260:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\202\321\203\321\200\320\275\320\270\321\200\320\260:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \320\274\321\203\321\202\320\260\321\206\320\270\320\270:", nullptr));
        mutationCombo->setItemText(0, QApplication::translate("MainWindow", "\321\201\320\273\320\260\320\261\320\260\321\217", nullptr));
        mutationCombo->setItemText(1, QApplication::translate("MainWindow", "\321\201\321\200\320\265\320\264\320\275\321\217\321\217", nullptr));
        mutationCombo->setItemText(2, QApplication::translate("MainWindow", "\321\201\320\270\320\273\321\214\320\275\320\260\321\217", nullptr));

        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
