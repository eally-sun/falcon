// =====================================================================================
// 
//       Filename:  InfoWidget.h
//
//    Description:  ��Ϣ�鿴ѡ�
//
//        Version:  1.0
//        Created:  2013��08��23�� 11ʱ03��08��
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

class InfoWidget : public QGroupBox
{
	Q_OBJECT

public:
	InfoWidget();
	~InfoWidget();

public slots:
	void resetView();

private:
	QTextBrowser *infoView;
	QPushButton *hardInfoButton;
	QPushButton *logInfoButton;
	QVBoxLayout *vBoxLayout;
	QHBoxLayout *hBoxLayout;
};

#endif	// INFOWIDGET_H_
