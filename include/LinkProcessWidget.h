// =====================================================================================
// 
//       Filename:  LinkProcessWidget.h
//
//    Description:  进程管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年08月18日 09时14分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKPROCESSWIDGET_H_
#define LINKPROCESSWIDGET_H_

#include <QGroupBox>

class QPushButton;
class QVBoxLayout;
class QHBoxLayout;
class FileTreeView;
class ProcessTreeView;
class MainWindow;

class LinkProcessWidget : public QGroupBox
{
	Q_OBJECT

public:
	LinkProcessWidget(MainWindow *mainWindow);
	~LinkProcessWidget();
	
	void createMainWeiget();		// 创建主显示
	ProcessTreeView *getProcessView();

public slots:
	void resetInfo();
	void getProcessList();

private:
	ProcessTreeView *processTreeView; 	// 进程显示列表
	QPushButton *getProcessButton;		// 获取进程列表按钮
	QPushButton *killProcessButton;		// 结束选中进程按钮

	QVBoxLayout *processLayout;			// 进程列表窗口控制
	QHBoxLayout *processButtonLayout;	// 进程列表底部窗口控制
	MainWindow *mainWindow;
};

#endif	// LINKPROCESSWIDGET_H_
