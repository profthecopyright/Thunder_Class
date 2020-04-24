#ifndef QTWORKFLOW_H
#define QTWORKFLOW_H

#include <QApplication>
#include <QString>
#include <string>

#include "../core/workflow.h"

class AdminWindow;
class ClassroomWindow;
class TeachWindow;
class LoginWindow;
class LoginBot;

class QtWorkflow: public Workflow
{
public:
    QtWorkflow(int argc, char* argv[]);
    ~QtWorkflow();
//------------调用核心类的函数-------------------
    int onLogin(std::string, std::string);
    void onAdminChangeList();
    std::vector<std::string> onRequireAudioOutputList();
    std::vector<std::string> onRequireAudioInputList();
    int onSelectAudioOutput();
    int onSelectAudioInput();
    void onShareScreen();
    void onShareAudio();
    void onRaiseQuestion();
    void onCreateTest();
    void onStudentEnter();
    void onFocusChange();
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
    void showAdminWindow();
    bool closeAdminWindow();
    void addShowUsers(std::string, std::string, std::string, std::string);

    QApplication *app;

private:
    LoginWindow *loginWindow;
    ClassroomWindow *classroomWindow;
    TeachWindow *teachWindow;
    AdminWindow *adminWindow;
    LoginBot *loginBot;
};

#endif // QTWORKFLOW_H
