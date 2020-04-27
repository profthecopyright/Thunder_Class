#include "guiadaptor.h"
#include "../core/taskcontroller.h"

//构造与析构
void GUIAdaptor::create()
{
    this->taskController = new TaskController(this);
}
void GUIAdaptor::destroy()
{
    delete this->taskController;
}
//登录
void GUIAdaptor::onLogin(std::string name, std::string password)
{
    return this->taskController->onLogin(name, password);
}
void GUIAdaptor::onExit()
{
    return this->taskController->onExit();
}
//管理
void GUIAdaptor::onUserListChange()
{
    return this->taskController->onUserListChange();
}
//学生端
void GUIAdaptor::onSetServerIP(std::string ip)
{
    return this->taskController->onSetServerIP(ip);
}
void GUIAdaptor::onStartAudioShare()
{
    return this->taskController->onStartAudioShare();
}
void GUIAdaptor::onCloseAudioShare()
{
    return this->taskController->onCloseAudioShare();
}
std::vector<std::string> GUIAdaptor::onRequireAudioOutputDevices()
{
    return this->taskController->onRequireAudioOutputDevices();
}
void GUIAdaptor::onSelectAudioOutputDevice(int rank)
{
    return this->taskController->onSelectAudioOutputDevice(rank);
}
void GUIAdaptor::onSetMute(bool b)
{
    return this->taskController->onSetMute(b);
}
void GUIAdaptor::onSelectAudioInputDevice(int rank)
{
    return this->taskController->onSelectAudioInputDevice(rank);
}
std::vector<std::string> GUIAdaptor::onRequireAudioInputDevices()
{
    return this->taskController->onRequireAudioInputDevices();
}
void GUIAdaptor::onCommitAnswer()
{
    return this->taskController->onCommitAnswer();
}
void GUIAdaptor::onFocusChange(bool ifFocused)
{
    return this->taskController->onFocusChange(ifFocused);
}
//教师端
void GUIAdaptor::onRaiseTest()
{
    return this->taskController->onRaiseTest();
}
void GUIAdaptor::onAskStudent()
{
    return this->taskController->onAskStudent();
}
void GUIAdaptor::onAskStudent(std::string name)
{
    return this->taskController->onAskStudent(name);
}
void GUIAdaptor::onMicControl(bool ifAllow)
{
    return this->taskController->onMicControl(ifAllow);
}
