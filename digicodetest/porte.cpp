#include "porte.h"
#include "ui_porte.h"
#include<QApplication>
#include <QWidget>
#include <QPushButton>
#include <QtGui>
#include <QFont>
#include <QtGui/QImage>
#include <QImage>

Porte::Porte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Porte)
{
    ui->setupUi(this);
    PorteFermer[0] = new QPixmap(":/images/porte_fermee)");
    PorteOuverte[1] = new QPixmap(":/images/porte_ouverte)");
}

Porte::~Porte()
{
    delete ui;
}
