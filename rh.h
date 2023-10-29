#ifndef RH_H
#define RH_H

#include <QMainWindow>

namespace Ui {
class rh;
}

class rh : public QMainWindow
{
    Q_OBJECT

public:
    explicit rh(QWidget *parent = nullptr);
    ~rh();

private slots:
    void on_pushButton_CRUD_clicked();

private:
    Ui::rh *ui;
};

#endif // RH_H
