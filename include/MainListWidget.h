// =====================================================================================
// 
//       Filename:  MainListWidget.h
//
//    Description:  �Զ����������б���ʾ
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
