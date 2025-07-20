#include "mainwindow.h"
#include "ui_mainwindow.h"

# include <QMessageBox>
#include <QPixmap>
#include <QVBoxLayout>
#include <QActionGroup>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    // Add image to window
    //QPixmap pix("/res/documentation/GPA-Calculator-2.png");
    //ui->label->setPixmap(pix.scaled(300, 500, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_calculate_MainWindow_clicked()
{
    QMessageBox::information(this, "GPA Calculator", "calculating...");
}



void MainWindow::on_actionundo_triggered()
{

}

void MainWindow::on_actionredo_triggered()
{

}

void MainWindow::on_actionsignIn_triggered()
{
    hide();
    signIn = new signIn_Dialog(this);
    signIn->show();
}


void MainWindow::on_actionregistration_triggered()
{
    hide();
    reg = new registration_Dialog(this);
    reg->show();
}


void MainWindow::on_actionAbout_triggered()
{

}

