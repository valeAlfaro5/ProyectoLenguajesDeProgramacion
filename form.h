#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "ManejoRestaurante.h"
#include <QMessageBox>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    ManejoRestaurante hola;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_mesasDisponibles_activated(int index);

    void on_pushButton_2_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
