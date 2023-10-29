#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>

class user
{
public:
    user();
    user(QString,QString,QString,QString,QDate);

    //getter

    QString get_username(){return username;}
    QString get_password(){return password;}
    QString get_email(){return email;}
    QString get_role(){return role;}
    QDateTime get_last_login(){return LastLoginDate;}
    QDate get_date_naiss(){return date_naiss;}


    //setter

    void set_username(QString);
    void set_password(QString);
    void set_email(QString);
    void set_role(QString);
    void set_last_login(QDateTime);
    void set_date_naiss(QDate);





    


private:

    QString username , password , email , role;

    QDateTime LastLoginDate ;
    QDate date_naiss;
    



};

#endif // USER_H
