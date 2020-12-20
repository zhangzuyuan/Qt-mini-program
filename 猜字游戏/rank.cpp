#include "rank.h"
#include "ui_rank.h"

rank::rank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rank)
{
    ui->setupUi(this);
    qDebug()<<"fuck";

}

rank::~rank()
{
    delete ui;
}

void rank::on_pushButton_clicked()
{
    int tmp_n;
    QStringList ans[1000];
    QString tmp=ui->lineEdit->text();
    tmp_n=tmp.toInt();
    int numm=0;
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    QFile file("./rank.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

        while(!file.atEnd())
        {
            QByteArray linedata = file.readLine();
            QString line=linedata;
            QStringList list=line.split("/");
            if(list[2].toInt()==tmp_n)
            {
                ans[numm].append(list[0]);
                qDebug()<<ans[numm][0];
                ans[numm].append(list[1]);
                qDebug()<<ans[numm][1];
                //ui->tableWidget->setItem(numm,0,new QTableWidgetItem(list[0]));
                //ui->tableWidget->setItem(numm,1,new QTableWidgetItem(list[1]));
                numm++;
            }
        }
        for(int i=0;i<numm;++i)
        {
            for(int j=0;j<numm-1;++j)
            {
                if(ans[j][1].toInt()>ans[j+1][1].toInt())
                {
                    QStringList tmp;
                    tmp.append(ans[j][0]);
                    tmp.append(ans[j][1]);
                    ans[j][0]=ans[j+1][0];
                    ans[j][1]=ans[j+1][1];
                    ans[j+1][0]=tmp[0];
                    ans[j+1][1]=tmp[1];
                }
            }
        }
        ui->tableWidget->setRowCount(numm+2);
        QStringList header;
        header<<"user"<<"num";
        ui->tableWidget->setHorizontalHeaderLabels(header);
        for(int i=0;i<numm;++i)
        {
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(ans[i][0]));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(ans[i][1]));
        }
        ui->tableWidget->show();
    }
    file.close();
}
