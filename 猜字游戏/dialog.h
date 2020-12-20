#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

namespace Ui {
class dialog;
}

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();
    void add(int num1,int num2);

private slots:
    void on_pushButton_clicked();

private:
    int num1,num2;
    Ui::dialog *ui;
};

#endif // DIALOG_H
