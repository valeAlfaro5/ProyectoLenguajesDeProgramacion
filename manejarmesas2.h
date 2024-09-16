#ifndef MANEJARMESAS2_H
#define MANEJARMESAS2_H

#include <QWidget>
#include <QDialog>
#include <QComboBox>
#include <QMessageBox>
#include <databasemanager.h>

namespace Ui {
class manejarmesas2;
}

class manejarmesas2 : public QWidget
{
    Q_OBJECT

public:
    explicit manejarmesas2(QWidget *parent = nullptr);
    ~manejarmesas2();
    bool crearMesa(int mesaID, int tamanio);
    bool activarMesa(int mesaID);
    bool desactivarMesa(int mesaID);
    void llenarComboBoxMesas(QComboBox *comboBox);
    QSqlDatabase& db;
    Ui::manejarmesas2 *ui;

private slots:
    void on_desactivarMesa_clicked();

    void on_activarMesa_clicked();

private:

};

#endif // MANEJARMESAS2_H
