#include "win_dialog.h"
#include "ui_win_dialog.h"

win_dialog::win_dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win_dialog)
{
    ui->setupUi(this);
}

win_dialog::~win_dialog()
{
    delete ui;
}

void win_dialog::on_pushButton_clicked()
{
    askDialog->add(this->num,this->n);
    askDialog->show();
    this->close();
}

void win_dialog::add(int x,int n)
{
    this->num=x;
    this->n=n;
}
