#ifndef CLASSROOMWINDOW_H
#define CLASSROOMWINDOW_H

#include <QMainWindow>

namespace Ui {
class ClassroomWindow;
}

class QtGUIAdaptor;
class ClassroomWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClassroomWindow(QtGUIAdaptor*, QWidget *parent = nullptr);
    ~ClassroomWindow();

private:
    Ui::ClassroomWindow *ui;
    QtGUIAdaptor *guiAdaptor;
};

#endif // CLASSROOMWINDOW_H
