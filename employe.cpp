#include "employe.h"
#include <QObject>
//constractor
employe::employe()
{

}

employe::employe(QString usern,QString pass,QString mail,QString role,QDate date,QString nom ,
    QString prenom ,QString cin ,QString status ,QString tel ,int id ,QString sexe):user(usern,pass,mail,role,date)
    {

        this->cin = cin ;
        this->nom = nom ;
        this->prenom = prenom ;
        this->status = status;
        this->telephone =  tel;
        this->id = id ;
        this->sexe = sexe;

    }




//setter 
void employe::set_cin(QString cin)
{
this->cin = cin ;    
}

void employe::set_nom(QString nom)
{
this->nom = nom ;
}

void employe::set_prenom(QString prenom)
{
this->prenom = prenom ;
}

void employe::set_status(QString status)
{
this->status = status ;
}

void employe::set_telephone(QString tel)
{
this->telephone =  tel;
}

void employe::set_id(int id)
{
this->id = id ;
}
void employe::set_sexe(QString sexe)
{
    this->sexe = sexe;
}

bool employe::ajouter()
{

      QSqlQuery query;
      query.prepare("INSERT INTO users (email, password, username ,id_user , role) "
                    "VALUES (:email, :password, :username , :id_user , :role)");
      query.bindValue(":email", get_email());
      query.bindValue(":password", get_password());
      query.bindValue(":username", get_username());
      query.bindValue(":id_user", get_id());
      query.bindValue(":role", get_role());

      QSqlQuery query2;
      query2.prepare("INSERT INTO employe (nom, prenom , tel ,cin, status , sexe , DATE_NAISSANCE) "
                    "VALUES (:nom, :prenom , :tel ,:cin ,:status , :sexe , :DATE_NAISSANCE)");

      query2.bindValue(":nom", get_nom());
      query2.bindValue(":prenom", get_prenom());
      query2.bindValue(":tel", get_telephone());
      query2.bindValue(":cin", get_cin());
      query2.bindValue(":status", get_status());
      query2.bindValue(":sexe", get_sexe());
      query2.bindValue(":DATE_NAISSANCE", get_date_naiss());
        
      
      return (query.exec()&&query2.exec());
}

QSqlQueryModel* employe::afficher()
{

    
     QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT * FROM employe");
      


      return model;


}




bool employe::supprimer(QString id)
{

      QSqlQuery query;
      query.prepare(" Delete from employe where cin = :cin");

      query.bindValue(":cin" , id);

      QSqlQuery query2;
      query2.prepare(" Delete from users where id_user = :id_user");

      query2.bindValue(":id_user" , id);
   

      if(query.exec()&& query2.exec())
      {
          return true;
      }
      else return false;
        
      

}


bool employe::modifier(QString id) {

    QSqlQuery query;
      query.prepare("UPDATE employe SET nom = :nom, prenom = :prenom, tel = :tel, cin = :cin, status = :status, sexe = :sexe, date_naissance = :date_naissance WHERE cin = :id");
      query.bindValue(":id", "123");
      query.bindValue(":nom", get_nom());
      query.bindValue(":prenom", get_prenom());
      query.bindValue(":tel", get_telephone());
      
      query.bindValue(":status", get_status());
      query.bindValue(":sexe", get_sexe());
      query.bindValue(":DATE_NAISSANCE", get_date_naiss());


    return query.exec();
}

