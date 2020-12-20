#include "widget.h"
#include "ui_widget.h"
#include"dialog.h"
#include "lost_dialog.h"
#include "win_dialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closewidget()
{
    this->close();
}

void Widget::on_button_start_clicked()
{
    QString tmpn,tmpm;
    tmpn=ui->lineEdit_n->text();
    tmpm=ui->lineEdit_m->text();
    this->n=tmpn.toInt();
    this->m=tmpm.toInt();
    for(int i=1;i<=n;++i)
    {
        randomNum[i]=(rand()+time(0))%10;
        if(i==1&&randomNum[i]==0)
        {
            randomNum[i]++;
        }
    }
}

void Widget::on_button_cai_clicked()
{

    int num1=0,num2=0;
    num++;
    if(num>this->m)
    {
        lostDialog->add(randomNum,n);
        lostDialog->show();
        this->on_button_restart_clicked();
        return;
    }
    ui->label_mm->setNum(num);
    QString tmp;
    tmp=ui->lineEdit_num->text();
    cai=tmp.toInt();
    for(int i=n;i>=1;i--)
    {
        if(randomNum[i]==(cai%10))
        {
            bo=1;num1++;
        }
        else
        {
            bool boooo=0;
            for(int j=1;j<=n;++j)
            {
                if((i!=j)&&(randomNum[j]==(cai%10)))
                {
                    boooo=1;
                }
            }
            if(boooo==1) num2++;
            bo=0;break;
        }
        cai/=10;
    }
    if(bo==1)
    {
        winDialog->add(num,n);
        winDialog->show();
        this->on_button_restart_clicked();
    }
    else
    {
        new_dialog->add(num1,num2);
        new_dialog->show();
    }


    ui->lineEdit_num->clear();
    num_n=0;
}

void Widget::on_button0_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        if(num_n!=1)
        {
            ui->lineEdit_num->insert("0");
        }
        else
        {
            num_n--;
        }
    }
}


void Widget::on_button1_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("1");
    }
}

void Widget::on_button2_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("2");
    }
}

void Widget::on_button3_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("3");
    }
}

void Widget::on_button4_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("4");
    }
}

void Widget::on_button5_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("5");
    }
}

void Widget::on_button6_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("6");
    }
}

void Widget::on_button7_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("7");
    }
}

void Widget::on_button8_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("8");
    }
}

void Widget::on_button9_clicked()
{
    if(num_n<this->n)
    {
        num_n++;
        ui->lineEdit_num->insert("9");
    }
}

void Widget::on_button_restart_clicked()
{
    this->n=this->m=0;
    this->num=0;
    this->num_n=0;
    this->bo=0;
    ui->lineEdit_n->clear();
    ui->lineEdit_m->clear();
    ui->label_mm->clear();
    ui->lineEdit_num->clear();
}

void Widget::on_buttonRank_clicked()
{
    rankDialog->show();
}
