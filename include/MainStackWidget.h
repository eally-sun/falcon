// =====================================================================================
// 
//       Filename:  MainStackWidget.h
//
//    Description:  ��ǩ��ʾ����
//
//        Version:  1.0
//        Created:  2013��08��18�� 14ʱ06��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINSTACKWIDGET_H_
#define MAINSTACKWIDGET_H_

#include <QWidget>

class QStackedLayout;
class MainListWidget;
class ScreenViewWidget;
class FluxViewWidget;
class LinkProcessWidget;
class LinkControlWidget;
class LinkCmdWidget;
class InfoWidget;

class MainStackWidget : public QWidget
{
	Q_OBJECT

public:
	MainStackWidget();
	~MainStackWidget();

	void createMainWeiget();
	QStackedLayout *getStackLayout();

private:
	QStackedLayout 		*stackedLayout; 			// �����ǩ�л�ջ
	MainListWidget 		*mainListWidget; 			// �Զ����������б���ʾ
	ScreenViewWidget 	*screenViewWidget;			// ��Ļ�����ʾ�ؼ�
	FluxViewWidget 		*fluxViewWidget; 			// ���������ʾ�ؼ�
	LinkProcessWidget 	*linkProcessWidget;			// ���̹����ǩ����ʾ�ؼ�
	LinkControlWidget 	*linkControlWidget;			// Զ�̿��������ǩ����ʾ�ؼ�
	LinkCmdWidget 		*linkCmdWidget;				// Զ�� cmd ��ǩ����ʾ�ؼ�
	InfoWidget 			*infoWidget;				// ��Ϣ�鿴ѡ�	
};

#endif	// MAINSTACKWIDGET_H_
