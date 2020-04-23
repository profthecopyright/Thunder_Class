#include "qtworkflow.h"

int main(int argc, char *argv[])
{
    QtWorkflow workflow(argc,argv);
    return workflow.app->exec();
}

QtWorkflow::QtWorkflow(int argc, char *argv[])
{
    this->app = new QApplication(argc, argv);
    this->loginWindow = new LoginWindow(this);
    this->classroomWindow = new ClassroomWindow(this);
    this->adminWindow = new AdminWindow(this);
    this->loginBot = new LoginBot(this);
    this->showLoginWindow();
}

QtWorkflow::~QtWorkflow()
{
    delete this->loginWindow;
    delete this->classroomWindow;
    delete this->adminWindow;
    delete this->app;
}

//函数：退出程序
//目标：
void QtWorkflow::quitApplication()
{
    this->app->exit(0);
}

//-----------------------------------登录相关---------------------------------

//函数：处理登录
//目标：
int QtWorkflow::onLogin(std::string name, std::string password)
{
    return this->loginBot->onLogin(name, password);
}

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

//-----------------------------------课室相关---------------------------------
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

//-----------------------------------管理员相关---------------------------------
//函数：显示管理员窗口
void QtWorkflow::showAdminWindow()
{
    this->adminWindow->show();
    this->adminWindow->loadList(this->loginBot->getDefaultCSV().getTable());
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

