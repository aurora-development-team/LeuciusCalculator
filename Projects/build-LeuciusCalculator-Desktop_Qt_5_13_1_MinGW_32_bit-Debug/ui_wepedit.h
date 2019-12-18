/********************************************************************************
** Form generated from reading UI file 'wepedit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEPEDIT_H
#define UI_WEPEDIT_H

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

class Ui_wepEdit
{
public:
    QPushButton *confirm;
    QLabel *label_2;
    QComboBox *damage;
    QLabel *label;
    QTextBrowser *fOut;
    QSpinBox *bonus;
    QComboBox *dice;
    QLabel *times;
    QPushButton *editDamage;
    QLineEdit *ndice;
    QPushButton *cancel;
    QComboBox *weaponbox;
    QLabel *label_3;
    QComboBox *DD;
    QPushButton *editDamage_2;
    QPushButton *delWep;

    void setupUi(QWidget *wepEdit)
    {
        if (wepEdit->objectName().isEmpty())
            wepEdit->setObjectName(QString::fromUtf8("wepEdit"));
        wepEdit->resize(480, 640);
        confirm = new QPushButton(wepEdit);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(60, 520, 151, 71));
        QFont font;
        font.setPointSize(14);
        confirm->setFont(font);
        label_2 = new QLabel(wepEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 71, 21));
        label_2->setFont(font);
        damage = new QComboBox(wepEdit);
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
        damage->setGeometry(QRect(160, 180, 121, 31));
        label = new QLabel(wepEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 21));
        label->setFont(font);
        fOut = new QTextBrowser(wepEdit);
        fOut->setObjectName(QString::fromUtf8("fOut"));
        fOut->setGeometry(QRect(40, 250, 401, 141));
        bonus = new QSpinBox(wepEdit);
        bonus->setObjectName(QString::fromUtf8("bonus"));
        bonus->setGeometry(QRect(110, 100, 42, 22));
        dice = new QComboBox(wepEdit);
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->addItem(QString());
        dice->setObjectName(QString::fromUtf8("dice"));
        dice->setGeometry(QRect(80, 180, 71, 31));
        times = new QLabel(wepEdit);
        times->setObjectName(QString::fromUtf8("times"));
        times->setGeometry(QRect(60, 190, 16, 16));
        times->setFont(font);
        editDamage = new QPushButton(wepEdit);
        editDamage->setObjectName(QString::fromUtf8("editDamage"));
        editDamage->setGeometry(QRect(290, 180, 91, 31));
        ndice = new QLineEdit(wepEdit);
        ndice->setObjectName(QString::fromUtf8("ndice"));
        ndice->setGeometry(QRect(10, 180, 31, 31));
        cancel = new QPushButton(wepEdit);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(260, 520, 151, 71));
        cancel->setFont(font);
        weaponbox = new QComboBox(wepEdit);
        weaponbox->setObjectName(QString::fromUtf8("weaponbox"));
        weaponbox->setGeometry(QRect(90, 70, 371, 22));
        label_3 = new QLabel(wepEdit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 140, 71, 21));
        label_3->setFont(font);
        DD = new QComboBox(wepEdit);
        DD->setObjectName(QString::fromUtf8("DD"));
        DD->setGeometry(QRect(80, 140, 381, 22));
        editDamage_2 = new QPushButton(wepEdit);
        editDamage_2->setObjectName(QString::fromUtf8("editDamage_2"));
        editDamage_2->setGeometry(QRect(390, 180, 91, 31));
        delWep = new QPushButton(wepEdit);
        delWep->setObjectName(QString::fromUtf8("delWep"));
        delWep->setGeometry(QRect(300, 400, 141, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        delWep->setFont(font1);

        retranslateUi(wepEdit);

        QMetaObject::connectSlotsByName(wepEdit);
    } // setupUi

    void retranslateUi(QWidget *wepEdit)
    {
        wepEdit->setWindowTitle(QCoreApplication::translate("wepEdit", "Form", nullptr));
        confirm->setText(QCoreApplication::translate("wepEdit", "confirm", nullptr));
        label_2->setText(QCoreApplication::translate("wepEdit", "Bonus:", nullptr));
        damage->setItemText(0, QCoreApplication::translate("wepEdit", "slashing", nullptr));
        damage->setItemText(1, QCoreApplication::translate("wepEdit", "piercing", nullptr));
        damage->setItemText(2, QCoreApplication::translate("wepEdit", "bludgeoning", nullptr));
        damage->setItemText(3, QCoreApplication::translate("wepEdit", "force", nullptr));
        damage->setItemText(4, QCoreApplication::translate("wepEdit", "cold", nullptr));
        damage->setItemText(5, QCoreApplication::translate("wepEdit", "fire", nullptr));
        damage->setItemText(6, QCoreApplication::translate("wepEdit", "necrotic", nullptr));
        damage->setItemText(7, QCoreApplication::translate("wepEdit", "radiant", nullptr));
        damage->setItemText(8, QCoreApplication::translate("wepEdit", "psychic", nullptr));
        damage->setItemText(9, QCoreApplication::translate("wepEdit", "lightning", nullptr));
        damage->setItemText(10, QCoreApplication::translate("wepEdit", "thunder", nullptr));
        damage->setItemText(11, QCoreApplication::translate("wepEdit", "acid", nullptr));
        damage->setItemText(12, QCoreApplication::translate("wepEdit", "poison", nullptr));

        label->setText(QCoreApplication::translate("wepEdit", "name:", nullptr));
        dice->setItemText(0, QCoreApplication::translate("wepEdit", "1", nullptr));
        dice->setItemText(1, QCoreApplication::translate("wepEdit", "d4", nullptr));
        dice->setItemText(2, QCoreApplication::translate("wepEdit", "d6", nullptr));
        dice->setItemText(3, QCoreApplication::translate("wepEdit", "d8", nullptr));
        dice->setItemText(4, QCoreApplication::translate("wepEdit", "d10", nullptr));
        dice->setItemText(5, QCoreApplication::translate("wepEdit", "d12", nullptr));
        dice->setItemText(6, QCoreApplication::translate("wepEdit", "d20", nullptr));

        times->setText(QCoreApplication::translate("wepEdit", "*", nullptr));
        editDamage->setText(QCoreApplication::translate("wepEdit", "edit Damage", nullptr));
        cancel->setText(QCoreApplication::translate("wepEdit", "cancel", nullptr));
        label_3->setText(QCoreApplication::translate("wepEdit", "Dices:", nullptr));
        editDamage_2->setText(QCoreApplication::translate("wepEdit", "remove Damage", nullptr));
        delWep->setText(QCoreApplication::translate("wepEdit", "Delete Weapon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wepEdit: public Ui_wepEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEPEDIT_H
