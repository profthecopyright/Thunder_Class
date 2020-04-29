/***************************************************************
【文件名】          setipwindow.cpp
【功能模块和目的】   设置服务端ip地址的窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#include "setipwindow.h"
#include "../gui/qtguiadaptor.h"
#include "ui_setipwindow.h"

/***************************************************************
【函数名称】         构造函数
【函数功能】         设置guiAdaptor指针
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
SetIPWindow::SetIPWindow(QtGUIAdaptor* g, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::SetIPWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = g;
}
/***************************************************************
【函数名称】         析构函数
【函数功能】         无
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
SetIPWindow::~SetIPWindow()
{
    delete ui;
}
/***************************************************************
【函数名称】         点击申请登录按钮
【函数功能】         发送设置服务端ip地址的消息
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void SetIPWindow::on_loginButton_clicked()
{
    std::string ipAdress = this->ui->lineEdit_ip->text().toStdString();
    std::string port = this->ui->lineEdit_port->text().toStdString();
    this->guiAdaptor->onSetServerIP(ipAdress, port);
}
