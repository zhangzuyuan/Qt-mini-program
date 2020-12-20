#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialog.h"
#include "lost_dialog.h"
#include "win_dialog.h"
#include "rank.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void closewidget();

private slots:
    void on_button_start_clicked();

    void on_button_cai_clicked();

    void on_button0_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button_restart_clicked();

    void on_buttonRank_clicked();

private:
    int n=0,m=0;
    int num=0;
    int num_n=0;
    int randomNum[1000];
    int cai;
    bool bo=0;
    int caiNum[1000];
    Ui::Widget *ui;
    dialog *new_dialog=new dialog();
    lost_dialog *lostDialog= new lost_dialog();
    win_dialog *winDialog=new win_dialog();
    rank *rankDialog = new rank();

};
#endif // WIDGET_H
