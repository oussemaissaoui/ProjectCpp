#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTimer>

class Connection : public QObject {
    Q_OBJECT
public:
    Connection();
    bool createconnect();
    QTimer *timer;
signals:
    void signalReceived();
private slots:
    void checkDatabase();
};

#endif // CONNECTION_H
