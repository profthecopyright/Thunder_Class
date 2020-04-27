#include "taskcontroller.h"
#include "../gui/guiadaptor.h"

TaskController::TaskController(GUIAdaptor* g)
{
    this->guiAdaptor = g;
}

TaskController::~TaskController()
{

}

//登录
void TaskController::onLogin(std::string, std::string)
{
    //TODO:
}
void TaskController::onExit()
{
    //TODO:
}
//管理
void TaskController::onUserListChange()
{
    //TODO:
}
//学生端
void TaskController::onSetServerIP(std::string)
{
    //TODO:
}
void TaskController::onStartAudioShare()
{
    //TODO:
}
void TaskController::onCloseAudioShare()
{
    //TODO:
}
std::vector<std::string> TaskController::onRequireAudioOutputDevices()
{
    //TODO:
}
void TaskController::onSelectAudioOutputDevice(int)
{
    //TODO:
}
void TaskController::onSetMute(bool)
{
    //TODO:
}
void TaskController::onSelectAudioInputDevice(int)
{
    //TODO:
}
std::vector<std::string> TaskController::onRequireAudioInputDevices()
{
    //TODO:
}
void TaskController::onCommitAnswer()
{
    //TODO:
}
void TaskController::onFocusChange(bool)
{
    //TODO:
}
//教师端
void TaskController::onRaiseTest()
{
    //TODO:
}
void TaskController::onAskStudent()
{
    //TODO:
}
void TaskController::onAskStudent(std::string)
{
    //TODO:
}
void TaskController::onMicControl(bool)
{
    //TODO:
}
