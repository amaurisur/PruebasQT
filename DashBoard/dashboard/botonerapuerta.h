#ifndef BOTONERAPUERTA_H
#define BOTONERAPUERTA_H

#include <QObject>
//#include <QtWidgets>
#include <QState>
#include <QStateMachine>
#include "ui_dialog.h"
#include <QVariant>

//namespace Ui {
//class Dialog;
//}

class BotoneraPuerta : QObject
{
    Q_OBJECT
public:
    /**
     * @brief BotoneraPuerta
     * @param estado: dato informativo por parte del modelo sobre el estado de las puertas abiertas/cerradas.
     */
    explicit BotoneraPuerta(int estado, QVariant der, Ui::Dialog *ui, QObject *parent = 0);
    ~BotoneraPuerta();

public slots:
    void offBotonera();
private:
    /**
     * @brief m_estado
     */
    int m_estado;

    Ui::Dialog *ui;

    QState *state_abierta;
    QState *state_cerrada;
    QStateMachine *machine_puertas;
};

#endif // BOTONERAPUERTA_H
