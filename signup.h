#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QRegularExpression>
#include <QObject>
#include <QLineEdit>

#include <iostream>
using namespace std;

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();
    bool isEmailValid(QString);
    bool isPasswordConditionValid(QString);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_next_clicked();

private:
    Ui::Signup *ui;
    //QLineEdit* emailLineEdit;
};

#endif // SIGNUP_H
