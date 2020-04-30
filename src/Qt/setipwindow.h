/***************************************************************
【文件名】          setipwindow.h
【功能模块和目的】   设置服务端ip地址的窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef SETIPWINDOW_H
#define SETIPWINDOW_H

#include <QMainWindow>

namespace Ui
{
class SetIPWindow;
}

class QtGUIAdaptor;
/***************************************************************
【类名】            SetIPWindow
【功能】            学生端设置服务端ip地址的窗口
【接口说明】        无接口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/
class SetIPWindow: public QMainWindow {
    Q_OBJECT

  public:
    explicit SetIPWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~SetIPWindow();

  private slots:
    void on_loginButton_clicked();

  private:
    Ui::SetIPWindow* ui;
    QtGUIAdaptor* guiAdaptor;
};

#endif // SETIPWINDOW_H
