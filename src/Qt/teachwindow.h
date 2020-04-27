#ifndef TEACHWINDOW_H
#define TEACHWINDOW_H

#include <QMainWindow>

class QtGUIAdaptor;

namespace Ui {
class TeachWindow;
}

class TeachWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeachWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~TeachWindow();

private:
    Ui::TeachWindow *ui;
    QtGUIAdaptor *guiAdaptor;
};

#endif // TEACHWINDOW_H
