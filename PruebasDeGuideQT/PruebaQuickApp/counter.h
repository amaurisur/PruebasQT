#ifndef COUNTER_H
#define COUNTER_H

#include <QWidget>
#include <QString>


class QSvgRenderer;
/**
  Counter shows counter with digits taken from input svg file.
  Feel free to add your own themes. To do that please follow id names int svg file.
*/

class Counter: public QWidget
{
 Q_PROPERTY (int value READ value WRITE setValue)
 Q_PROPERTY (int digits READ digits WRITE setDigits)

 Q_OBJECT
  public:
  Counter (QWidget * parent = NULL);

  int digits() const;
  int value() const;
  const QString digitsFile() const;
  public slots:

  void setValue(int);
  void setDigits(int);

  /** Sets filepath to svg file with digits */
  void setDigitsFile(const QString & );

  protected:
   void paintEvent (QPaintEvent *);
   void init();

   int m_digits;
   int m_value;
   QString m_digitsFile;
   QSvgRenderer * m_svg;

}; // class Counter

#endif // COUNTER

