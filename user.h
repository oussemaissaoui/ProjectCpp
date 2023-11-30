#ifndef USER_H
#define USER_H

#include <string>
#include <QString>
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QObject>
#include <QMessageBox>
#include <QSqlError>
#include <iostream>
using namespace std;

class user
{
public:
    //constr
        user();

        user(QString username,QString pass , QString email , QString role , QString id_user, 
                QString nom , QString prenom , QString sexe , QString cin ,QString telephone,QDate date_naiss , QDateTime last_login ,QDateTime signup_date );

    //getter:
        //login
        QString get_username(){return username;}
        QString get_password(){return password;}
        QString get_email(){return email;}
        QString get_role(){return role;}
        QString get_id_user(){return id_user;}

            //personal information
            QString get_nom(){return nom;}
            QString get_prenom(){return prenom;}
            QString get_sexe(){return sexe;}
            QString get_cin(){return CIN;}
            QDate get_date_naiss(){return date_naiss;}
            QString get_telephone(){return telephone;}
        
                //login_data
                QDateTime get_last_login(){return LastLoginDate;}
                QDateTime get_sign_update(){return sign_up_date;}
    
    //setter:
            //login
            void set_username(QString);
            void set_password(QString);
            void set_email(QString);
            void set_role(QString);
            void set_id_user(QString);
            void set_tel(QString);

                //personal information
                void set_nom(QString);
                void set_prenom(QString);
                void set_sexe(QString);
                void set_cin(QString);
                void set_date_naiss(QDate);
                void set_telephone(QString);

                    //login data
                    void set_last_login(QDateTime);
                    void set_sign_update(QDateTime);
            
            

    //this variable used to collect all error happen when "add" "modify" "delete" data from database
    QString Error_Message;

    //function:
    bool ajouter_user();
    bool modifier_user(QString id);
    bool supprimer_user();




    


private:

    //login
    QString username , password , email , role , id_user;

        //personal information:
        QString nom , prenom , sexe , CIN , telephone;
        QDate date_naiss;

            //Login_data
            QDateTime LastLoginDate , sign_up_date;

    
   
    


};

#endif // USER_H
