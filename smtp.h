#ifndef SMTP_H
#define SMTP_H

#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QtNetwork>
#include <QSslSocket>

#include <QFile>
#include <QFileInfo>
#include <QObject>

class smtp : public QObject
{
    Q_OBJECT


public:
    smtp();
    smtp( const QString &user, const QString &pass,const QString &host, quint16 port =465, int timeout = 30000 );
    ~smtp();

    void sendMaile( const QString &from, const QString &to,const QString &subject, const QString &body );

signals:
    void status( const QString &);

private slots:
    void stateChanged(QAbstractSocket::SocketState socketState);//type de variable
    void errorReceived(QAbstractSocket::SocketError socketError);
    void disconnected();
    void connected();
    void readyRead();

private:
    int timeout;
    QString message;
    QTextStream *t;
    QSslSocket *socket;
    QString from;
    QString rcpt;
    QString response;
    QString user;
    QString pass;
    QString host;
    quint16 port;
    enum states{Tls, HandShake ,Auth,User,Pass,Rcpt,Mail,Data,Init,Body,Quit,Close};
    int state;

};
#endif // SMTP_H
