#include "blackwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>
#include <QWindow>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int screenCount = QApplication::screens().length();
    for(int i = 0; i < screenCount; i++){
        QRect screenRect = QApplication::screens().at(i)->geometry();

        QPoint globalCursorPos = QCursor::pos();
        QScreen *mouseScreen = QGuiApplication::screenAt(globalCursorPos);

        if(mouseScreen->name() == QApplication::screens().at(i)->name()){
            continue;
        }

        BlackWindow *w = new BlackWindow;
        w->setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
        w->setWindowTitle("blackwindow-"+QString::number(i)+"-nice");
        w->show();
        w->windowHandle()->setScreen(QApplication::screens()[i]);
        w->move(QPoint(screenRect.x(), screenRect.y()));
    }

    return a.exec();
}
