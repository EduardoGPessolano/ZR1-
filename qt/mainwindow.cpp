#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngineWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWebEngineView *view = new QWebEngineView(this->ui->centralWidget);
    view->setGeometry(0, 0, 900, 500);

    view->load(QUrl("http://192.168.18.90"));
    view->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
