// =====================================================================================
// 
//       Filename:  LinkControlWidget.h
//
//    Description:  ��������ǩ Widget
//
//        Version:  1.0
//        Created:  2013��08��21�� 17ʱ48��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKCONTROLWIDGET_H_
#define LINKCONTROLWIDGET_H_

#include <QWidget>

class QHBoxLayout;
class QVBoxLayout;
class QPushButton;

class LinkControlWidget : public QWidget
{
	Q_OBJECT

public:
	LinkControlWidget();
	~LinkControlWidget();

	void createMainWeiget();		// ��������ʾ

private:

};

#endif	// LINKCONTROLWIDGET_H_
