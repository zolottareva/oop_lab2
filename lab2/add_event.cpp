#include "add_event.h"
#include "ui_add_event.h"
#include <QDebug>
#include <QString>
#include <QMessageBox>
add_event::add_event(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_event)
{
    ui->setupUi(this);
}

add_event::~add_event()
{
    delete ui;
}

void add_event::on_buttonBox_accepted()
{
    if(ui->lineEdit_2->text().size() > 20)
    {
         QMessageBox::critical(this,"Wrong data", "Too long event name");
    }
    if(ui->lineEdit->text() == "0")
    {
        emit sendData(ui->lineEdit_2->text(), ui->lineEdit->text());
        return;
    }
    else if((!ui->lineEdit->text().toDouble()) || ui->lineEdit->text().toDouble() < 0 || ui->lineEdit->text().toDouble() > 1)
    {
         QMessageBox::critical(this,"Wrong data", "Incorrect probability");
    }
    else emit sendData(ui->lineEdit_2->text(), ui->lineEdit->text());
}
