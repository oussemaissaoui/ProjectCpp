#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QDialog>
#include "connection.h"
#include <QDebug>
#include <QLabel>

namespace Ui {
class Notification;
}

class Notification : public QDialog
{
    Q_OBJECT

public:
    explicit Notification(QWidget *parent = nullptr);
    ~Notification();
    void setNotificationText(const QString &text);

/*public slots:
    void showNotif();*/

private:
    Ui::Notification *ui;
    /*Connection connection;
    void checkEtatChange();
signals:
    void etatChanged();*/

};

#endif // NOTIFICATION_H
