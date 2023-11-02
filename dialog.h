#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "voiture.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void setVoiture(voiture v);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
