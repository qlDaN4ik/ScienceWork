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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QTabWidget>
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
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
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
    QPushButton *geneticButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QDoubleSpinBox *bandwidthSpin;
    QPushButton *manuallyButton;
    QCustomPlot *widget;
    QTableView *tableView;
    QTextEdit *textEdit;
    QProgressBar *progressBar;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *cutValueSpin;
    QLabel *label;
    QRadioButton *currentRadio;
    QRadioButton *fileRadio;
    QRadioButton *randomRadio;
    QWidget *selectionWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *componentNumber;
    QLabel *componentNumberLabel;
    QSpinBox *componentNumberSpin;
    QHBoxLayout *horizontalLayout_10;
    QLabel *selectCountLabel;
    QSpinBox *selectCountSpin;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *leftSelectSpin;
    QLabel *label_3;
    QSpinBox *rightSelectSpin;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *noiseCheck;
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
        selectSave->setEnabled(false);
        regressionSave = new QAction(MainWindow);
        regressionSave->setObjectName(QStringLiteral("regressionSave"));
        regressionSave->setEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
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


        verticalLayout_4->addWidget(widget_3);

        geneticButton = new QPushButton(tab);
        geneticButton->setObjectName(QStringLiteral("geneticButton"));

        verticalLayout_4->addWidget(geneticButton);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_5 = new QWidget(tab_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(widget_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        bandwidthSpin = new QDoubleSpinBox(widget_5);
        bandwidthSpin->setObjectName(QStringLiteral("bandwidthSpin"));
        bandwidthSpin->setValue(0.1);

        horizontalLayout_11->addWidget(bandwidthSpin);


        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_6->addWidget(widget_5);

        manuallyButton = new QPushButton(tab_2);
        manuallyButton->setObjectName(QStringLiteral("manuallyButton"));

        verticalLayout_6->addWidget(manuallyButton);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(400, 200));

        gridLayout->addWidget(widget, 0, 2, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);
        tableView->setMinimumSize(QSize(200, 400));

        gridLayout->addWidget(tableView, 0, 3, 2, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textEdit, 2, 3, 2, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy4);
        progressBar->setMinimumSize(QSize(400, 0));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 1, 1, 2);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy5);
        widget_4->setMinimumSize(QSize(300, 280));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cutValueSpin = new QDoubleSpinBox(widget_2);
        cutValueSpin->setObjectName(QStringLiteral("cutValueSpin"));
        cutValueSpin->setMinimum(-99);

        horizontalLayout_4->addWidget(cutValueSpin);


        verticalLayout->addLayout(horizontalLayout_4);

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


        verticalLayout_3->addWidget(widget_2);

        selectionWidget = new QWidget(widget_4);
        selectionWidget->setObjectName(QStringLiteral("selectionWidget"));
        selectionWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_7 = new QVBoxLayout(selectionWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        componentNumber = new QHBoxLayout();
        componentNumber->setSpacing(6);
        componentNumber->setObjectName(QStringLiteral("componentNumber"));
        componentNumberLabel = new QLabel(selectionWidget);
        componentNumberLabel->setObjectName(QStringLiteral("componentNumberLabel"));

        componentNumber->addWidget(componentNumberLabel);

        componentNumberSpin = new QSpinBox(selectionWidget);
        componentNumberSpin->setObjectName(QStringLiteral("componentNumberSpin"));
        componentNumberSpin->setMinimum(2);
        componentNumberSpin->setValue(3);

        componentNumber->addWidget(componentNumberSpin);


        verticalLayout_7->addLayout(componentNumber);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        selectCountLabel = new QLabel(selectionWidget);
        selectCountLabel->setObjectName(QStringLiteral("selectCountLabel"));

        horizontalLayout_10->addWidget(selectCountLabel);

        selectCountSpin = new QSpinBox(selectionWidget);
        selectCountSpin->setObjectName(QStringLiteral("selectCountSpin"));
        selectCountSpin->setMaximum(10000);
        selectCountSpin->setValue(1000);

        horizontalLayout_10->addWidget(selectCountSpin);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(selectionWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        leftSelectSpin = new QSpinBox(selectionWidget);
        leftSelectSpin->setObjectName(QStringLiteral("leftSelectSpin"));
        leftSelectSpin->setMinimum(-99);
        leftSelectSpin->setValue(-5);

        horizontalLayout->addWidget(leftSelectSpin);

        label_3 = new QLabel(selectionWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        rightSelectSpin = new QSpinBox(selectionWidget);
        rightSelectSpin->setObjectName(QStringLiteral("rightSelectSpin"));
        rightSelectSpin->setValue(5);

        horizontalLayout->addWidget(rightSelectSpin);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        noiseCheck = new QCheckBox(selectionWidget);
        noiseCheck->setObjectName(QStringLiteral("noiseCheck"));

        horizontalLayout_2->addWidget(noiseCheck);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(selectionWidget);


        gridLayout->addWidget(widget_4, 1, 0, 2, 1);

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

        tabWidget->setCurrentIndex(0);
        mutationCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        setDefault->setText(QApplication::translate("MainWindow", "\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", nullptr));
        selectSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\321\213\320\261\320\276\321\200\320\272\321\203...", nullptr));
        regressionSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\263\321\200\320\265\321\201\321\201\320\270\321\216...", nullptr));
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

        geneticButton->setText(QApplication::translate("MainWindow", "GO", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\200\320\260\320\267\320\274\321\213\321\202\320\276\321\201\321\202\320\270", nullptr));
        manuallyButton->setText(QApplication::translate("MainWindow", "GO", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\260\321\217 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \321\201\321\200\320\265\320\267 \321\201 X =", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\262\321\213\320\261\320\276\321\200\320\272\321\203:", nullptr));
        currentRadio->setText(QApplication::translate("MainWindow", "\321\202\320\265\320\272\321\203\321\211\321\203\321\216", nullptr));
        fileRadio->setText(QApplication::translate("MainWindow", "\320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        randomRadio->setText(QApplication::translate("MainWindow", "\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\203\321\216", nullptr));
        componentNumberLabel->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\271:", nullptr));
        selectCountLabel->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\202\320\276\321\207\320\265\320\272 \320\262\321\213\320\261\320\276\321\200\320\272\320\270:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\276\321\202", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\264\320\276", nullptr));
        noiseCheck->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\274\320\265\321\205\321\203", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
