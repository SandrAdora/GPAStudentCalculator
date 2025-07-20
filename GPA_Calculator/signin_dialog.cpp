#include "signin_dialog.h"
#include "ui_signin_dialog.h"

signIn_Dialog::signIn_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signIn_Dialog)
{
    ui->setupUi(this);
}

signIn_Dialog::~signIn_Dialog()
{
    delete ui;
}
