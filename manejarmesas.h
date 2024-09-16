#ifndef MANEJARMESAS_H
#define MANEJARMESAS_H

#include <QDialog>
#include <QComboBox>
#include <databasemanager.h>

namespace Ui {
class manejarmesas;  // Ensure this matches the class name in the generated UI header
}

class manejarmesas : public QDialog
{
    Q_OBJECT

public:
    explicit manejarmesas(QWidget *parent = nullptr);
    ~manejarmesas();
    bool crearMesa(int mesaID, int tamanio);
    bool activarMesa(int mesaID);
    bool desactivarMesa(int mesaID);
    void llenarComboBoxMesas(QComboBox *comboBox);
    QSqlDatabase& db;

private slots:
    void on_desactivarMesa_clicked();
    void on_activarMesa_clicked();

private:
    Ui::manejarmesas *ui;  // Ensure this matches the class name in the generated UI header
};

#endif // MANEJARMESAS_H

