/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QPushButton *calculateButton;
    QPushButton *clearData;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 568);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 136, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 781, 491));
        QFont font;
        font.setPointSize(8);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("Background-color: rgb(186, 189, 182);"));
        calculateButton = new QPushButton(centralWidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
        calculateButton->setGeometry(QRect(600, 510, 89, 25));
        calculateButton->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"selection-color: rgb(245, 121, 0);\n"
"selection-color: rgb(239, 41, 41);"));
        clearData = new QPushButton(centralWidget);
        clearData->setObjectName(QString::fromUtf8("clearData"));
        clearData->setGeometry(QRect(700, 510, 89, 25));
        clearData->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"selection-color: rgb(245, 121, 0);\n"
"selection-color: rgb(239, 41, 41);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        clearData->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
