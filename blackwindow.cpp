#include "blackwindow.h"
#include "ui_blackwindow.h"
#include <QTimer>

BlackWindow::BlackWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BlackWindow)
{
    ui->setupUi(this);
    QTimer::singleShot(0, this, SLOT(showFullScreen()));
    this->setStyleSheet("background-color: black;");
}

BlackWindow::~BlackWindow()
{
    delete ui;
}

void QWidget::mouseReleaseEvent(QMouseEvent *event){
    qApp->quit();
}

void QWidget::keyPressEvent(QKeyEvent *event){
    qApp->quit();
}
