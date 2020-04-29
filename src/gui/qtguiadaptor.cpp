/***************************************************************
【文件名】          qtguiadaptor.cpp
【功能模块和目的】   实现GUI接口
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

#include "qtguiadaptor.h"
#include "../Qt/adminwindow.h"
#include "../Qt/classroomwindow.h"
#include "../Qt/loginwindow.h"
#include "../Qt/setipwindow.h"
#include "../Qt/teachwindow.h"

/***************************************************************
【函数名称】         main
【函数功能】         创建一个业务流程类，开发阶段用来测试代码
【参数】             输入参数
【返回值】           正常返回0
【开发者及日期】      测试代码无需留名
【更改记录】         (若有修改，则必需注明)
****************************************************************/
int main(int argc, char* argv[])
{
    QtGUIAdaptor workflow(argc, argv);

    std::vector<std::vector<std::string>> table;
    std::vector<std::string> item;
    item.push_back("测试id");
    item.push_back("测试名");
    item.push_back("测试密码");
    item.push_back("测试身份");
    table.push_back(item);
    item.push_back("测试id2");
    item.push_back("测试名2");
    item.push_back("测试密码2");
    item.push_back("测试身份2");
    table.push_back(item);
    workflow.showAdminWindow(table);

    return workflow.app->exec();
}

/***************************************************************
【函数名称】         构造函数
【函数功能】         创建一个app，并执行基类的构造
【参数】             输入参数
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
QtGUIAdaptor::QtGUIAdaptor(int argc, char* argv[])
{
    this->app = new QApplication(argc, argv);
    this->loginWindow = new LoginWindow(this);
    this->create();
}

/***************************************************************
【函数名称】         析构函数
【函数功能】         销毁app，销毁可能创建的窗口，并执行基类的析构
【参数】             输入参数
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
QtGUIAdaptor::~QtGUIAdaptor()
{
    this->destroy();
    if (this->loginWindow != nullptr) {
        delete this->loginWindow;
    }
    if (this->classroomWindow != nullptr) {
        delete this->classroomWindow;
    }
    if (this->adminWindow != nullptr) {
        delete this->classroomWindow;
    }
    if (this->teachWindow != nullptr) {
        delete this->classroomWindow;
    }
    if (this->setIPWindow != nullptr) {
        delete this->classroomWindow;
    }
    delete this->app;
}


/***************************************************************
【函数名称】         退出程序
【函数功能】         提供退出程序接口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::quitApplication()
{
    this->app->exit(0);
}

/***************************************************************
【函数名称】         showLoginWindow
【函数功能】         若无则创建登录窗口，显示登录窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::showLoginWindow()
{
    if (this->loginWindow == nullptr) {
        this->loginWindow = new LoginWindow(this);
    }
    return this->loginWindow->show();
}

/***************************************************************
【函数名称】         closeLoginWindow
【函数功能】         若有则关闭登录窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
bool QtGUIAdaptor::closeLoginWindow()
{
    if (this->loginWindow != nullptr) {
        return this->loginWindow->close();
    }
    return false;
}

//课室相关

/***************************************************************
【函数名称】         showSetIPWindow
【函数功能】         若无则创建ip窗口，显示ip窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::showSetIPWindow()
{
    if (this->setIPWindow == nullptr) {
        this->setIPWindow = new SetIPWindow(this);
    }
    return this->setIPWindow->show();
}

/***************************************************************
【函数名称】         closeSetIPWindow
【函数功能】         若有则关闭ip窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
bool QtGUIAdaptor::closeSetIPWindow()
{
    if (this->setIPWindow != nullptr) {
        return this->setIPWindow->close();
    }
    return false;
}

/***************************************************************
【函数名称】         showClassroomWindow
【函数功能】         若无则创建课室窗口，显示课室窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::showClassroomWindow()
{
    if (this->classroomWindow == nullptr) {
        this->classroomWindow = new ClassroomWindow(this);
    }
    return this->classroomWindow->show();
}
/***************************************************************
【函数名称】         closeClassroomWindow
【函数功能】         若有则关闭课室窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
bool QtGUIAdaptor::closeClassroomWindow()
{
    if (this->classroomWindow != nullptr) {
        return this->classroomWindow->close();
    }
    return false;
}

//授课相关
/***************************************************************
【函数名称】         showTeachWindow
【函数功能】         若无则创建授课窗口，显示授课窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::showTeachWindow()
{
    if (this->classroomWindow == nullptr) {
        this->classroomWindow = new ClassroomWindow(this);
    }
    return this->loginWindow->show();
}
/***************************************************************
【函数名称】         closeTeachWindow
【函数功能】         若有则关闭授课窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
bool QtGUIAdaptor::closeTeachWindow()
{
    if (this->teachWindow != nullptr) {
        return this->teachWindow->close();
    }
    return false;
}

//管理员相关
/***************************************************************
【函数名称】         showAdminWindow
【函数功能】         若无则创建管理员窗口，显示管理员窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void QtGUIAdaptor::showAdminWindow(std::vector<std::vector<std::string>> table)
{
    // std::cout << "调用" << table[0][0] << std::endl;
    if (this->adminWindow == nullptr) {
        this->adminWindow = new AdminWindow(this);
    }
    this->adminWindow->loadList(table);
    return this->adminWindow->show();
}
/***************************************************************
【函数名称】         closeAdminWindow
【函数功能】         若有则关闭管理员窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
bool QtGUIAdaptor::closeAdminWindow()
{
    if (this->adminWindow != nullptr) {
        return this->adminWindow->close();
    }
    return false;
}
