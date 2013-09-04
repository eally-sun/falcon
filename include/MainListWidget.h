// =====================================================================================
// 
//       Filename:  MainListWidget.h
//
//    Description:  自动上线主机列表显示
//
//        Version:  1.0
//        Created:  2013年08月17日 11时03分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINLISTWIDGET_H_
#define MAINLISTWIDGET_H_

#include <QListWidget>
#include <QVector>
#include <QString>

class MainListWidget : public QListWidget
{
	Q_OBJECT

public:
	MainListWidget();
	~MainListWidget();

	void addComputerItem(QString strTitle, bool isOnline);
	void removeComputerItem(QString strTitle);
private:
	QVector<QString> vectClient;
};

#endif	// MAINLISTWIDGET_H_
