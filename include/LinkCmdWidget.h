// =====================================================================================
// 
//       Filename:  LinkCmdWidget.h
//
//    Description:  cmd �����ǩ Widget
//
//        Version:  1.0
//        Created:  2013��08��21�� 09ʱ33��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKCMDWIDGET_H_
#define LINKCMDWIDGET_H_

#include <QWidget>

class QTextEdit;
class QLabel;
class QLineEdit;
class QPushButton;
class QVBoxLayout;
class QHBoxLayout;

class LinkCmdWidget : public QWidget
{
	Q_OBJECT

public:
	LinkCmdWidget();
	~LinkCmdWidget();

	void createMainWeiget();			// ��������ʾ

private:
	QTextEdit *cmdTextEdit;				// cmd �����ʾ����
	QLabel *cmdLabel;					// ���������ǩ
	QLineEdit *cmdInputEdit;			// cmd ���������
	QPushButton *sendButton;			// ���� cmd ���ť

	QVBoxLayout *cmdLayout;				// cmd ���ڿ���
	QHBoxLayout *cmdButtonLayout;		// cmd �ײ����ڿ���
};

#endif	// LINKCMDWIDGET_H_
