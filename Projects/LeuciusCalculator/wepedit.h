#ifndef WEPEDIT_H
#define WEPEDIT_H

#include <QWidget>

namespace Ui {
class wepEdit;
}

class wepEdit : public QWidget
{
    Q_OBJECT

public:
    explicit wepEdit(QWidget *parent = nullptr);
    ~wepEdit();

private slots:


    void on_weaponbox_activated(int index);

    void on_DD_activated(int index);

    void on_editDamage_clicked();

    void on_editDamage_2_clicked();

    void on_delWep_clicked();

    void on_confirm_clicked();

private:
    Ui::wepEdit *ui;
};

#endif // WEPEDIT_H
