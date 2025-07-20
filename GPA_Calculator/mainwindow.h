#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include "registration_dialog.h"
#include "signin_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_calculate_MainWindow_clicked();



    void on_actionundo_triggered();

    void on_actionredo_triggered();

    void on_actionsignIn_triggered();

    void on_actionregistration_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    signIn_Dialog *signIn;
    registration_Dialog *reg;



};
#endif // MAINWINDOW_H
