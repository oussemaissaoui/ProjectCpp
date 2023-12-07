#ifndef GEST_VEHI_H
#define GEST_VEHI_H

#include <QDialog>

namespace Ui {
class gest_vehi;
}

class gest_vehi : public QDialog
{
    Q_OBJECT

public:
    explicit gest_vehi(QWidget *parent = nullptr);
    ~gest_vehi();
    void set_line_edit();
    bool notif_status;
private slots:
    void on_btn_modifier_clicked();
    void on_btn_ajouter_clicked();
    void on_tri_id_clicked();

    void on_stat_clicked();
    void on_btn_supprimer_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void onSignalReceived();

    void on_le_rechercher_1_cursorPositionChanged(int arg1);
    void on_le_rechercher_2_cursorPositionChanged(int arg1);
    void on_le_rechercher_3_cursorPositionChanged(int arg1);
    void on_le_rechercher_4_activated(const QString &arg1);

    void on_pdf_voiture_clicked();
private:
    Ui::gest_vehi *ui;

};

#endif // GEST_VEHI_H
