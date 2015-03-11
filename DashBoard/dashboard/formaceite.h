#ifndef FORMACEITE_H
#define FORMACEITE_H

#include <QWidget>
#include <QQuickView>

namespace Ui {
class FormAceite;
}

class FormAceite : public QWidget
{
    Q_OBJECT

public:
    explicit FormAceite(QWidget *parent = 0, QUrl qurl = QUrl("qrc:/MedidorAceite.qml"));
    ~FormAceite();

private:
    Ui::FormAceite *ui_formAceite;

private slots:
    void setVelocidad(double value);
};

#endif // FORMACEITE_H

/**

    angleRange : real
    background : Component
    control : CircularGauge
    foreground : Component
    labelCount : int
    labelInset : real
    labelStepSize : real
    maximumValueAngle : real
    minimumValueAngle : real
    minorTickmark : Component
    minorTickmarkCount : int
    minorTickmarkInset : real
    needle : Component
    needleRotation : real
    outerRadius : real
    tickmark : Component
    tickmarkCount : int
    tickmarkInset : real
    tickmarkLabel : Component
    tickmarkStepSize : real

  */
