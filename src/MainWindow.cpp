// =====================================================================================
// 
//       Filename:  MainWindow.cpp
//
//    Description:  主窗口的类实现文件
//
//        Version:  1.0
//        Created:  2013年08月18日 21时11分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "MainWindow.h"
#include "LinkTreeWidget.h"
#include "MainStackWidget.h"

#define FALCAN_TITLE tr(" Falcan 企业网络监控系统 -- Alpha 1")

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)	
{
	// 设置窗口大小
	//resize(1000, 650);
	setFixedSize(1000,650);
	createMainWeiget();
	createActions();
	createMenus();
	createToolBars();
	createStatusBar();

	setWindowIcon(QIcon(":/res/ico/main.ico"));
	setWindowTitle(FALCAN_TITLE);
}

MainWindow::~MainWindow()	
{

}

/*================================================================
*  函 数 名： MainWindow::connectInfo
*
*  功能描述： 切换到连接信息选项卡
*
*  参    数： 无	  
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::connectInfo()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(0);
}

/*================================================================
*  函 数 名：  MainWindow::screenShot
*
*  功能描述： 切换到屏幕捕获选项卡
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::screenShot()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(1);
}

/*================================================================
*  函 数 名： MainWindow::flux
*
*  功能描述： 切换到流量显示选项卡
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::flux()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(2);
}

/*================================================================
*  函 数 名： MainWindow::process
*
*  功能描述： 切换到进程信息选项卡
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::process()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(3);
}

/*================================================================
*  函 数 名： MainWindow::cmd
*
*  功能描述： 切换到远程命令选项卡
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::cmd()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(4);
}

/*================================================================
*  函 数 名： MainWindow::info
*
*  功能描述： 切换到信息查看选项卡
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::info()
{
	(mainStackWidget->getStackLayout())->setCurrentIndex(5);
}

/*================================================================
*  函 数 名： MainWindow::about
*
*  功能描述： 显示关于对话框
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::about()
{
	QMessageBox::about(this, tr("关于 Falcan"),
			tr("<h2>Falcon 企业网络监控系统</h2>"
				"<p>Safe  Stable  Sharp (安全，稳定，敏捷)"
				"<p><h3>一个基于 Windows NT 平台的局域网络管理控制软件，GUI By Qt 4.X 。</h3>"
				"<p>严正声明：本程序仅用于技术研究，任何集体和个人使用该"
				"程序造成的任何违法后果由使用者个人承担！"
				"<p>Copyright (C) 2013 Hunters "));
}

/*================================================================
*  函 数 名： MainWindow::createMainWeiget
*
*  功能描述： 创建主界面控件
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::createMainWeiget()
{
	currLinkLabel = new QLabel(tr("正向连接服务端"));
	currPortLabel = new QLabel(tr("  连接端口"));
	passwordLabel = new QLabel(tr("  连接密码"));
	
	currLinkIPEdit = new QLineEdit();

	QRegExp regExp("((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)");
	currLinkIPEdit->setValidator(new QRegExpValidator(regExp, this));
	currLinkIPEdit->setText("192.168.0.1");
	currLinkIPEdit->setMaxLength(15);

	currPortSpin = new QSpinBox();
	currPortSpin->setRange(1, 65535);
	currPortSpin->setValue(9527);

	passwordEdit = new QLineEdit();
	passwordEdit->setEchoMode(QLineEdit::Password);

	linkButton = new QPushButton(tr("连接服务端"));

	topLayout = new QHBoxLayout();
	topLayout->addWidget(currLinkLabel);
	topLayout->addWidget(currLinkIPEdit);
	topLayout->addWidget(currPortLabel);
	topLayout->addWidget(currPortSpin);
	topLayout->addWidget(passwordLabel);
	topLayout->addWidget(passwordEdit);
	topLayout->addWidget(linkButton);
	topLayout->addStretch();
	
	mainStackWidget = new MainStackWidget();
	linkTreeWidget = new LinkTreeWidget();

	bottomSplitter = new QSplitter(Qt::Horizontal);
	bottomSplitter->addWidget(linkTreeWidget);
	bottomSplitter->addWidget(mainStackWidget);
	bottomSplitter->setStretchFactor(1, 1); 

	mainLayout = new QVBoxLayout();
	mainLayout->addLayout(topLayout);
	mainLayout->addWidget(bottomSplitter);

	mainWigget = new QWidget();
	mainWigget->setLayout(mainLayout);

	this->setCentralWidget(mainWigget);
}

/*================================================================
*  函 数 名： MainWindow::createActions
*
*  功能描述： 创建主界面响应
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::createActions()
{
	auto_connAction = new QAction(tr("搜索服务端"), this);
	auto_connAction->setIcon(QIcon(":/res/images/auto_conn.png"));
	auto_connAction->setStatusTip(tr("自动服务客户端"));

	configAction = new QAction(tr("服务端配置"), this);
	configAction->setIcon(QIcon(":/res/images/config.png"));
	configAction->setStatusTip(tr("服务端配置"));

	settingAction = new QAction(tr("程序设置"), this);
	settingAction->setIcon(QIcon(":/res/images/setting.png"));
	settingAction->setStatusTip(tr("程序设置"));

	exitAction = new QAction(tr("退出程序"), this);
	exitAction->setIcon(QIcon(":/res/images/exit.png"));
	exitAction->setStatusTip(tr("退出程序"));
	connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

	aboutAction = new QAction(tr("关于本程序"), this);
	aboutAction->setIcon(QIcon(":/res/images/about.png"));
	aboutAction->setStatusTip(tr("关于本程序"));
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));

	connectAction = new QAction(tr("连接总览"), this);
	connectAction->setIcon(QIcon(":/res/images/connect.png"));
	connectAction->setStatusTip(tr("客户端连接总览"));
	connect(connectAction, SIGNAL(triggered()), this, SLOT(connectInfo()));

	screenShotAction = new QAction(tr("屏幕捕获"), this);
	screenShotAction->setIcon(QIcon(":/res/images/screenshot.png"));
	screenShotAction->setStatusTip(tr("捕获被控端的屏幕"));
	connect(screenShotAction, SIGNAL(triggered()), this, SLOT(screenShot()));
	
	fluxAction = new QAction(tr("流量监控"), this);
	fluxAction->setIcon(QIcon(":/res/images/flux.png"));
	fluxAction->setStatusTip(tr("客户端流量监控"));
	connect(fluxAction, SIGNAL(triggered()), this, SLOT(flux()));
	
	processAction = new QAction(tr("进程管理"), this);
	processAction->setIcon(QIcon(":/res/images/process.png"));
	processAction->setStatusTip(tr("客户端进程管理"));
	connect(processAction, SIGNAL(triggered()), this, SLOT(process()));
	
	cmdAction = new QAction(tr("远程CMD"), this);
	cmdAction->setIcon(QIcon(":/res/images/cmd.png"));
	cmdAction->setStatusTip(tr("远程执行CMD命令"));
	connect(cmdAction, SIGNAL(triggered()), this, SLOT(cmd()));

	infoAction = new QAction(tr("信息查看"), this);
	infoAction->setIcon(QIcon(":/res/images/information.png"));
	infoAction->setStatusTip(tr("查看客户端信息和处理日志"));
	connect(infoAction, SIGNAL(triggered()), this, SLOT(info()));
}

/*================================================================
*  函 数 名： MainWindow::createMenus
*
*  功能描述： 创建主界面菜单
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::createMenus()
{
	fileMenu = this->menuBar()->addMenu(tr("文件"));
	fileMenu->addAction(auto_connAction);
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	setsMenu = this->menuBar()->addMenu(tr("设置"));
	setsMenu->addAction(configAction);
	setsMenu->addSeparator();
	setsMenu->addAction(settingAction);

	helpMenu = this->menuBar()->addMenu(tr("帮助"));
	helpMenu->addAction(aboutAction);
}

/*================================================================
*  函 数 名： MainWindow::createToolBars
*
*  功能描述： 创建主界面工具栏
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::createToolBars()
{
	mainToolBar = addToolBar(tr("工具栏"));
	mainToolBar->setMovable(false);
	mainToolBar->setIconSize(QSize(60, 60));
	mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	mainToolBar->setStyleSheet("QToolBar{ background:url(:/res/images/ToolBack.png); }");

	mainToolBar->addSeparator();
	mainToolBar->addAction(connectAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(screenShotAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(fluxAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(processAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(cmdAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(infoAction);
	mainToolBar->addSeparator();
	mainToolBar->addAction(aboutAction);
	mainToolBar->addSeparator();
}

/*================================================================
*  函 数 名： MainWindow::createStatusBar
*
*  功能描述： 创建主界面状态栏
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::createStatusBar()
{
	statusLabel = new QLabel(FALCAN_TITLE);
	statusLabel->setAlignment(Qt::AlignHCenter);
	statusLabel->setMinimumSize(statusLabel->sizeHint());

	this->statusBar()->addWidget(statusLabel);
}

/*================================================================
*  函 数 名： MainWindow::sleep
*
*  功能描述： sleep函数实现
*
*  参    数： unsigned int msec 毫秒
*			  
*			  
*  返 回 值：无
*
*  作    者：刘欢 2013/8
================================================================*/
void MainWindow::sleep(unsigned int msec)
{
	QTime dieTime = QTime::currentTime().addMSecs(msec);

	while (QTime::currentTime() < dieTime) {
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
	}
}
