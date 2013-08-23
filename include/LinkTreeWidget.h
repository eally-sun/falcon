// =====================================================================================
// 
//       Filename:  LinkTreeWidget.h
//
//    Description:  �Զ�����������ʾ
//
//        Version:  1.0
//        Created:  2013��08��17�� 11ʱ03��08��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKTREEWIDGET_H_
#define LINKTREEWIDGET_H_

#include <QTreeWidget>
#include <QString>

class MainWindow;

class LinkTreeWidget : public QTreeWidget
{
	Q_OBJECT

public:
	LinkTreeWidget(MainWindow *mainWindow);
	~LinkTreeWidget();

	bool addGroupItem(QString &strTitle);
	bool addComputerItem(QString &strGroup, QString &strTitle, bool isOnline);

	QString strNowSelectIP;

public slots:
	void changeNowSelectIP(QTreeWidgetItem * current);

private:
	MainWindow *mainWindow;
};

#endif	// LINKTREEWIDGET_H_
