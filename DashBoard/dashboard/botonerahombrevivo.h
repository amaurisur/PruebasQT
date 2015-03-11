#ifndef BOTONERAHOMBREVIVO_H
#define BOTONERAHOMBREVIVO_H

#include <QWidget>

namespace Ui {
class botoneraHombreVivo;
}

class botoneraHombreVivo : public QWidget
{
    Q_OBJECT

public:
    explicit botoneraHombreVivo(QWidget *parent = 0);
    ~botoneraHombreVivo();

private:
    Ui::botoneraHombreVivo *ui;
};

#endif // BOTONERAHOMBREVIVO_H
