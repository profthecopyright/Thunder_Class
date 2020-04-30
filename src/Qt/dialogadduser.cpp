/***************************************************************
【文件名】          dialogadduser.cpp
【功能模块和目的】   管理员窗口中添加新用户的对话框窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#include "dialogadduser.h"
#include "adminwindow.h"
#include "ui_dialogadduser.h"

/***************************************************************
【函数名称】         构造函数
【函数功能】         设置父窗口指针
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
DialogAddUser::DialogAddUser(AdminWindow* a, QWidget* parent)
    : QDialog(parent), ui(new Ui::DialogAddUser)
{
    ui->setupUi(this);
    this->parent = parent;
    this->adminWindow = a;
}
/***************************************************************
【函数名称】         析构函数
【函数功能】         暂无
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
DialogAddUser::~DialogAddUser()
{
    delete ui;
}

/***************************************************************
【函数名称】         点击拒绝按钮
【函数功能】         关闭自己窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void DialogAddUser::on_buttonBox_rejected()
{
    this->close();
}
/***************************************************************
【函数名称】         点击接受按钮
【函数功能】         暂无
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void DialogAddUser::on_buttonBox_accepted()
{
}
/***************************************************************
【函数名称】         重载接受指令
【函数功能】         添加一行用户信息
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void DialogAddUser::accept()
{
    QString id, name, password, role;
    id = this->ui->editId->text();
    name = this->ui->editName->text();
    password = this->ui->editPassword->text();
    role = this->ui->chooseRole->currentText();
    std::vector<std::string> item;

    item.push_back(id.toStdString());
    item.push_back(name.toStdString());
    item.push_back(password.toStdString());
    item.push_back(role.toStdString());


    if (id.isEmpty()) {
        this->ui->editId->setFocus();
    }
    else if (name.isEmpty()) {
        this->ui->editName->setFocus();
    }
    else if (password.isEmpty()) {
        this->ui->editPassword->setFocus();
    }
    else {
        this->adminWindow->table.push_back(item);
        this->adminWindow->tableAddItem(id, name, password, role);
        return QDialog::accept();
    }
}
