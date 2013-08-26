// =====================================================================================
// 
//       Filename:  FluxViewWidget.h
//
//    Description:  流量列表显示
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

#ifndef FLUXVIEWWIDGET_H_
#define FLUXVIEWWIDGET_H_

#include <QGroupBox>

class QHBoxLayout;
class QVBoxLayout;
class QLabel;
class FluxWidget;

class FluxViewWidget : public QGroupBox
{
	Q_OBJECT

public:
	FluxViewWidget();
	~FluxViewWidget();

public slots:
	void updateFluxData(double, double);
	void resetFluxView();

private:
	QVBoxLayout *vBoxLayout;
	QHBoxLayout *hBoxLayout;
	QLabel *upLabel;
	QLabel *downLabel;
	FluxWidget *fluxView;
};

#endif	// FLUXVIEWWIDGET_H_
