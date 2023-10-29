#ifndef CRUD_H
#define CRUD_H

#include <QDialog>
#include <iostream>
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

private slots:


    void on_ajouter_emp_clicked();

private:
    Ui::CRUD *ui;
};

#endif // CRUD_H
