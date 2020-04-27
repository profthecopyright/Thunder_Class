#ifndef TEACHWINDOW_H
#define TEACHWINDOW_H

#include <QMainWindow>

class QtGUIAdaptor;

namespace Ui
{
class TeachWindow;
}

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
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
