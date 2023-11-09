#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlQueryModel>

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
    QString get_id_user(){return id_user;}


    //setter

    void set_username(QString);
    void set_password(QString);
    void set_email(QString);
    void set_role(QString);
    void set_last_login(QDateTime);
    void set_date_naiss(QDate);
    void set_id_user(QString);



    bool ajouter();





    


private:

    QString username , password , email , role , id_user;

    QDateTime LastLoginDate ;
    QDate date_naiss;
    



};

#endif // USER_H
