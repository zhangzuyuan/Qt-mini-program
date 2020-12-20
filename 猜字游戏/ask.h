#ifndef ASK_H
#define ASK_H

#include <QWidget>
#include<QFile>

namespace Ui {
class ask;
}

class ask : public QWidget
{
    Q_OBJECT

public:
    explicit ask(QWidget *parent = nullptr);
    ~ask();

    void add(int x,int n);

private slots:
    void on_buttonclose_clicked();

    void on_buttonsolve_clicked();

private:
    int num;
    int n;
    Ui::ask *ui;
};

#endif // ASK_H
