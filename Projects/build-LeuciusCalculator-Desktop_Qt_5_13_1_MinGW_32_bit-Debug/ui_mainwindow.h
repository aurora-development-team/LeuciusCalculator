/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Calcular;
    QComboBox *weaponBox;
    QLabel *label;
    QLabel *damage;
    QLabel *bonus;
    QLabel *dmgVal;
    QLabel *bonVal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1599, 939);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Calcular = new QPushButton(centralwidget);
        Calcular->setObjectName(QString::fromUtf8("Calcular"));
        Calcular->setGeometry(QRect(710, 710, 221, 61));
        QPalette palette;
        QBrush brush(QColor(170, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush3(QColor(0, 223, 223, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush4(QColor(51, 153, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        Calcular->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("High Tower Text"));
        font.setPointSize(14);
        Calcular->setFont(font);
        Calcular->setCursor(QCursor(Qt::OpenHandCursor));
        weaponBox = new QComboBox(centralwidget);
        weaponBox->setObjectName(QString::fromUtf8("weaponBox"));
        weaponBox->setGeometry(QRect(140, 400, 221, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 390, 71, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("High Tower Text"));
        font1.setPointSize(12);
        label->setFont(font1);
        damage = new QLabel(centralwidget);
        damage->setObjectName(QString::fromUtf8("damage"));
        damage->setGeometry(QRect(170, 460, 131, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("High Tower Text"));
        font2.setPointSize(24);
        font2.setItalic(true);
        damage->setFont(font2);
        bonus = new QLabel(centralwidget);
        bonus->setObjectName(QString::fromUtf8("bonus"));
        bonus->setGeometry(QRect(180, 540, 91, 61));
        bonus->setFont(font2);
        dmgVal = new QLabel(centralwidget);
        dmgVal->setObjectName(QString::fromUtf8("dmgVal"));
        dmgVal->setGeometry(QRect(290, 460, 1291, 61));
        dmgVal->setFont(font2);
        bonVal = new QLabel(centralwidget);
        bonVal->setObjectName(QString::fromUtf8("bonVal"));
        bonVal->setGeometry(QRect(290, 540, 211, 61));
        bonVal->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1599, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Calcular->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Weapon", nullptr));
        damage->setText(QCoreApplication::translate("MainWindow", "Damage:", nullptr));
        bonus->setText(QCoreApplication::translate("MainWindow", "Bonus:", nullptr));
        dmgVal->setText(QString());
        bonVal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
