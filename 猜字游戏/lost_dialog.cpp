#include "lost_dialog.h"
#include "ui_lost_dialog.h"

lost_dialog::lost_dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lost_dialog)
{
    ui->setupUi(this);
}

lost_dialog::~lost_dialog()
{
    delete ui;
}
void lost_dialog::add(int a[],int n)
{
    bo=0;
    int tmp=0;
    for(int i=1;i<=n;++i)
    {
        tmp=(tmp*10+a[i]);
    }
    ui->label_3->setNum(tmp);
}

void lost_dialog::on_pushButton_clicked()
{
    this->close();
}

void lost_dialog::on_pushButton_2_clicked()
{
    this->close();
}
