// =====================================================================================
// 
//       Filename:  MainWindow.h
//
//    Description:  主窗口的类声明头文件
//
//        Version:  1.0
//        Created:  2013年08月18日 21时11分58秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>

#include "FalconType.h"

class QLabel;
class QSplitter;
class QMenu;
class QToolBar;
class QAction;
class QSpinBox;
class QLineEdit;
class QPushButton;

class QSplitter;
class QHBoxLayout;
class QVBoxLayout;

class LinkTreeWidget;
class MainStackWidget;
class ControlSocket;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	void sleep(unsigned int msec);

	MainStackWidget *getStackWidget();

	void setStatusLabel(QString strLabel);
	void setClientList(QVector<GroupWithClient> &vectClient);
	void setClientScreenInfo();
	void setClientFluxInfo();
	void setClientProcessInfo();
	void setClientHardInfo();
	void setClientLogInfo();
	void setClientCmd();


protected:
	//void closeEvent(QCloseEvent *event);

private slots:
	void connectInfo();
	void screenShot();
	void flux();
	void process();
	void cmd();
	void info();
	void about();

private:
	void createMainWeiget();		// 创建主窗口
	void createActions();			// 创建动作
	void createMenus();				// 创建主菜单
	void createToolBars();			// 创建工具栏
	void createStatusBar();			// 创建状态栏
	void tryConnServer();			// 尝试连接服务器

	QLabel *statusLabel;			// 状态栏文字

	QLabel *currLinkLabel;			// 主界面当前连接标签
	QLabel *currPortLabel;			// 主界面连接端口标签

	QLineEdit *currLinkIPEdit;		// 主界面当前连接输入框
	QSpinBox  *currPortSpin;		// 主界面连接端口输入框

	QPushButton *linkButton;		// 手动连接按钮

	LinkTreeWidget *linkTreeWidget; 	// 自动上线主机列表
	MainStackWidget *mainStackWidget;	// 标签管理

	QHBoxLayout *topLayout;			// 顶部分割窗口
	QSplitter *bottomSplitter;		// 底部切分窗口
	QVBoxLayout *mainLayout;		// 主分割窗口

	QWidget *mainWigget;			// 主窗口显示

	QMenu *fileMenu;				// 主菜单-文件子菜单指针
	QMenu *setsMenu;				// 主菜单-设置子菜单指针
	QMenu *helpMenu;				// 主菜单-帮助子菜单指针

	QToolBar *mainToolBar;			// 功能相关工具栏指针

	QAction *auto_connAction;		// 自动上线
	QAction *configAction;			// 服务端配置

	QAction *connectAction; 		// 连接总览
	QAction *screenShotAction;		// 屏幕捕获
	QAction *fluxAction; 			// 流量监控
	QAction *processAction; 		// 进程管理
	QAction *cmdAction; 			// 远程命令
	QAction *infoAction; 			// 信息查看

	QAction *settingAction;			// 软件设置
	QAction *minAction;				// 最小化窗口
	QAction *exitAction;			// 退出程序
	QAction *aboutAction;			// 关本于程序

	ControlSocket *clientSocket;	// 与服务端通信套接字
};

#endif // MAINWINDOW_H_