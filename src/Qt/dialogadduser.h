#ifndef DIALOGADDUSER_H
#define DIALOGADDUSER_H

#include <QDialog>

namespace Ui
{
class DialogAddUser;
}

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/
class DialogAddUser: public QDialog {
    Q_OBJECT

  public:
    explicit DialogAddUser(QWidget* parent = nullptr);
    ~DialogAddUser();

  private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

  private:
    Ui::DialogAddUser* ui;
    QWidget* parent;

    void accept() override;
};

#endif // DIALOGADDUSER_H
