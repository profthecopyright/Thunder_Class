#ifndef DIALOGADDUSER_H
#define DIALOGADDUSER_H

#include <QDialog>

namespace Ui {
class DialogAddUser;
}

class DialogAddUser : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddUser(QWidget *parent = nullptr);
    ~DialogAddUser();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::DialogAddUser *ui;
    QWidget *parent;

    void accept() override;
};

#endif // DIALOGADDUSER_H
