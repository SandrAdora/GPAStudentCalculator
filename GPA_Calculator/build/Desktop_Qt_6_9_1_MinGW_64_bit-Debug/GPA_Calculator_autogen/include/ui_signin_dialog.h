/********************************************************************************
** Form generated from reading UI file 'signin_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_DIALOG_H
#define UI_SIGNIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signIn_Dialog
{
public:
    QWidget *widget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *signIn_Dialog)
    {
        if (signIn_Dialog->objectName().isEmpty())
            signIn_Dialog->setObjectName("signIn_Dialog");
        signIn_Dialog->resize(462, 328);
        widget = new QWidget(signIn_Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 60, 391, 221));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 30, 221, 41));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 90, 221, 31));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 63, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 63, 20));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 150, 93, 29));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 150, 93, 29));
        label_3 = new QLabel(signIn_Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 40, 101, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAutoFillBackground(true);

        retranslateUi(signIn_Dialog);

        QMetaObject::connectSlotsByName(signIn_Dialog);
    } // setupUi

    void retranslateUi(QDialog *signIn_Dialog)
    {
        signIn_Dialog->setWindowTitle(QCoreApplication::translate("signIn_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signIn_Dialog", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("signIn_Dialog", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("signIn_Dialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signIn_Dialog", "Cancel", nullptr));
        label_3->setText(QCoreApplication::translate("signIn_Dialog", "SignIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signIn_Dialog: public Ui_signIn_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_DIALOG_H
