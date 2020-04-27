#ifndef QTWORKFLOW_H
#define QTWORKFLOW_H

#include <QApplication>
#include <QString>
#include <string>

#include "guiadaptor.h"

class AdminWindow;
class ClassroomWindow;
class TeachWindow;
class LoginWindow;
class LoginBot;

class QtGUIAdaptor: public GUIAdaptor
{
public:
    QtGUIAdaptor(int argc, char* argv[]);
    ~QtGUIAdaptor();

//-----------核心类可用的函数-------------------
    void quitApplication();
//登录相关
    bool closeLoginWindow();
    void showLoginWindow();
//课室相关
    void showClassroomWindow();
    bool closeClassroomWindow();
//授课相关
    void showTeachWindow();
    bool closeTeachWindow();
//管理相关
    void showAdminWindow(std::vector<std::vector<std::string>>);
    bool closeAdminWindow();

    QApplication *app;

private:
    LoginWindow *loginWindow;
    ClassroomWindow *classroomWindow;
    TeachWindow *teachWindow;
    AdminWindow *adminWindow;
    LoginBot *loginBot;
};

#endif // QTWORKFLOW_H
