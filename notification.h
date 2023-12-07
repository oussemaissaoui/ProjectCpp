#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include "connection.h"
#include <QDebug>
#include <QLabel>
#include <QDialog>

namespace Ui {
class notification;
}

class notification : public QDialog
{
    Q_OBJECT

public:
    explicit notification(QWidget *parent = nullptr);
    ~notification();
    void setNotificationText(const QString &text);

private:
    Ui::notification *ui;
};

#endif // NOTIFICATION_H
