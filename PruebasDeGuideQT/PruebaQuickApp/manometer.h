#ifndef MANOMETER
#define MANOMETER

#include "abstractmeter.h"

class ManoMeter : public AbstractMeter
{
  Q_OBJECT
  public:
    ManoMeter(QWidget *parent = 0);
  protected:
    void paintEvent(QPaintEvent *event); 	 // inherited from WidgetWithBackground
    void paintBackground(QPainter & painter);// inherited form WidgetWithBackground
    void initCoordinateSystem(QPainter & painter);
};

#endif // MANOMETER
