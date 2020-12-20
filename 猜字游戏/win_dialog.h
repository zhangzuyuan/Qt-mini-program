#ifndef WIN_DIALOG_H
#define WIN_DIALOG_H

#include <QWidget>
#include "ask.h"
namespace Ui {
class win_dialog;
}

class win_dialog : public QWidget
{
    Q_OBJECT

public:
    explicit win_dialog(QWidget *parent = nullptr);
    ~win_dialog();

    void add(int x,int n);

private slots:
    void on_pushButton_clicked();

private:
    int num;
    int n;
    Ui::win_dialog *ui;
    ask *askDialog = new ask();
};

#endif // WIN_DIALOG_H
