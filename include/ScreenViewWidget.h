// =====================================================================================
// 
//       Filename:  ScreenViewWiget.h
//
//    Description:  ��Ļ�����ʾ
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

#ifndef SCREENVIEWWIDGET_H_
#define SCREENVIEWWIDGET_H_

#include <QGroupBox>

class QLabel;
class QPixmap;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;

class ScreenViewWidget : public QGroupBox
{
	Q_OBJECT

public:
	ScreenViewWidget();
	~ScreenViewWidget();
public slots:
	void screenShotNative();
	void saveScreenShot();

private:
	QLabel *label;
	QPixmap *originalPixmap;
	QPushButton *screenButton;
	QPushButton *saveButton;
	QHBoxLayout *hBoxLayout;
	QVBoxLayout *vBoxLayout;
};

#endif	// SCREENVIEWWIDGET_H_
