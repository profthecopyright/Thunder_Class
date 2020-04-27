#ifndef WORKFLOW_H
#define WORKFLOW_H

#include <string>
#include <vector>

class TaskController;

class GUIAdaptor
{
public:
    //构造与析构
    void create();
    void destroy();
    //登录
    void onLogin(std::string, std::string);
    void onExit();
    //管理
    void onUserListChange();
    //学生端
    void onSetServerIP(std::string);
    void onStartAudioShare();
    void onCloseAudioShare();
    std::vector<std::string> onRequireAudioOutputDevices();
    void onSelectAudioOutputDevice(int);
    void onSetMute(bool);
    void onSelectAudioInputDevice(int);
    std::vector<std::string> onRequireAudioInputDevices();
    void onCommitAnswer();
    void onFocusChange(bool);
    //教师端
    void onRaiseTest();
    void onAskStudent();
    void onAskStudent(std::string);
    void onMicControl(bool);

    virtual void quitApplication()=0;
    //登录
    virtual bool closeLoginWindow()=0;
    virtual void showLoginWindow()=0;
    //课室相关
    virtual void showClassroomWindow()=0;
    virtual bool closeClassroomWindow()=0;
    //管理相关
    virtual void showAdminWindow(std::vector<std::vector<std::string>>)=0;
    virtual bool closeAdminWindow()=0;

private:
    TaskController* taskController;
};

#endif // WORKFLOW_H
