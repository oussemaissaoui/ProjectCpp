#include "signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->signup1);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signup2);
}

void Signup::on_pushButton_next_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signup3);
}
