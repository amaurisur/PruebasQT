#ifndef WIDGETTESTER
#define WIDGETTESTER

#include <QtCore>
class AbstractMeter;

   class WidgetTester: public QObject
   {
     Q_OBJECT

     AbstractMeter * m_meter;
     QTimer  * incTimer, * decTimer, *stopTimer;
     int inc;
     int dec;
    public:
   WidgetTester(QObject * parent,AbstractMeter * meter);

       void start();

   private slots:
   void Increment();

   void Decrement();
   };//

#endif // WIDGETTESTER

