#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SystemTray()->show();
}

void MainWindow::shhow(void)
{
    this->showNormal();
    this->activateWindow();
}

/**
 * @brief MainWindow::SystemTray, for tray icon function
 * @return system tray handler
 */
QSystemTrayIcon *MainWindow::SystemTray(void)
{
    QSystemTrayIcon *pTray = new QSystemTrayIcon(this);

    pTray->setIcon(QIcon(":/src/icons/State_Standby.ico"));

    QMenu *tray_menu = new QMenu(this);

    QAction *act1 = new QAction(tr("一键启动"), tray_menu);
    QAction *act2 = new QAction(tr("退出程序"), tray_menu);

    connect(act1, &QAction::triggered, this, &MainWindow::shhow);
    connect(act2, &QAction::triggered, this, &MainWindow::exit);

    tray_menu->addAction(act1);
    tray_menu->addAction(act2);

    pTray->setContextMenu(tray_menu);

    return pTray;
}

void MainWindow::exit(void)
{
    qDebug() <<  "hello";
}

MainWindow::~MainWindow()
{
    delete ui;
}
