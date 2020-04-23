#ifndef CLASSROOMWINDOW_H
#define CLASSROOMWINDOW_H

#include <QMainWindow>

namespace Ui {
class ClassroomWindow;
}

class QtWorkflow;
class ClassroomWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClassroomWindow(QtWorkflow*, QWidget *parent = nullptr);
    ~ClassroomWindow();

private:
    Ui::ClassroomWindow *ui;
    QtWorkflow *workflow;
};

#endif // CLASSROOMWINDOW_H
