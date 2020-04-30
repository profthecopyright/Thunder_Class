/***************************************************************
【文件名】          teachwindow.h
【功能模块和目的】   教学窗口
【开发者及日期】     未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef TEACHWINDOW_H
#define TEACHWINDOW_H

#include <QMainWindow>

class QtGUIAdaptor;

namespace Ui
{
class TeachWindow;
}

/***************************************************************
【类名】            TeachWindow
【功能】            教师端教学
【接口说明】        无接口
【开发者及日期】     未完成
【更改记录】        (若修改过则必需注明)
****************************************************************/

class TeachWindow: public QMainWindow {
    Q_OBJECT

  public:
    explicit TeachWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~TeachWindow();

  private:
    Ui::TeachWindow* ui;
    QtGUIAdaptor* guiAdaptor;
};

#endif // TEACHWINDOW_H
