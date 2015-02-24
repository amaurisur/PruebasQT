#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QtWidgets>
#include "speedconverter.h"
#include "./source/qcgaugewidget.h"

namespace Ui{
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    int hombreVivo();

private slots:
    void actualizaVelocimetro(int value);
    void actualizarHombreMuerto();

private:
    Ui::Dialog *ui;
    SpeedConverter *speedConverter;

    QcGaugeWidget *velocimetroAnalogico;
    QcNeedleItem *aguja;

    QStateMachine machine;
    QState *vivo;
    QState *muerto;
};

#endif // DASHBOARD_H
