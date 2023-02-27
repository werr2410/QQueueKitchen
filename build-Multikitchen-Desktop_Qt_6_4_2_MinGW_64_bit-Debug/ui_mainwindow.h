/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ProductTitle;
    QTextEdit *text_ProductTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_minutes;
    QSpinBox *spinBox_Minutes;
    QPushButton *button_addProduct;
    QTableWidget *table_Cooking;
    QTableWidget *table_Cooked;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Cooked;
    QProgressBar *progressBar;
    QPushButton *Button_Start;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Time;
    QTimeEdit *time_Time;
    QRadioButton *radioButton_SpeedTime;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *button_pause;
    QPushButton *button_reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 351, 111));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 336, 71));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_ProductTitle = new QLabel(layoutWidget);
        label_ProductTitle->setObjectName("label_ProductTitle");

        horizontalLayout->addWidget(label_ProductTitle);

        text_ProductTitle = new QTextEdit(layoutWidget);
        text_ProductTitle->setObjectName("text_ProductTitle");

        horizontalLayout->addWidget(text_ProductTitle);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_minutes = new QLabel(layoutWidget);
        label_minutes->setObjectName("label_minutes");

        horizontalLayout_2->addWidget(label_minutes);

        spinBox_Minutes = new QSpinBox(layoutWidget);
        spinBox_Minutes->setObjectName("spinBox_Minutes");

        horizontalLayout_2->addWidget(spinBox_Minutes);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        button_addProduct = new QPushButton(layoutWidget);
        button_addProduct->setObjectName("button_addProduct");

        formLayout->setWidget(1, QFormLayout::FieldRole, button_addProduct);

        table_Cooking = new QTableWidget(centralwidget);
        if (table_Cooking->columnCount() < 3)
            table_Cooking->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_Cooking->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_Cooking->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_Cooking->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table_Cooking->setObjectName("table_Cooking");
        table_Cooking->setGeometry(QRect(20, 130, 351, 411));
        table_Cooking->horizontalHeader()->setStretchLastSection(true);
        table_Cooking->verticalHeader()->setCascadingSectionResizes(true);
        table_Cooked = new QTableWidget(centralwidget);
        if (table_Cooked->columnCount() < 3)
            table_Cooked->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_Cooked->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_Cooked->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_Cooked->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        table_Cooked->setObjectName("table_Cooked");
        table_Cooked->setGeometry(QRect(380, 130, 411, 411));
        table_Cooked->horizontalHeader()->setStretchLastSection(true);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(380, 30, 411, 94));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_Cooked = new QLabel(layoutWidget1);
        label_Cooked->setObjectName("label_Cooked");

        horizontalLayout_4->addWidget(label_Cooked);

        progressBar = new QProgressBar(layoutWidget1);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        horizontalLayout_4->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout_4);

        Button_Start = new QPushButton(layoutWidget1);
        Button_Start->setObjectName("Button_Start");

        verticalLayout_2->addWidget(Button_Start);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_Time = new QLabel(layoutWidget1);
        label_Time->setObjectName("label_Time");

        horizontalLayout_3->addWidget(label_Time);

        time_Time = new QTimeEdit(layoutWidget1);
        time_Time->setObjectName("time_Time");
        time_Time->setAcceptDrops(false);
        time_Time->setToolTipDuration(0);
        time_Time->setReadOnly(true);

        horizontalLayout_3->addWidget(time_Time);


        verticalLayout->addLayout(horizontalLayout_3);

        radioButton_SpeedTime = new QRadioButton(layoutWidget1);
        radioButton_SpeedTime->setObjectName("radioButton_SpeedTime");

        verticalLayout->addWidget(radioButton_SpeedTime);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        button_pause = new QPushButton(layoutWidget1);
        button_pause->setObjectName("button_pause");

        horizontalLayout_6->addWidget(button_pause);

        button_reset = new QPushButton(layoutWidget1);
        button_reset->setObjectName("button_reset");

        horizontalLayout_6->addWidget(button_reset);


        verticalLayout_3->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Add product", nullptr));
        label_ProductTitle->setText(QCoreApplication::translate("MainWindow", "Product Title:", nullptr));
        label_minutes->setText(QCoreApplication::translate("MainWindow", "Minutes:", nullptr));
        button_addProduct->setText(QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_Cooking->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "All time", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_Cooking->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Time to cook", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_Cooking->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Product", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_Cooked->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Time alredy go", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_Cooked->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Time cooking", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_Cooked->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Product Title", nullptr));
        label_Cooked->setText(QCoreApplication::translate("MainWindow", "Cooked: ", nullptr));
        Button_Start->setText(QCoreApplication::translate("MainWindow", "Strart", nullptr));
        label_Time->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        radioButton_SpeedTime->setText(QCoreApplication::translate("MainWindow", "Speed time", nullptr));
        button_pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        button_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
