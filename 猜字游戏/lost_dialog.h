#ifndef LOST_DIALOG_H
#define LOST_DIALOG_H

#include <QWidget>

namespace Ui {
class lost_dialog;
}

class lost_dialog : public QWidget
{
    Q_OBJECT

public:
    explicit lost_dialog(QWidget *parent = nullptr);
    ~lost_dialog();
    void add(int a[],int n);
    bool check();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    bool bo=0;
    Ui::lost_dialog *ui;
};

#endif // LOST_DIALOG_H
