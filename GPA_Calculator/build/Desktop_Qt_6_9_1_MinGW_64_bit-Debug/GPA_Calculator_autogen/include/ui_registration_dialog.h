/********************************************************************************
** Form generated from reading UI file 'registration_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_DIALOG_H
#define UI_REGISTRATION_DIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration_Dialog
{
public:
    QWidget *widget;
    QComboBox *comboBox_courses;
    QLabel *label_fullname;
    QLabel *label_birthdate;
    QLabel *label_gender;
    QLabel *label_email;
    QLabel *label_password;
    QLineEdit *lineEdit_fullname;
    QDateEdit *dateEdit_birthdate;
    QLineEdit *lineEdit_gender;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_password;
    QLabel *label_registration;
    QLabel *label_signup;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *registration_Dialog)
    {
        if (registration_Dialog->objectName().isEmpty())
            registration_Dialog->setObjectName("registration_Dialog");
        registration_Dialog->resize(571, 422);
        widget = new QWidget(registration_Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 60, 321, 271));
        comboBox_courses = new QComboBox(widget);
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->addItem(QString());
        comboBox_courses->setObjectName("comboBox_courses");
        comboBox_courses->setGeometry(QRect(10, 20, 281, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(comboBox_courses->sizePolicy().hasHeightForWidth());
        comboBox_courses->setSizePolicy(sizePolicy);
        label_fullname = new QLabel(widget);
        label_fullname->setObjectName("label_fullname");
        label_fullname->setGeometry(QRect(20, 70, 81, 20));
        label_birthdate = new QLabel(widget);
        label_birthdate->setObjectName("label_birthdate");
        label_birthdate->setGeometry(QRect(22, 110, 71, 20));
        label_gender = new QLabel(widget);
        label_gender->setObjectName("label_gender");
        label_gender->setGeometry(QRect(22, 150, 71, 20));
        label_email = new QLabel(widget);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(22, 190, 71, 20));
        label_password = new QLabel(widget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(22, 230, 71, 20));
        lineEdit_fullname = new QLineEdit(widget);
        lineEdit_fullname->setObjectName("lineEdit_fullname");
        lineEdit_fullname->setGeometry(QRect(130, 70, 161, 26));
        dateEdit_birthdate = new QDateEdit(widget);
        dateEdit_birthdate->setObjectName("dateEdit_birthdate");
        dateEdit_birthdate->setGeometry(QRect(130, 110, 161, 26));
        dateEdit_birthdate->setCalendarPopup(true);
        dateEdit_birthdate->setDate(QDate(2025, 7, 20));
        lineEdit_gender = new QLineEdit(widget);
        lineEdit_gender->setObjectName("lineEdit_gender");
        lineEdit_gender->setGeometry(QRect(130, 150, 161, 26));
        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(130, 190, 161, 26));
        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(130, 230, 161, 26));
        label_registration = new QLabel(registration_Dialog);
        label_registration->setObjectName("label_registration");
        label_registration->setGeometry(QRect(30, 10, 171, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        label_registration->setFont(font);
        label_signup = new QLabel(registration_Dialog);
        label_signup->setObjectName("label_signup");
        label_signup->setGeometry(QRect(20, 120, 161, 131));
        label_signup->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/res/documentation/GPA-Calculator-2.png);\n"
"background-color: rgb(255, 239, 222);"));
        pushButton = new QPushButton(registration_Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 360, 93, 29));
        pushButton_2 = new QPushButton(registration_Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(390, 360, 93, 29));

        retranslateUi(registration_Dialog);

        QMetaObject::connectSlotsByName(registration_Dialog);
    } // setupUi

    void retranslateUi(QDialog *registration_Dialog)
    {
        registration_Dialog->setWindowTitle(QCoreApplication::translate("registration_Dialog", "Dialog", nullptr));
        comboBox_courses->setItemText(0, QCoreApplication::translate("registration_Dialog", "Choose course of Study", nullptr));
        comboBox_courses->setItemText(1, QCoreApplication::translate("registration_Dialog", "Mathematics", nullptr));
        comboBox_courses->setItemText(2, QCoreApplication::translate("registration_Dialog", "Informatics", nullptr));
        comboBox_courses->setItemText(3, QCoreApplication::translate("registration_Dialog", "Medical Informatics", nullptr));
        comboBox_courses->setItemText(4, QCoreApplication::translate("registration_Dialog", "Technical Informatics", nullptr));
        comboBox_courses->setItemText(5, QCoreApplication::translate("registration_Dialog", "Engineering", nullptr));
        comboBox_courses->setItemText(6, QCoreApplication::translate("registration_Dialog", "Technical Engineering", nullptr));
        comboBox_courses->setItemText(7, QCoreApplication::translate("registration_Dialog", "Data Science", nullptr));
        comboBox_courses->setItemText(8, QCoreApplication::translate("registration_Dialog", "Artificial Intelligence", nullptr));
        comboBox_courses->setItemText(9, QCoreApplication::translate("registration_Dialog", "Biomedical Engineering", nullptr));
        comboBox_courses->setItemText(10, QCoreApplication::translate("registration_Dialog", "Medical Engineering", nullptr));

        label_fullname->setText(QCoreApplication::translate("registration_Dialog", "Full name", nullptr));
        label_birthdate->setText(QCoreApplication::translate("registration_Dialog", "Birthdate", nullptr));
        label_gender->setText(QCoreApplication::translate("registration_Dialog", "Gender", nullptr));
        label_email->setText(QCoreApplication::translate("registration_Dialog", "Email", nullptr));
        label_password->setText(QCoreApplication::translate("registration_Dialog", "Password", nullptr));
        label_registration->setText(QCoreApplication::translate("registration_Dialog", "Registration", nullptr));
        label_signup->setText(QString());
        pushButton->setText(QCoreApplication::translate("registration_Dialog", "SignUp", nullptr));
        pushButton_2->setText(QCoreApplication::translate("registration_Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration_Dialog: public Ui_registration_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_DIALOG_H
