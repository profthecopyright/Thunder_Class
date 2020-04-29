/***************************************************************
【文件名】          guiadaptor.cpp
【功能模块和目的】   GUI包装
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

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
bool GUIAdaptor::onLogin(std::string name, std::string password)
{
    // TODO
    return false;
}
bool GUIAdaptor::onExit()
{
    // TODO
    return false;
}
//管理
bool GUIAdaptor::onUserListChange(std::vector<std::vector<std::string>> table)
{
    // TODO
    return false;
}
//学生端
bool GUIAdaptor::onSetServerIP(std::string ip, std::string port)
{
    // TODO
    return false;
}
bool GUIAdaptor::onStartAudioShare()
{
    // TODO
    return false;
}
bool GUIAdaptor::onCloseAudioShare()
{
    // TODO
}
std::vector<std::string> GUIAdaptor::onRequireAudioOutputDevices()
{
    // TODO
    // return false;
}
bool GUIAdaptor::onSelectAudioOutputDevice(int rank)
{
    // TODO
    return false;
}
bool GUIAdaptor::onSetMute(bool b)
{
    // TODO
    return false;
}
bool GUIAdaptor::onSelectAudioInputDevice(int rank)
{
    // TODO
    return false;
}
std::vector<std::string> GUIAdaptor::onRequireAudioInputDevices()
{
    // TODO
    // return false;
}
bool GUIAdaptor::onCommitAnswer()
{
    // TODO
    return false;
}
bool GUIAdaptor::onFocusChange(bool ifFocused)
{
    // TODO
    return false;
}
//教师端
bool GUIAdaptor::onRaiseTest()
{
    // TODO
    return false;
}
bool GUIAdaptor::onCloseTest()
{
    // TODO
    return false;
}
bool GUIAdaptor::onAskStudent()
{
    // TODO
    return false;
}
bool GUIAdaptor::onAskStudent(std::string name)
{
    // TODO
    return false;
}
bool GUIAdaptor::onCloseAskStudent()
{
    // TODO
    return false;
}
bool GUIAdaptor::onMicControl(bool ifAllow)
{
    // TODO
    return false;
}
