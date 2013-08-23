// =====================================================================================
// 
//       Filename:  MainStackWidget.h
//
//    Description:  标签显示管理
//
//        Version:  1.0
//        Created:  2013年08月18日 14时06分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINSTACKWIDGET_H_
#define MAINSTACKWIDGET_H_

#include <QWidget>

class QStackedLayout;
class MainListWidget;
class ScreenViewWidget;
class FluxViewWidget;
class LinkProcessWidget;
class LinkControlWidget;
class LinkCmdWidget;
class InfoWidget;

class MainStackWidget : public QWidget
{
	Q_OBJECT

public:
	MainStackWidget();
	~MainStackWidget();

	void createMainWeiget();
	QStackedLayout *getStackLayout();

private:
	QStackedLayout 		*stackedLayout; 			// 定义标签切换栈
	MainListWidget 		*mainListWidget; 			// 自动上线主机列表显示
	ScreenViewWidget 	*screenViewWidget;			// 屏幕监控显示控件
	FluxViewWidget 		*fluxViewWidget; 			// 流量监控显示控件
	LinkProcessWidget 	*linkProcessWidget;			// 进程管理标签的显示控件
	LinkControlWidget 	*linkControlWidget;			// 远程控制命令标签的显示控件
	LinkCmdWidget 		*linkCmdWidget;				// 远程 cmd 标签的显示控件
	InfoWidget 			*infoWidget;				// 信息查看选项卡	
};

#endif	// MAINSTACKWIDGET_H_
