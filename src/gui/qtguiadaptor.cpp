#include "qtguiadaptor.h"
#include "../Qt/adminwindow.h"
#include "../Qt/classroomwindow.h"
#include "../Qt/loginwindow.h"
#include "../Qt/teachwindow.h"

//函数：主函数
//目标：创建一个业务流程类
int main(int argc, char* argv[])
{
    QtGUIAdaptor workflow(argc, argv);
    return workflow.app->exec();
}

//函数：构造
//目标：创建窗口类
QtGUIAdaptor::QtGUIAdaptor(int argc, char* argv[])
{
    this->app = new QApplication(argc, argv);
    this->loginWindow = new LoginWindow(this);
    this->classroomWindow = new ClassroomWindow(this);
    this->teachWindow = new TeachWindow(this);
    this->adminWindow = new AdminWindow(this);
    this->create();
}

//函数：析构
//目标：删除窗口类
QtGUIAdaptor::~QtGUIAdaptor()
{
    delete this->loginWindow;
    delete this->classroomWindow;
    delete this->teachWindow;
    delete this->adminWindow;
    delete this->app;
}


//--------------------------------核心类可调用的函数---------------------------------

//函数：退出程序
//目标：
void QtGUIAdaptor::quitApplication()
{
    this->app->exit(0);
}

//登录相关
//函数：显示登录窗口
//目标：显示登录窗口
void QtGUIAdaptor::showLoginWindow()
{
    return this->loginWindow->show();
}

//函数：关闭登录窗口
//目标：关闭登录窗口
bool QtGUIAdaptor::closeLoginWindow()
{
    return this->loginWindow->close();
}

//课室相关
//函数：显示课室窗口
void QtGUIAdaptor::showClassroomWindow()
{
    this->classroomWindow->show();
}
//函数：关闭课室窗口
bool QtGUIAdaptor::closeClassroomWindow()
{
    return this->classroomWindow->close();
}

//授课相关
//函数：显示授课窗口
void QtGUIAdaptor::showTeachWindow()
{
    this->teachWindow->show();
}
//函数：关闭授课窗口
bool QtGUIAdaptor::closeTeachWindow()
{
    return this->teachWindow->close();
}

//管理员相关
//函数：显示管理员窗口
void QtGUIAdaptor::showAdminWindow(std::vector<std::vector<std::string>> table)
{
    this->adminWindow->show();
    this->adminWindow->loadList(table);
}
//函数：关闭管理员窗口
bool QtGUIAdaptor::closeAdminWindow()
{
    return this->adminWindow->close();
}
