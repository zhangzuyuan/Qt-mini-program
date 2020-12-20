#include "ask.h"
#include "ui_ask.h"

ask::ask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ask)
{
    ui->setupUi(this);
}

ask::~ask()
{
    delete ui;
}

void ask::on_buttonclose_clicked()
{
    this->close();
}

void ask::on_buttonsolve_clicked()
{
    QString tmp= ui->lineEdit->text();
    QFile file("./rank.txt");
    if(!file.exists())
    {
        file.open( QIODevice::ReadWrite | QIODevice::Text );
        file.close();
    }
    file.open(QIODevice::Append);
    file.write(tmp.toUtf8());
    file.write("/");
    file.write(QString::number(this->num).toUtf8());
    file.write("/");
    file.write(QString::number(this->n).toUtf8());
    file.write("/");
    file.write("\n");
}
void ask::add(int x,int n)
{
    this->num=x;
    this->n=n;
}
