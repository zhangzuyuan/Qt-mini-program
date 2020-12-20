#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}

dialog::~dialog()
{
    delete ui;
}

void dialog::on_pushButton_clicked()
{
    this->close();
}
void dialog::add(int num1,int num2)
{
    ui->label_4->setNum(num1);
    ui->label_4->setStyleSheet("color:red");
    ui->label_5->setNum(num2);
    ui->label_5->setStyleSheet("color:blue");
    this->num1=num1;
    this->num2=num2;

}
