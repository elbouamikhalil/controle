#ifndef PORTE_H
#define PORTE_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Porte;
}

class Porte : public QWidget
{
    Q_OBJECT

public:
    explicit Porte(QWidget *parent = nullptr);
    ~Porte();
    void verouiller();
    void deverouiller();

private:
    Ui::Porte *ui;
    QPixmap *PorteFermer[0];
    QPixmap *PorteOuverte[1];

};

#endif // PORTE_H
