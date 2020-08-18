#ifndef BLACKWINDOW_H
#define BLACKWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BlackWindow; }
QT_END_NAMESPACE

class BlackWindow : public QMainWindow
{
    Q_OBJECT

public:
    BlackWindow(QWidget *parent = nullptr);
    ~BlackWindow();

private:
    Ui::BlackWindow *ui;
};
#endif // BLACKWINDOW_H
