#ifndef ACERCA_H
#define ACERCA_H

#include <QDialog>

namespace Ui {
class Acerca;
}

class Acerca : public QDialog
{
    Q_OBJECT

public:
    explicit Acerca(QWidget *parent = 0);
    ~Acerca();
    void imagen();

private:
    Ui::Acerca *ui;
};

#endif // ACERCA_H
