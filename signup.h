#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QRegularExpression>
#include <QObject>
#include <QLineEdit>
#include "user.h"
#include "employe.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

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
    bool isPasswordConditionValid();
    bool isPasswordConfirmValid();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_next_clicked();

    void on_pushButton_signup_clicked();

private:
    Ui::Signup *ui;
    //QLineEdit* emailLineEdit;
    user usertmp;
    employe emptmp;

};

#endif // SIGNUP_H
