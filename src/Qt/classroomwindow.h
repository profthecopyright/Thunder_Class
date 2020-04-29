/***************************************************************
【文件名】          classroomwindow.h
【功能模块和目的】   登录窗口
【开发者及日期】     未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef CLASSROOMWINDOW_H
#define CLASSROOMWINDOW_H

#include <QMainWindow>

namespace Ui
{
class ClassroomWindow;
}

class QtGUIAdaptor;

/***************************************************************
【类名】            ClassroomWindow
【功能】            学生端课室窗口
【接口说明】        无接口
【开发者及日期】     未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/
class ClassroomWindow: public QMainWindow {
    Q_OBJECT

  public:
    explicit ClassroomWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~ClassroomWindow();

  private:
    Ui::ClassroomWindow* ui;
    QtGUIAdaptor* guiAdaptor;
};

#endif // CLASSROOMWINDOW_H
