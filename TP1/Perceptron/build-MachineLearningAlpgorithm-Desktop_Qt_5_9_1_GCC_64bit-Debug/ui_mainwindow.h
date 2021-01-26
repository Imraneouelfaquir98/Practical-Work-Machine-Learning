/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QPushButton *perceptronButton;
    QPushButton *clearData;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Red;
    QRadioButton *Blue;
    QRadioButton *Default;
    QPushButton *AdalineButton;
    QPushButton *PocketLAButton;
    QPushButton *BackPropAButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(804, 568);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(74, 136, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 781, 491));
        QFont font;
        font.setPointSize(8);
        widget->setFont(font);
        widget->setStyleSheet(QStringLiteral("Background-color: rgb(186, 189, 182);"));
        perceptronButton = new QPushButton(centralWidget);
        perceptronButton->setObjectName(QStringLiteral("perceptronButton"));
        perceptronButton->setGeometry(QRect(600, 510, 89, 25));
        perceptronButton->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"selection-color: rgb(245, 121, 0);\n"
"selection-color: rgb(239, 41, 41);"));
        clearData = new QPushButton(centralWidget);
        clearData->setObjectName(QStringLiteral("clearData"));
        clearData->setGeometry(QRect(700, 510, 89, 25));
        clearData->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"selection-color: rgb(245, 121, 0);\n"
"selection-color: rgb(239, 41, 41);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 512, 199, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Red = new QRadioButton(layoutWidget);
        Red->setObjectName(QStringLiteral("Red"));
        Red->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(211, 215, 207);"));

        horizontalLayout->addWidget(Red);

        Blue = new QRadioButton(layoutWidget);
        Blue->setObjectName(QStringLiteral("Blue"));
        Blue->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(211, 215, 207);"));

        horizontalLayout->addWidget(Blue);

        Default = new QRadioButton(layoutWidget);
        Default->setObjectName(QStringLiteral("Default"));
        Default->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(Default);

        AdalineButton = new QPushButton(centralWidget);
        AdalineButton->setObjectName(QStringLiteral("AdalineButton"));
        AdalineButton->setGeometry(QRect(500, 510, 89, 25));
        AdalineButton->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"selection-color: rgb(245, 121, 0);\n"
"selection-color: rgb(239, 41, 41);"));
        PocketLAButton = new QPushButton(centralWidget);
        PocketLAButton->setObjectName(QStringLiteral("PocketLAButton"));
        PocketLAButton->setGeometry(QRect(400, 510, 89, 25));
        PocketLAButton->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"selection-background-color: rgb(239, 41, 41);"));
        BackPropAButton = new QPushButton(centralWidget);
        BackPropAButton->setObjectName(QStringLiteral("BackPropAButton"));
        BackPropAButton->setGeometry(QRect(300, 510, 89, 25));
        BackPropAButton->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"selection-background-color: rgb(239, 41, 41);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        perceptronButton->setText(QApplication::translate("MainWindow", "Perceptron", Q_NULLPTR));
        clearData->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        Red->setText(QApplication::translate("MainWindow", "Red", Q_NULLPTR));
        Blue->setText(QApplication::translate("MainWindow", "Bule", Q_NULLPTR));
        Default->setText(QApplication::translate("MainWindow", "Default", Q_NULLPTR));
        AdalineButton->setText(QApplication::translate("MainWindow", "Adaline", Q_NULLPTR));
        PocketLAButton->setText(QApplication::translate("MainWindow", "PLA", Q_NULLPTR));
        BackPropAButton->setText(QApplication::translate("MainWindow", "Back Prop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
