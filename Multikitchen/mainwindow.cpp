#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time = 0;
    speedtime = false;
}

MainWindow::~MainWindow()
{
    if(queue.empty() == false) queue.clear();
    if(oldqueue.empty() == false) queue.clear();

    delete ui;
}


void MainWindow::on_button_addProduct_clicked() {
    QString Products = ui->text_ProductTitle->toPlainText();
    int time = ui->spinBox_Minutes->value();

    std::cout << time << std::endl;

    if(Products.isEmpty() == true)
        Products = "unknown";

    if(time == 0)
        time = 1;

    ui->text_ProductTitle->clear();
    ui->spinBox_Minutes->cleanText();

    queue.enqueue(Product(Products, time));
    resetCooking();
}

void MainWindow::resetCooking() {
    ui->table_Cooking->setRowCount(queue.length());

    for(int i = 0; i < queue.length(); i++) {
        auto* itemTitle = new QTableWidgetItem();
        auto* itemTime = new QTableWidgetItem();
        auto* itemLastTime = new QTableWidgetItem();

        itemTitle->setText(queue[i].getTitle());
        itemTime->setText(QString().setNum(queue[i].getMinutes()));
       // std::cout << queue[i].getLast() << std::endl;
        itemLastTime->setText(QString().setNum(queue[i].getLast()));

        ui->table_Cooking->setItem(i, 0, itemTime);
        ui->table_Cooking->setItem(i, 1, itemLastTime);
        ui->table_Cooking->setItem(i, 2, itemTitle);
    }
}

void MainWindow::resetCooked()
{
    ui->table_Cooked->setRowCount(oldqueue.length());

    for(int i = 0; i < oldqueue.length(); i++) {
        auto* itemTitle = new QTableWidgetItem();
        auto* itemTime = new QTableWidgetItem();

        itemTitle->setText(oldqueue[i].getTitle());
        itemTime->setText(QString().setNum(oldqueue[i].getMinutes()));

        ui->table_Cooked->setItem(i, 0, itemTime);
        ui->table_Cooked->setItem(i, 1, itemTitle);
    }
}

void MainWindow::resetProgressbar() {
    int procent = calcTime() / 100 * time;

    ui->progressBar->setValue(procent);
}

int MainWindow::addTimer(QTime& time) const {
    if(speedtime == true)
        time = time.addSecs(1);
    else
        time = time.addSecs(30);



    return speedtime ? 1 : 30;
}

int MainWindow::calcTime() const {
    int timer = 0;

    for(int i = 0; i < queue.length(); i++ )
        timer += queue[i].getMinutes();

    return timer;
}




void MainWindow::on_button_reset_clicked() {
    queue.clear();
    oldqueue.clear();

    ui->progressBar->setValue(0);

    resetCooked();
    resetCooking();
}


void MainWindow::on_radioButton_SpeedTime_clicked()
{
    speedtime = !speedtime;
}

int hoursToInt(QTime e) {

}


void MainWindow::on_Button_Start_clicked() {
    QTime start = QTime().currentTime();

    while(queue.empty() == false) {

        start = start.addSecs(queue.head().getMinutes() * 60);

        ui->time_Time->setTime(start);

        oldqueue.enqueue(queue.dequeue());

        resetCooked();
        resetCooking();
    }

    ui->progressBar->setValue(100);

    std::cout << "wnd while \n" << std::endl;
}

