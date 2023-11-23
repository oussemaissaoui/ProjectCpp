#ifndef FINGER_H
#define FINGER_H

#include <QDialog>
#include <QMovie>
#include "arduino.h"
#include "user.h"
#include <iostream>
using namespace std;

namespace Ui {
class Finger;
}

class Finger : public QDialog
{
    Q_OBJECT

public:
    explicit Finger(const user& User = user(),QWidget *parent = nullptr);
    int extractStoredValue(const QString &input);


    ~Finger();


private slots:
    void on_pushButton_clicked();
    void raiseButtons_label();
    void change_stackedWidget_indexto1();
    void update_label();
    void on_pushButton_Hold_clicked();
    void waiting_for_result_add();

private:
    Ui::Finger *ui;
    user tmpuser;
    int ret; //status arduino
    QMovie *GifAnimation,*GifAnimation2;
    QByteArray data; // variable contenant les données reçues

        Arduino A;
};

#endif // FINGER_H
