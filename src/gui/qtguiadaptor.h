/***************************************************************
【文件名】          qtguiadaptor.h
【功能模块和目的】   实现GUI接口
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

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
class SetIPWindow;

/***************************************************************
【类名】            QtGUIAdaptor
【功能】            实现GUIAdaptor的接口
【接口说明】
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

class QtGUIAdaptor: public GUIAdaptor {
  public:
    QtGUIAdaptor(int argc, char* argv[]);
    ~QtGUIAdaptor();

    //-----------核心类可用的函数-------------------
    void quitApplication();
    //登录相关
    bool closeLoginWindow();
    void showLoginWindow();
    //课室相关
    void showSetIPWindow();
    bool closeSetIPWindow();
    void showClassroomWindow();
    bool closeClassroomWindow();
    //授课相关
    void showTeachWindow();
    bool closeTeachWindow();
    //管理相关
    void showAdminWindow(std::vector<std::vector<std::string>>);
    bool closeAdminWindow();

    QApplication* app;

  private:
    LoginWindow* loginWindow;
    SetIPWindow* setIPWindow;
    ClassroomWindow* classroomWindow;
    TeachWindow* teachWindow;
    AdminWindow* adminWindow;
};

#endif // QTWORKFLOW_H
