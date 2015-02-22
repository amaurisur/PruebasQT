#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include "speedconverter.h"

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
    Ui::Dialog *ui;
    SpeedConverter *speedConverter;
};

#endif // DASHBOARD_H
