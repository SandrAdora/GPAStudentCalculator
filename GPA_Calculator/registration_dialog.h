#ifndef REGISTRATION_DIALOG_H
#define REGISTRATION_DIALOG_H
#include "ui_registration_dialog.h"
#include "signin_dialog.h"
#include <QDialog>

namespace Ui {
class registration_Dialog;
}

class registration_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit registration_Dialog(QWidget *parent = nullptr);
    ~registration_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registration_Dialog *ui;
    signIn_Dialog *signIn;


};

#endif // REGISTRATION_DIALOG_H
