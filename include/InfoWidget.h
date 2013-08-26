// =====================================================================================
// 
//       Filename:  InfoWidget.h
//
//    Description:  信息查看选项卡
//
//        Version:  1.0
//        Created:  2013年08月23日 11时03分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef INFOWIDGET_H_
#define INFOWIDGET_H_

#include <QGroupBox>

class QPushButton;
class QVBoxLayout;
class QHBoxLayout;
class QTextBrowser;
class MainWindow;

class InfoWidget : public QGroupBox
{
	Q_OBJECT

public:
	InfoWidget(MainWindow *mainWindow);
	~InfoWidget();

	QTextBrowser *infoView;

public slots:
	void resetView();
	void getHardInfo();
	void getLogInfo();

private:
	QPushButton *hardInfoButton;
	QPushButton *logInfoButton;
	QVBoxLayout *vBoxLayout;
	QHBoxLayout *hBoxLayout;
	MainWindow *mainWindow;
};

#endif	// INFOWIDGET_H_
