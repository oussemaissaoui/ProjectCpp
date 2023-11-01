#include "signup.h"
#include "ui_signup.h"



Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->signup1);
    connect(findChild<QLineEdit*>("lineEdit_email"),&QLineEdit::textChanged,this,&Signup::isEmailValid);
    connect(findChild<QLineEdit*>("lineEdit_password"),&QLineEdit::textChanged,this,&Signup::isPasswordConditionValid);

    
}

Signup::~Signup()
{
    delete ui;
}

//the push button on first page of the stackedwidget
void Signup::on_pushButton_clicked()
{
    if(isEmailValid(findChild<QLineEdit*>("lineEdit_email")->text())==true)
    ui->stackedWidget->setCurrentWidget(ui->signup2);
}

//the push button on second page of the stackedwidget
void Signup::on_pushButton_next_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signup3);
}


bool Signup::isEmailValid(QString email) {
    // Regular expression pattern for email validation
    QRegularExpression emailPattern("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    
    
    if(emailPattern.match(email).hasMatch())
    {
        ui->lineEdit_email->setStyleSheet("QLineEdit {\
            background-color: rgba(0, 0, 0, 0);\
 	        border: 2px solid black;\
            border-bottom-color: rgb(204, 170, 103);\
	        border-top-color: rgba(0, 0, 0, 0);\
            border-right-color: rgba(0, 0, 0, 0);\
            border-left-color: rgba(0, 0, 0, 0);\
	        color: rgb(255, 255, 255);\
        }");
        return true;
    }
    else
    {
        ui->lineEdit_email->setStyleSheet("QLineEdit {\
                background-color: rgba(0, 0, 0, 0);\
 	            border: 2px solid black;\
                border-bottom-color: rgb(255, 0, 0);\
	            border-top-color: rgba(0, 0, 0, 0);\
                border-right-color: rgba(0, 0, 0, 0);\
                border-left-color: rgba(0, 0, 0, 0);\
	            color: rgb(255, 255, 255);\
        }");
        return false;

    }
}

bool Signup::isPasswordConditionValid(QString pass)
{
    QRegularExpression passwordPattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&#])[A-Za-z\\d@$!%*?&#]{8,}$");

    if(passwordPattern.match(findChild<QLineEdit*>("lineEdit_password")->text()).hasMatch())
    {
        cout<<"pass match"<<endl;
        return true;
    }
    else
    {

        cout<<"pass don't match"<<endl;
        return false;
    }

}































