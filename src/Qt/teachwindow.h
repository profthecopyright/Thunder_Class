#ifndef TEACHWINDOW_H
#define TEACHWINDOW_H

#include <QMainWindow>

class QtWorkflow;

namespace Ui {
class TeachWindow;
}

class TeachWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeachWindow(QtWorkflow *,QWidget *parent = nullptr);
    ~TeachWindow();

private:
    Ui::TeachWindow *ui;
    QtWorkflow *workflow;
};

#endif // TEACHWINDOW_H
