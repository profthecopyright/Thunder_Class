#ifndef WORKFLOW_H
#define WORKFLOW_H

#include <string>

class LoginBot;
class CSVio;

class Workflow
{
public:
    virtual ~Workflow(){}
    virtual int onLogin(std::string, std::string) = 0;
    virtual void onAdminChangeList() = 0;
    virtual std::vector<std::string> onRequireAudioOutputList() = 0;
    virtual std::vector<std::string> onRequireAudioInputList() =0;
    virtual int onSelectAudioOutput() = 0;
    virtual int onSelectAudioInput() = 0;
    virtual void onShareScreen() = 0;
    virtual void onShareAudio() = 0;
    virtual void onRaiseQuestion() = 0;
    virtual void onCreateTest() = 0;
    virtual void onStudentEnter() = 0;
    virtual void onFocusChange() = 0;

    virtual void quitApplication() = 0;
    //登录
    virtual bool closeLoginWindow() = 0;
    virtual void showLoginWindow() = 0;
    //课室相关
    virtual void showClassroomWindow() = 0;
    virtual bool closeClassroomWindow() = 0;
    //管理相关
    virtual void showAdminWindow() = 0;
    virtual bool closeAdminWindow() = 0;
    virtual void addShowUsers(std::string, std::string, std::string, std::string) = 0;
};

#endif // WORKFLOW_H
