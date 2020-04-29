/***************************************************************
【文件名】          guiadaptor.h
【功能模块和目的】   GUI包装
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef WORKFLOW_H
#define WORKFLOW_H

#include <string>
#include <vector>

class TaskController;

/***************************************************************
【类名】            GUIAdaptor
【功能】            GUI包装
【接口说明】        字面意思理解即可
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/

class GUIAdaptor {
  public:
    //构造与析构
    void create();
    void destroy();
    //登录
    bool onLogin(std::string, std::string);
    bool onExit();
    //管理
    bool onUserListChange(std::vector<std::vector<std::string>>);
    //学生端
    bool onSetServerIP(std::string, std::string);
    bool onStartAudioShare();
    bool onCloseAudioShare();
    std::vector<std::string> onRequireAudioOutputDevices();
    bool onSelectAudioOutputDevice(int);
    bool onSetMute(bool);
    bool onSelectAudioInputDevice(int);
    std::vector<std::string> onRequireAudioInputDevices();
    bool onCommitAnswer();
    bool onFocusChange(bool);
    //教师端
    bool onRaiseTest();
    bool onCloseTest();
    bool onAskStudent();
    bool onAskStudent(std::string);
    bool onCloseAskStudent();
    bool onMicControl(bool);

    virtual void quitApplication() = 0;
    //登录
    virtual bool closeLoginWindow() = 0;
    virtual void showLoginWindow() = 0;
    //课室相关
    virtual void showClassroomWindow() = 0;
    virtual bool closeClassroomWindow() = 0;
    //管理相关
    virtual void showAdminWindow(std::vector<std::vector<std::string>>) = 0;
    virtual bool closeAdminWindow() = 0;

  private:
    TaskController* taskController;
};

#endif // WORKFLOW_H
