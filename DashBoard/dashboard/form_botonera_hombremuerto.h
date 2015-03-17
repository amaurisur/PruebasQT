#ifndef FORM_BOTONERA_HOMBREMUERTO_H
#define FORM_BOTONERA_HOMBREMUERTO_H

#include <QWidget>
#include <QState>
#include <QFinalState>
#include <QStateMachine>
#include <QQuickItem>
#include <QTimer>

namespace Ui {
class Form_botonera_hombreMuerto;
}

class Form_botonera_hombreMuerto : public QWidget
{
    Q_OBJECT

public:
    explicit Form_botonera_hombreMuerto(QWidget *parent = 0);
    ~Form_botonera_hombreMuerto();

public slots:
    void on_SistemaHombreMuerto();
    void off_SistemaHombreMuerto();
    void on_rutinaAlarma();
    void on_rutinaSafe();
    void do_rutinaMurio();

private:
    //Referencia a Vista del Componente
    Ui::Form_botonera_hombreMuerto *ui;
    QQuickItem *qmlView = NULL;


    //Maquina de Estados
    QState *state_safe = NULL;
    QState *state_alarma = NULL;
    QFinalState *state_final = NULL;
    QStateMachine *machine_HombreMuerto = NULL;

    //Timer State_safe
    QTimer *timer_safe;
    QTimer *timer_died;

};



#endif // FORM_BOTONERA_HOMBREMUERTO_H
