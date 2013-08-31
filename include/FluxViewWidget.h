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
#include <QString>

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

	// 功能描述： 更新一次标签流量显示数据
	void updateLabelFluxData(double upSpeed, double downSpeed);

	// 指定IP的数据添加函数
	void addOnceSpeedByIP(QString strIP, double upSpeed, double downSpeed);

	// 修改显示为指定IP的流量数据
	void showFluxInfoByIP(QString strIP);

	void resetFluxView();

private:
	QVBoxLayout *vBoxLayout;
	QHBoxLayout *hBoxLayout;
	QLabel *upLabel;
	QLabel *downLabel;
	FluxWidget *fluxView;
	QString nowSelectIP;
};

#endif	// FLUXVIEWWIDGET_H_
