#ifndef CRUD_H
#define CRUD_H
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QDialog>
#include "employe.h"
#include <QDate>
#include <iostream>
#include <QString>
using namespace std;

namespace Ui {
class CRUD;
}

class CRUD : public QDialog
{
    Q_OBJECT

public:
    explicit CRUD(QWidget *parent = nullptr);
    ~CRUD();
    void SetLineEdit_value();
private slots:


    void on_ajouter_emp_clicked();

    void on_pushButton_supp_clicked();



    void on_pushButton_modifier_clicked();

private:
    Ui::CRUD *ui;
    employe e;
};

#endif // CRUD_H
