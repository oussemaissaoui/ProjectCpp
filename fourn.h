#ifndef FOURN_H
#define FOURN_H

#include <QDialog>
#include <QIntValidator>
#include "fournisseur.h"
#include <QRadioButton>
#include "arduino.h"
namespace Ui {
class fourn;
}

class fourn : public QDialog
{
    Q_OBJECT

public:
    explicit fourn(QWidget *parent = nullptr);
    ~fourn();

private slots:
    void on_ajouter_clicked();
    void on_modifier_clicked();
    void on_modifier_2_clicked();
    void on_supprimer_clicked();

    void on_Emp_2_currentChanged(int index);

    void on_PDF_clicked();



    void on_Emp_2_tabBarClicked(int index);

    void on_qr_code_clicked();

    void on_TRI_clicked();

    void on_pushButton_login_clicked();

    void on_pushButto_stat_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButto_afficher_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    
    void on_camera_clicked();

    void on_pushButton_clicked();

private:
    Ui::fourn *ui;
    fournisseur f;
    QButtonGroup *btnSexe;
    QMap<int, QString> sexeMap;
    Arduino A;
};

#endif // FOURN_H
