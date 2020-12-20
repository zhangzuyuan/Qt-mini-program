#ifndef RANK_H
#define RANK_H

#include <QWidget>
#include<QFile>
#include<QByteArray>
#include<QtDebug>

namespace Ui {
class rank;
}

class rank : public QWidget
{
    Q_OBJECT

public:
    explicit rank(QWidget *parent = nullptr);
    ~rank();

private slots:
    void on_pushButton_clicked();

private:
    Ui::rank *ui;
};

#endif // RANK_H
