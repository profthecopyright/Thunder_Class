#ifndef QTWORKFLOW_H
#define QTWORKFLOW_H

#include <QApplication>
#include <QString>
#include <string>
#include "loginwindow.h"
#include "classroomwindow.h"
#include "adminwindow.h"
#include "../core/csvio.h"
#include "../core/loginbot.h"

#define LOGIN_WRONG 0
#define LOGIN_STUDENT 1
#define LOGIN_TEACHER 2

class QtWorkflow
{
public:
    QtWorkflow(int argc, char* argv[]);
    ~QtWorkflow();
    void quitApplication();
//------------登录相关-------------------
    int onLogin(std::string, std::string);
    bool closeLoginWindow();
    void showLoginWindow();
//------------课室相关-------------------
    void showClassroomWindow();
    bool closeClassroomWindow();
//------------管理相关-------------------
    void showAdminWindow();
    bool closeAdminWindow();
    void addShowUsers(std::string, std::string, std::string, std::string);

    QApplication *app;

private:
    LoginWindow *loginWindow;
    ClassroomWindow *classroomWindow;
    AdminWindow *adminWindow;
    LoginBot *loginBot;
};

#endif // QTWORKFLOW_H
