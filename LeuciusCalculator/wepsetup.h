#ifndef WEPSETUP_H
#define WEPSETUP_H

#include <QWidget>

namespace Ui {
class wepSetup;
}

class wepSetup : public QWidget
{
    Q_OBJECT

public:
    explicit wepSetup(QWidget *parent = nullptr);
    ~wepSetup();

private slots:
    void on_cancel_clicked();

    void on_wepName_editingFinished();

    void on_addDamage_clicked();

    void on_bonus_valueChanged(int arg1);

private:
    Ui::wepSetup *ui;
};

#endif // WEPSETUP_H
