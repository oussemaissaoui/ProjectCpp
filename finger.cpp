#include "finger.h"
#include "ui_finger.h"
#include <QTimer>
#include <QPropertyAnimation>
#include <QDebug>
#include <QThread>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <string>
#include <QEventLoop>
Finger::Finger(const user& User, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Finger)
{
    tmpuser=User;
    ui->setupUi(this);
    // Dans le constructeur de votre classe QDialog
    this->setStyleSheet("QDialog { background-color: black; }"
                        "QDialog::titleBar { background: black; subcontrol-origin: margin; }");



    ui->stackedWidget->setCurrentIndex(0);
    ret=A.connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
           break;
        case(-1):qDebug() << "arduino is not available";
        }
         //QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));


    GifAnimation = new QMovie(":/img/image/Fingerprint.gif");
    ui->label_Gif->setMovie(GifAnimation);
    ui->label_Gif->setAlignment(Qt::AlignCenter);
    ui->label_Gif->setScaledContents(true);
    ui->label_Gif->setVisible(true);
    ui->label_Gif->raise();
    GifAnimation->start();

    GifAnimation2 = new QMovie(":/img/image/PutFinger.gif");
    ui->label_Gif_2->setMovie(GifAnimation2);
    ui->label_Gif_2->setAlignment(Qt::AlignCenter);
    ui->label_Gif_2->setScaledContents(true);
    ui->label_Gif_2->setVisible(true);
    ui->label_Gif_2->raise();
    GifAnimation2->start();



    QTimer::singleShot(3500, this, SLOT(raiseButtons_label()));
}

Finger::~Finger()
{
    delete ui;
    if (GifAnimation) {
           GifAnimation->stop();
           GifAnimation2->stop();// Stop the animation before deleting the object
           delete GifAnimation;
           delete GifAnimation2;
       }
    A.close_arduino();
    qDebug()<<"finger end"<<endl;

}

void Finger::raiseButtons_label()
{
    if(ui->stackedWidget->currentIndex()==0)
    {
        A.write_to_arduino("READY");
        ui->pushButton->raise();
        ui->pushButton_2->raise();
        ui->textEdit->raise();
    }
    else if(ui->stackedWidget->currentIndex()==1)
    {
        A.write_to_arduino("HOLD");
        ui->textEdit_page2->raise();
        ui->pushButton_Hold->raise();
    }

}

 void Finger::change_stackedWidget_indexto1()
 {
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
    GifAnimation2->stop();
    ui->label_Gif_page2->setMovie(GifAnimation2);
    ui->label_Gif_page2->setAlignment(Qt::AlignCenter);
    ui->label_Gif_page2->setScaledContents(true);
    ui->label_Gif_page2->setVisible(true);
    ui->label_Gif_page2->raise();
    GifAnimation2->start();
    QTimer::singleShot(2000, this, SLOT(raiseButtons_label()));

 }

//yesButton Clicked
void Finger::on_pushButton_clicked()
{
    //animationGIF
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label_Gif,"geometry");
    animation->setDuration(500);
    animation->setStartValue(ui->label_Gif->geometry());
    animation->setEndValue(QRect(-600,0,600,500));
    //animationTXTEDIT
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->textEdit ,"geometry");
    animation2->setDuration(500);
    animation2->setStartValue(ui->textEdit->geometry());
    animation2->setEndValue(QRect(90-600,50,391,41));
    //animation pushbutton yes
    QPropertyAnimation *animation3 = new QPropertyAnimation(ui->pushButton ,"geometry");
    animation3->setDuration(500);
    animation3->setStartValue(ui->pushButton->geometry());
    animation3->setEndValue(QRect(180-600,420,80,22));
    //animation pushbutton no
    QPropertyAnimation *animation4 = new QPropertyAnimation(ui->pushButton_2 ,"geometry");
    animation4->setDuration(500);
    animation4->setStartValue(ui->pushButton_2->geometry());
    animation4->setEndValue(QRect(320-600,420,80,22));

    //animation pushbutton no
    QPropertyAnimation *animation5 = new QPropertyAnimation(ui->label_Gif_2 ,"geometry");
    animation5->setDuration(500);
    animation5->setStartValue(ui->label_Gif_2->geometry());
    animation5->setEndValue(QRect(0,0,600,500));




    animation->start();
    animation2->start();
    animation3->start();
    animation4->start();
    animation5->start();

    QTimer::singleShot(1000, this, SLOT(change_stackedWidget_indexto1()));


   //GifAnimation->stop();

}


int Finger::extractStoredValue(const QString &input) {
    int pos = input.indexOf("Stored ID:");
    if (pos != -1) {
        // Move the position to the end of the prefix
        pos += QString("Stored ID:").size();

        // Extract and return the fixed-size value
        QString valueStr = input.mid(pos, 3);
        qDebug() << "Processed valueStr:" << valueStr;

        // Check if the valueStr contains a letter, and adjust accordingly
        if (valueStr.contains(QRegExp("[a-zA-Z]"))) {
            for (int i = 0; i < valueStr.length(); ++i) {
                if (valueStr[i].isLetter()) {
                    valueStr = input.mid(pos, i); // Extract only the numeric characters
                    qDebug() << "Processed valueStr:" << valueStr;
                    break;
                }
            }
        }

        return valueStr.toInt();
    }

    // Return a default value or signal an error (you can choose)
    return -1; // Default value, modify as needed
}

void Finger::update_label()
{
    data=A.read_from_arduino();


   QString DataAsString = QString(data);
   qDebug() << DataAsString<<endl;
   if (DataAsString.contains("Stored ID:")) {
            QSqlQuery query;
            query.prepare("UPDATE users SET ID_FINGER = :id_finger  WHERE id_user = :id ");
            query.bindValue(":id_finger",extractStoredValue(DataAsString));
            query.bindValue(":id",tmpuser.get_id_user().toInt());
            if (query.exec()) {
              int numRowsAffected = query.numRowsAffected();
              bool test= numRowsAffected > 0;
              if(test==false)
              {
                  QMessageBox::critical(nullptr, QObject::tr("OK"),
                                               QObject::tr("cin  not exist.\nClick Cancel to exit."), QMessageBox::Cancel);
              }
              else
                  cout<<"modifie user mriglaaa !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                  this->close();

                // Return true if at least one row was affected
          } else {
              // Handle the case where the query execution failed
              qDebug() << "Error: " << query.lastError().text();
          }





       }
    if(data=="oussema")
    {
    }
        //ui->label_3->setText("Added Success"); // si les données reçues de arduino via la liaison série sont égales à 1
    // alors afficher ON

    else if (data=="0")
    {}

       //ui->label_3->setText("OFF");   // si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
}

void Finger::on_pushButton_Hold_clicked()
{
    if(ret==0)
    {
        int maxId;
                QSqlQuery query;
                query.prepare("SELECT MIN(next_available_id) AS next_available_id "
                              "FROM ( "
                              "    (SELECT 1 AS next_available_id FROM dual) "
                              "    UNION "
                              "    (SELECT ID_FINGER + 1 AS next_available_id FROM users) "
                              ") t "
                              "WHERE NOT EXISTS ( "
                              "    SELECT 1 "
                              "    FROM users t2 "
                              "    WHERE t2.ID_FINGER = t.next_available_id "
                              ")");


                    if (query.exec()) {
                        if (query.next()) {
                            maxId = query.value("next_available_id").toInt();
                            qDebug() << maxId << endl;

                            std::string command_exec = "";
                            command_exec += "ENROLL:";
                            command_exec += std::to_string(maxId); // Assuming maxId is an integer
                            A.write_to_arduino(command_exec.c_str());
                            //data = A.read_from_arduino();


                            QEventLoop loop;

                                //QTimer::singleShot(10000, &loop, SLOT(quit())); // Wait for 5 seconds
                                QTimer::singleShot(6000, this, SLOT(waiting_for_result_add()));
                                // This will block the event loop until the timer times out

                                //loop.exec();
                            qDebug() << command_exec.c_str() << endl;
                            //update_label();




                        } else {
                            // All ID_FINGER values are reserved; set next_available_id to 128 or handle as needed
                            maxId = 128;
                            qDebug() << maxId << endl;
                        }
                    } else {
                        QMessageBox::critical(nullptr, "Query Failed", "An error occurred while executing the query:\n" + query.lastError().text());
                    }

    }

}

void Finger::waiting_for_result_add()
{
    update_label();

}

void Finger::on_pushButton_2_clicked()
{
    this->close();
}
