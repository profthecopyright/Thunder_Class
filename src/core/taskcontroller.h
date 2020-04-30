/***************************************************************
【文件名】          taskcontroller.h
【功能模块和目的】   管理任务
【开发者及日期】    未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef TASKCONTROLLER_H
#define TASKCONTROLLER_H

#include <string>
#include <vector>

class GUIAdaptor;
class Message;

/***************************************************************
【类名】            TaskController
【功能】            管理任务
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/

class TaskController {
  public:
    TaskController(GUIAdaptor*);
    ~TaskController();
    int respondToGUIMessage(const Message& message);

  private:
    GUIAdaptor* guiAdaptor;
};

#endif // TASKCONTROLLER_H
