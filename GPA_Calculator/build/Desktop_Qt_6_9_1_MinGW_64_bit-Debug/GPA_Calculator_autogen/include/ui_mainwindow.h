/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionundo;
    QAction *actionredo;
    QAction *actionsignIn;
    QAction *actionregistration;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QLabel *label_calculator_mainWindow;
    QTextEdit *textEdit_gpa_calculator_manual;
    QPushButton *pushButton_calculate_MainWindow;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setBold(true);
        MainWindow->setFont(font);
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName("actionundo");
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName("actionredo");
        actionsignIn = new QAction(MainWindow);
        actionsignIn->setObjectName("actionsignIn");
        actionregistration = new QAction(MainWindow);
        actionregistration->setObjectName("actionregistration");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 661, 181));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/documentation/GPA-Calculator-2.png);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 230, 561, 221));
        label_calculator_mainWindow = new QLabel(widget);
        label_calculator_mainWindow->setObjectName("label_calculator_mainWindow");
        label_calculator_mainWindow->setGeometry(QRect(90, 30, 191, 41));
        label_calculator_mainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 233);"));
        textEdit_gpa_calculator_manual = new QTextEdit(widget);
        textEdit_gpa_calculator_manual->setObjectName("textEdit_gpa_calculator_manual");
        textEdit_gpa_calculator_manual->setGeometry(QRect(60, 109, 421, 31));
        pushButton_calculate_MainWindow = new QPushButton(widget);
        pushButton_calculate_MainWindow->setObjectName("pushButton_calculate_MainWindow");
        pushButton_calculate_MainWindow->setGeometry(QRect(230, 160, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuMenu->addAction(actionundo);
        menuMenu->addAction(actionredo);
        menuMenu->addAction(actionsignIn);
        menuMenu->addAction(actionregistration);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionundo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionredo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionsignIn->setText(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        actionregistration->setText(QCoreApplication::translate("MainWindow", "Registration", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QString());
        label_calculator_mainWindow->setText(QCoreApplication::translate("MainWindow", "GPA Calculator", nullptr));
        textEdit_gpa_calculator_manual->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_calculate_MainWindow->setText(QCoreApplication::translate("MainWindow", "calculate", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
