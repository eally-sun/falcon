// =====================================================================================
// 
//       Filename:  LinkTreeWidget.h
//
//    Description:  自动上线主机显示
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

#ifndef LINKTREEWIDGET_H_
#define LINKTREEWIDGET_H_

#include <QTreeWidget>
#include <QVector>
#include <QString>

class MainWindow;
class QAction;

class LinkTreeWidget : public QTreeWidget
{
	Q_OBJECT

public:
	LinkTreeWidget(MainWindow *mainWindow);
	~LinkTreeWidget();

	bool addGroupItem(QString strTitle);
	bool delGroupItem(QString strTitle);
	bool addComputerItem(QString strGroup, QString strTitle, bool isOnline);
	bool removeComputerItem(QString strComputer);

	QString strNowSelectIP;

public slots:
	void changeNowSelectIP(QTreeWidgetItem *current);
	void showContextMenu(const QPoint &);
	void addGroupAction();
	void delGroupAction();
	void moveGroupAction(QAction *);

private:
	MainWindow *mainWindow;
	QVector<QString> vectGroupName;
};

#endif	// LINKTREEWIDGET_H_
