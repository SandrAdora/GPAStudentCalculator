#include "registration_dialog.h"
#include "ui_registration_dialog.h"
#include "signin_dialog.h"
#include <QMessageBox>

registration_Dialog::registration_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registration_Dialog)
{
    ui->setupUi(this);
}

registration_Dialog::~registration_Dialog()
{
    delete ui;
}

void registration_Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Registration", "was successfull");

    signIn = new signIn_Dialog(this);
    signIn->show();



}

