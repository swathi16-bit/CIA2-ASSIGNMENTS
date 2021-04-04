#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QIcon>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayimage->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_displayimage_clicked(bool checked)
{

    if(checked)
    {
        checked=false;
        QPixmap pixmap(":/icon/images/on.jpg");
        QIcon ButtonIcon(pixmap);
        ui->displayimage->setIcon(ButtonIcon);
        ui->displayimage->setIconSize(QSize(200,200));
        qDebug()<<"Button Checked-- ON--";

    }
    else
    {   QPixmap pixmap(":/icon/images/poweroff.jpg");
        QIcon ButtonIcon(pixmap);
        ui->displayimage->setIcon(ButtonIcon);
        ui->displayimage->setIconSize(QSize(200,200));
        qDebug()<<"Button Checked--OFF--";
    }
}

void MainWindow::on_warning_clicked()
{
    QMessageBox::warning(this,"Swathi 212218104167","This is a warning message");
}


void MainWindow::on_critical_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Swathi 212218104167","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes || reply == QMessageBox::No)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::YesToAll)
    {
       QMessageBox::warning(this,"Swathi 212218104167","Display the message with warning as YesToAll");
    }
    if(reply == QMessageBox::NoToAll)
    {
       QMessageBox::warning(this,"Swathi 212218104167","Don't display the message with warning as YesToAll");
    }

}

void MainWindow::on_question_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Swathi 212218104167","Do you like apples?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Apple","Yes");
    }
    else
    {
        QMessageBox::information(this,"No apple","No");
    }
}

void MainWindow::on_information_clicked()
{
    QMessageBox::information(this,"Swathi 212218104167","This is information box");
}
