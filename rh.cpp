#include "rh.h"
#include "ui_rh.h"
#include "crud.h"
rh::rh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rh)
{
    ui->setupUi(this);
}

rh::~rh()
{
    delete ui;
}

void rh::on_pushButton_CRUD_clicked()
{

    CRUD c;
    c.show();
    c.exec();



}
