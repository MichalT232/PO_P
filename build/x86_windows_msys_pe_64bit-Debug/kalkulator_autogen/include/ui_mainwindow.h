/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *display;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pamiecread;
    QPushButton *pamiecclear;
    QPushButton *pamiecdod;
    QPushButton *clear;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *plus;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *minus;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *mnoz;
    QPushButton *modulo;
    QPushButton *b0;
    QPushButton *dziel;
    QPushButton *wynik;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(0, 0, 801, 111));
        QFont font;
        font.setPointSize(24);
        display->setFont(font);
        display->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 110, 801, 461));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pamiecread = new QPushButton(widget);
        pamiecread->setObjectName("pamiecread");

        gridLayout->addWidget(pamiecread, 0, 0, 1, 1);

        pamiecclear = new QPushButton(widget);
        pamiecclear->setObjectName("pamiecclear");

        gridLayout->addWidget(pamiecclear, 0, 1, 1, 1);

        pamiecdod = new QPushButton(widget);
        pamiecdod->setObjectName("pamiecdod");

        gridLayout->addWidget(pamiecdod, 0, 2, 1, 1);

        clear = new QPushButton(widget);
        clear->setObjectName("clear");

        gridLayout->addWidget(clear, 0, 3, 1, 1);

        b7 = new QPushButton(widget);
        b7->setObjectName("b7");

        gridLayout->addWidget(b7, 1, 0, 1, 1);

        b8 = new QPushButton(widget);
        b8->setObjectName("b8");

        gridLayout->addWidget(b8, 1, 1, 1, 1);

        b9 = new QPushButton(widget);
        b9->setObjectName("b9");

        gridLayout->addWidget(b9, 1, 2, 1, 1);

        plus = new QPushButton(widget);
        plus->setObjectName("plus");

        gridLayout->addWidget(plus, 1, 3, 1, 1);

        b4 = new QPushButton(widget);
        b4->setObjectName("b4");

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b5 = new QPushButton(widget);
        b5->setObjectName("b5");

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        b6 = new QPushButton(widget);
        b6->setObjectName("b6");

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        minus = new QPushButton(widget);
        minus->setObjectName("minus");

        gridLayout->addWidget(minus, 2, 3, 1, 1);

        b1 = new QPushButton(widget);
        b1->setObjectName("b1");

        gridLayout->addWidget(b1, 3, 0, 1, 1);

        b2 = new QPushButton(widget);
        b2->setObjectName("b2");

        gridLayout->addWidget(b2, 3, 1, 1, 1);

        b3 = new QPushButton(widget);
        b3->setObjectName("b3");

        gridLayout->addWidget(b3, 3, 2, 1, 1);

        mnoz = new QPushButton(widget);
        mnoz->setObjectName("mnoz");

        gridLayout->addWidget(mnoz, 3, 3, 1, 1);

        modulo = new QPushButton(widget);
        modulo->setObjectName("modulo");

        gridLayout->addWidget(modulo, 4, 0, 1, 1);

        b0 = new QPushButton(widget);
        b0->setObjectName("b0");

        gridLayout->addWidget(b0, 4, 1, 1, 1);

        dziel = new QPushButton(widget);
        dziel->setObjectName("dziel");

        gridLayout->addWidget(dziel, 4, 2, 1, 1);

        wynik = new QPushButton(widget);
        wynik->setObjectName("wynik");

        gridLayout->addWidget(wynik, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QString());
        pamiecread->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pamiecclear->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pamiecdod->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        b7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        mnoz->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        b0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dziel->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        wynik->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
