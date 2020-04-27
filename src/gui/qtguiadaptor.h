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

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/

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
};

#endif // QTWORKFLOW_H
