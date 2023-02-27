#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTime>
#include <QQueue>
#include <cstdlib>
#include <QMessageBox>
#include <iostream>
#include "product.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_addProduct_clicked();

    void on_button_reset_clicked();

    void on_radioButton_SpeedTime_clicked();

    void on_Button_Start_clicked();

private:
    Ui::MainWindow *ui;

    int time;
    bool speedtime;

    QQueue<Product> queue;
    QQueue<Product> oldqueue;

    void resetCooking();
    void resetCooked();
    void resetProgressbar();

    int addTimer(QTime& time) const;


    int calcTime() const;
};
#endif // MAINWINDOW_H
