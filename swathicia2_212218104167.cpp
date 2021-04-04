#include "swathicia2_212218104167.h"
#include "ui_swathicia2_212218104167.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>
Swathicia2_212218104167::Swathicia2_212218104167(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Swathicia2_212218104167)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));
    ui->pushButton->setCheckable(true);
    QAction *a1=new QAction;
    QAction *a2=new QAction;
    QAction *a3=new QAction;
    a1->setText("First");
    a2->setText("Second");
    a3->setText("Third");
    QMenu *menu=new QMenu;
    menu->addAction(a1);
    menu->addAction(a2);
    menu->addAction(a3);
    ui->pushButton_2->setMenu(menu);
}

Swathicia2_212218104167::~Swathicia2_212218104167()
{
    delete ui;
}

void Swathicia2_212218104167::on_pushButton_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));

        qDebug() <<"Button Checked --ON--";
    }
    else
    {
        ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/off1.jpeg"));

        qDebug() <<"Button Checked --OFF--";
    }
}

void Swathicia2_212218104167::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Swathi_2122180104167","THIS IS INFORMATION BOX");
}


void Swathicia2_212218104167::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Swathi_2122180104167","Do you like apples?",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
         QMessageBox::information(this,"Swathi_2122180104167","Yes");
    }
    else
    {
         QMessageBox::information(this,"Swathi_2122180104167","No");
    }
}

void Swathicia2_212218104167::on_pushButton_5_clicked()
{
     QMessageBox:: warning(this,"Swathi_2122180104167","This is a warning message");
}

void Swathicia2_212218104167::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Swathi_2122180104167","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
   if(reply==QMessageBox::No)
   {
       qDebug() <<"Nothing is displayed";
   }
   else
   {
       QMessageBox::warning(this,"Swathi_2122180104167","Dont display the message with warning as YesToAll");
   }

}

void Swathicia2_212218104167::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Swathi_2122180104167","This is an information box");
}
