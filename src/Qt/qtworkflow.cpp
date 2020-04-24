#include "qtworkflow.h"
#include "loginwindow.h"
#include "classroomwindow.h"
#include "teachwindow.h"
#include "adminwindow.h"
#include "../core/loginbot.h"
#include "../core/csvio.h"

//函数：主函数
//目标：创建一个业务流程类
int main(int argc, char *argv[])
{
    QtWorkflow workflow(argc,argv);
    return workflow.app->exec();
}

//函数：构造
//目标：创建窗口类
QtWorkflow::QtWorkflow(int argc, char *argv[])
{
    this->app = new QApplication(argc, argv);
    this->loginWindow = new LoginWindow(this);
    this->classroomWindow = new ClassroomWindow(this);
    this->teachWindow = new TeachWindow(this);
    this->adminWindow = new AdminWindow(this);
    this->loginBot = new LoginBot(this);
    this->showLoginWindow();
}

//函数：析构
//目标：删除窗口类
QtWorkflow::~QtWorkflow()
{
    delete this->loginWindow;
    delete this->classroomWindow;
    delete this->teachWindow;
    delete this->adminWindow;
    delete this->app;
}

//--------------------------------调用核心类的函数---------------------------------

//函数：处理登录
//目标：
int QtWorkflow::onLogin(std::string name, std::string password)
{
    return this->loginBot->onLogin(name, password);
}
//函数：修改用户列表
void QtWorkflow::onAdminChangeList()
{
    //TODO
}
//函数：请求音频输出设备
std::vector<std::string> QtWorkflow::onRequireAudioOutputList()
{
    std::vector<std::string> r;
    //TODO
    return r;
}
//函数：请求音频输出设备
std::vector<std::string> QtWorkflow::onRequireAudioInputList()
{
    std::vector<std::string> r;
    //TODO
    return r;
}
//函数：选择音频输出设备
int QtWorkflow::onSelectAudioOutput()
{
    //TODO
    return -1;
}
//函数：选择音频输入设备
int QtWorkflow::onSelectAudioInput()
{
    //TODO
    return -1;
}
//函数：开始共享屏幕
void QtWorkflow::onShareScreen()
{
    //TODO
}
//函数：开始共享音频
void QtWorkflow::onShareAudio()
{
    //TODO
}
//函数：提问
void QtWorkflow::onRaiseQuestion()
{
    //TODO
}
//函数：发起测试
void QtWorkflow::onCreateTest()
{
    //TODO
}
//函数：学生登录
void QtWorkflow::onStudentEnter()
{
    //TODO
}
//函数：焦点变更
void QtWorkflow::onFocusChange()
{
    //TODO
}

//--------------------------------核心类可调用的函数---------------------------------

//函数：退出程序
//目标：
void QtWorkflow::quitApplication()
{
    this->app->exit(0);
}

//登录相关
//函数：显示登录窗口
//目标：显示登录窗口
void QtWorkflow::showLoginWindow()
{
    return this->loginWindow->show();
}

//函数：关闭登录窗口
//目标：关闭登录窗口
bool QtWorkflow::closeLoginWindow()
{
    return this->loginWindow->close();
}

//课室相关
//函数：显示课室窗口
void QtWorkflow::showClassroomWindow()
{
    this->classroomWindow->show();
}
//函数：关闭课室窗口
bool QtWorkflow::closeClassroomWindow()
{
    return this->classroomWindow->close();
}

//授课相关
//函数：显示授课窗口
void QtWorkflow::showTeachWindow()
{
    this->teachWindow->show();
}
//函数：关闭授课窗口
bool QtWorkflow::closeTeachWindow()
{
    return this->teachWindow->close();
}

//管理员相关
//函数：显示管理员窗口
void QtWorkflow::showAdminWindow()
{
    this->adminWindow->show();
    this->adminWindow->loadList(this->loginBot->getDefaultCSV()->getTable());
}
//函数：关闭管理员窗口
bool QtWorkflow::closeAdminWindow()
{
    return this->adminWindow->close();
}
//函数：要显示的用户列表中添加条目
void QtWorkflow::addShowUsers(std::string id,std::string name, std::string password, std::string role)
{
    this->adminWindow->tableAddItem(QString::fromStdString(id),
                                    QString::fromStdString(name),
                                    QString::fromStdString(password),
                                    QString::fromStdString(role));
}

