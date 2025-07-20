#ifndef SIGNIN_DIALOG_H
#define SIGNIN_DIALOG_H

#include <QDialog>

namespace Ui {
class signIn_Dialog;
}

class signIn_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit signIn_Dialog(QWidget *parent = nullptr);
    ~signIn_Dialog();

private:
    Ui::signIn_Dialog *ui;
};

#endif // SIGNIN_DIALOG_H
