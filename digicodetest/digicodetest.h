#ifndef DIGICODETEST_H
#define DIGICODETEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class digicodetest; }
QT_END_NAMESPACE

class digicodetest : public QWidget
{
    Q_OBJECT

public:
    digicodetest(QWidget *parent = nullptr);
    ~digicodetest();
    void onQPushButtonClicked();
    void TraiterChiffre();

private:
    Ui::digicodetest *ui;
    QString codeSecret;
    QString code;

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();
    void on_pushButton_Ok_clicked();
    void on_pushButton_On_clicked();

};
#endif // DIGICODETEST_H
