#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QtWidgets>
#include <QtMultimedia>
#include "speedconverter.h"
#include "./source/qcgaugewidget.h"
#include "botonerapuerta.h"
#include "formaceite.h"

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


private slots:
    void actualizaVelocimetro(int value);
    void actualizarHombreMuerto();
    boolean initMaquinaHombreVivo(int pos);
    boolean MachineBotonesPuertas(int);

private:
    //LayOut principal
    Ui::Dialog *ui;

    //Convertidor de velocidad.
    SpeedConverter *speedConverter;

    //Velocimetro analogico
    QcGaugeWidget *velocimetroAnalogico;
    QcNeedleItem *aguja;
    //Maquina de estados Hombre Muerto-Vivo
    QStateMachine machineHombreVivo;
    QState *State_Hombrevivo;
    QState *State_HombreMuerto;
    QState *State_StartSistemaHombreVivo;
    QFinalState *State_EndSistemaHombreVivo;

    //Maquina de Estados Botonera (derecha)
    BotoneraPuerta *machineBotoneraDerecha = NULL;
    BotoneraPuerta *machineBotoneraIzquierda = NULL;

    //Bocina Tren
    QMediaPlayer *bocina = NULL;

    //Velocimetro con fondo png
    FormAceite *VelocimetroConFondo = NULL;
};

#endif // DASHBOARD_H
