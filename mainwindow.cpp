#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>


#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    login_status=false;
    isSignupOpen=false;
    ui->setupUi(this);
    ui->pushButton_login->hide();

    //hide & show login button   need password written to be showed
    connect(ui->lineEdit_password, &QLineEdit::textChanged, this, &MainWindow::Show_Button_Login);
    connect(ui->label_signup, &ClickableLabel::clicked, this, &MainWindow::click_signup);
    




}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::set_login_status(bool status)
{
    login_status = status;
}




void MainWindow::on_pushButton_login_clicked()
{
    
    checkPassword();
}

void MainWindow::checkPassword()
{
    QString email = ui->lineEdit_username->text();
    QString password  = ui->lineEdit_password->text();

    QSqlQuery query;

    query.prepare("SELECT id_user FROM users WHERE (email= :email OR username = :email) AND password = :password");
    query.bindValue(":email",email);
    query.bindValue(":password",password);

    if(query.exec()&&query.next())
    {
        login_status=true;
        if(ui->checkBox_stayLogin->isChecked())
        {
            QSqlQuery query2;
            query2.prepare("INSERT INTO logs (LAST_LOGIN_ID) VALUES (:last_login)");
            query2.bindValue(":last_login",query.value(0).toString());
            query2.exec();
            cout<<"checked ::: !!!!!!!!!!!!!!!!!"<<endl;
            

        }
        
        this->close();

    }
    else
    {
        login_status=false;
    }

}


void MainWindow::Show_Button_Login()
{
    if (ui->lineEdit_password->text().isEmpty()) {
        ui->pushButton_login->hide();
    } else {
        ui->pushButton_login->show();
    }
}

void MainWindow::click_signup()
{
    if (!isSignupOpen){
        isSignupOpen = true;
    Signup w;
    w.show();
    w.exec();
    isSignupOpen = false;
    }
}





