#ifndef TASKCONTROLLER_H
#define TASKCONTROLLER_H

#include <string>
#include <vector>

class GUIAdaptor;

/***************************************************************
【类名】            TaskController
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/

class TaskController {
  public:
    TaskController(GUIAdaptor*);
    ~TaskController();

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

  private:
    GUIAdaptor* guiAdaptor;
};

#endif // TASKCONTROLLER_H
