#include "digicodetest.h"
#include "porte.h"
#include "ui_digicodetest.h"

digicodetest::digicodetest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::digicodetest)

{
    ui->setupUi(this);

}

digicodetest::~digicodetest()
{
    delete ui;
}

void digicodetest::verification()
{

}

void digicodetest::on_pushButton_1_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"1");
}

void digicodetest::on_pushButton_2_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void digicodetest::on_pushButton_3_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void digicodetest::on_pushButton_4_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void digicodetest::on_pushButton_5_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void digicodetest::on_pushButton_6_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void digicodetest::on_pushButton_7_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void digicodetest::on_pushButton_8_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void digicodetest::on_pushButton_9_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void digicodetest::on_pushButton_0_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"0");
}

void digicodetest::on_pushButton_Ok_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"Ok");
}

void digicodetest::on_pushButton_On_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+"On");
}


