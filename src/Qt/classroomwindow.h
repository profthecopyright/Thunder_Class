#ifndef CLASSROOMWINDOW_H
#define CLASSROOMWINDOW_H

#include <QMainWindow>

namespace Ui
{
class ClassroomWindow;
}

class QtGUIAdaptor;

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
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
