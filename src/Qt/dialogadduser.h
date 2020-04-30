/***************************************************************
【文件名】          dialogadduser.h
【功能模块和目的】   管理员窗口中添加新用户的对话框窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef DIALOGADDUSER_H
#define DIALOGADDUSER_H

#include <QDialog>

namespace Ui
{
class DialogAddUser;
}

class AdminWindow;
/***************************************************************
【类名】            DialogAddUser
【功能】            管理员添加用户的对话窗口
【接口说明】        无接口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/
class DialogAddUser: public QDialog {
    Q_OBJECT

  public:
    explicit DialogAddUser(AdminWindow*, QWidget* parent = nullptr);
    ~DialogAddUser();

  private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

  private:
    Ui::DialogAddUser* ui;
    QWidget* parent;
    AdminWindow* adminWindow;

    void accept() override;
};

#endif // DIALOGADDUSER_H
