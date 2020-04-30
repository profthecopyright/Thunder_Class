/***************************************************************
【文件名】          loginwindow.cpp
【功能模块和目的】   登录窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#include "loginwindow.h"
#include "../gui/qtguiadaptor.h"
#include "ui_loginwindow.h"

/***************************************************************
【函数名称】         构造函数
【函数功能】         设置guiAdaptor指针
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
LoginWindow::LoginWindow(QtGUIAdaptor* w, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = w;
}
/***************************************************************
【函数名称】         析构函数
【函数功能】         无
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
LoginWindow::~LoginWindow()
{
    delete ui;
}
/***************************************************************
【函数名称】         点击登录按钮
【函数功能】         向内部发送登录消息
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void LoginWindow::on_loginButton_clicked()
{
    std::string username, password;
    username = this->ui->userName->text().toStdString();
    password = this->ui->userPassword->text().toStdString();
    this->guiAdaptor->onLogin(username, password);
}
