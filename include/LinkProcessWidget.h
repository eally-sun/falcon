// =====================================================================================
// 
//       Filename:  LinkProcessWidget.h
//
//    Description:  ���̹����ǩ Widget
//
//        Version:  1.0
//        Created:  2013��08��18�� 09ʱ14��05��
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

class LinkProcessWidget : public QGroupBox
{
	Q_OBJECT

public:
	LinkProcessWidget();
	~LinkProcessWidget();
	
	void createMainWeiget();		// ��������ʾ

private:
	ProcessTreeView *processTreeView; 	// ������ʾ�б�
	QPushButton *getProcessButton;		// ��ȡ�����б�ť
	QPushButton *killProcessButton;		// ����ѡ�н��̰�ť

	QVBoxLayout *processLayout;			// �����б��ڿ���
	QHBoxLayout *processButtonLayout;	// �����б�ײ����ڿ���
};

#endif	// LINKPROCESSWIDGET_H_
