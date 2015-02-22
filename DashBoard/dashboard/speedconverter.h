#ifndef SPEEDCONVERTER_H
#define SPEEDCONVERTER_H

#include <QObject>

class SpeedConverter : public QObject
{
    Q_OBJECT
public:
    explicit SpeedConverter(int base, QObject *parent = 0);
    ~SpeedConverter();
    int getVelocidadMPH() const;
    int getVelocidadKMH() const;

signals:
    void velocidadChanged(int);
    void velocidadChangedMPH(int);

public slots:
    void setVelocidad(int);

private:
    /**
     * @brief m_velocidad
     * Es suficiente con usar una sola variable como descriptora del estado de la velocidad, ya que la misma es una sola.
     * Se escriba en millas por hora o km por hora.
     */
    double m_velocidad;
};

#endif // SPEEDCONVERTER_H
