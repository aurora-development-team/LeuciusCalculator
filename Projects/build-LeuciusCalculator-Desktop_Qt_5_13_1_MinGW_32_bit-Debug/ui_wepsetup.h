/********************************************************************************
** Form generated from reading UI file 'wepsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEPSETUP_H
#define UI_WEPSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wepSetup
{
public:
    QComboBox *dice;
    QTextBrowser *fOut;
    QLabel *times;
    QLineEdit *ndice;
    QPushButton *addDamage;
    QComboBox *damage;
    QLineEdit *wepName;
    QLabel *label;
    QPushButton *confirm;
    QPushButton *cancel;
    QLabel *label_2;
    QSpinBox *bonus;

    void setupUi(QWidget *wepSetup)
    {
        if (wepSetup->objectName().isEmpty())
            wepSetup->setObjectName(QString::fromUtf8("wepSetup"));
        wepSetup->resize(480, 640);
        QFont font;
        font.setPointSize(10);
        wepSetup->setFont(font);
        dice = new QComboBox(wepSetup);
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->setObjectName(QString::fromUtf8("dice"));
        dice->setGeometry(QRect(170, 140, 71, 31));
        fOut = new QTextBrowser(wepSetup);
        fOut->setObjectName(QString::fromUtf8("fOut"));
        fOut->setGeometry(QRect(40, 250, 401, 192));
        times = new QLabel(wepSetup);
        times->setObjectName(QString::fromUtf8("times"));
        times->setGeometry(QRect(140, 150, 16, 16));
        QFont font1;
        font1.setPointSize(14);
        times->setFont(font1);
        ndice = new QLineEdit(wepSetup);
        ndice->setObjectName(QString::fromUtf8("ndice"));
        ndice->setGeometry(QRect(100, 140, 31, 31));
        addDamage = new QPushButton(wepSetup);
        addDamage->setObjectName(QString::fromUtf8("addDamage"));
        addDamage->setGeometry(QRect(380, 140, 91, 31));
        damage = new QComboBox(wepSetup);
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->addItem(QString());
        damage->setObjectName(QString::fromUtf8("damage"));
        damage->setGeometry(QRect(250, 140, 121, 31));
        wepName = new QLineEdit(wepSetup);
        wepName->setObjectName(QString::fromUtf8("wepName"));
        wepName->setGeometry(QRect(90, 70, 381, 20));
        label = new QLabel(wepSetup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 21));
        label->setFont(font1);
        confirm = new QPushButton(wepSetup);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(60, 520, 151, 71));
        confirm->setFont(font1);
        cancel = new QPushButton(wepSetup);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(260, 520, 151, 71));
        cancel->setFont(font1);
        label_2 = new QLabel(wepSetup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 71, 21));
        label_2->setFont(font1);
        bonus = new QSpinBox(wepSetup);
        bonus->setObjectName(QString::fromUtf8("bonus"));
        bonus->setGeometry(QRect(110, 100, 42, 22));

        retranslateUi(wepSetup);

        QMetaObject::connectSlotsByName(wepSetup);
    } // setupUi

    void retranslateUi(QWidget *wepSetup)
    {
        wepSetup->setWindowTitle(QCoreApplication::translate("wepSetup", "Form", nullptr));
        dice->setItemText(0, QCoreApplication::translate("wepSetup", "1", nullptr));
        dice->setItemText(1, QCoreApplication::translate("wepSetup", "d4", nullptr));
        dice->setItemText(2, QCoreApplication::translate("wepSetup", "d6", nullptr));
        dice->setItemText(3, QCoreApplication::translate("wepSetup", "d8", nullptr));
        dice->setItemText(4, QCoreApplication::translate("wepSetup", "d10", nullptr));
        dice->setItemText(5, QCoreApplication::translate("wepSetup", "d12", nullptr));
        dice->setItemText(6, QCoreApplication::translate("wepSetup", "d20", nullptr));

        times->setText(QCoreApplication::translate("wepSetup", "*", nullptr));
        addDamage->setText(QCoreApplication::translate("wepSetup", "add damage", nullptr));
        damage->setItemText(0, QCoreApplication::translate("wepSetup", "slashing", nullptr));
        damage->setItemText(1, QCoreApplication::translate("wepSetup", "piercing", nullptr));
        damage->setItemText(2, QCoreApplication::translate("wepSetup", "bludgeoning", nullptr));
        damage->setItemText(3, QCoreApplication::translate("wepSetup", "force", nullptr));
        damage->setItemText(4, QCoreApplication::translate("wepSetup", "cold", nullptr));
        damage->setItemText(5, QCoreApplication::translate("wepSetup", "fire", nullptr));
        damage->setItemText(6, QCoreApplication::translate("wepSetup", "necrotic", nullptr));
        damage->setItemText(7, QCoreApplication::translate("wepSetup", "radiant", nullptr));
        damage->setItemText(8, QCoreApplication::translate("wepSetup", "psychic", nullptr));
        damage->setItemText(9, QCoreApplication::translate("wepSetup", "lightning", nullptr));
        damage->setItemText(10, QCoreApplication::translate("wepSetup", "thunder", nullptr));
        damage->setItemText(11, QCoreApplication::translate("wepSetup", "acid", nullptr));
        damage->setItemText(12, QCoreApplication::translate("wepSetup", "poison", nullptr));

        label->setText(QCoreApplication::translate("wepSetup", "name:", nullptr));
        confirm->setText(QCoreApplication::translate("wepSetup", "confirm", nullptr));
        cancel->setText(QCoreApplication::translate("wepSetup", "cancel", nullptr));
        label_2->setText(QCoreApplication::translate("wepSetup", "Bonus:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wepSetup: public Ui_wepSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEPSETUP_H
