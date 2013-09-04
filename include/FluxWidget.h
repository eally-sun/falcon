// =====================================================================================
// 
//       Filename:  FluxWidget.h
//
//    Description:  流量显示
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

#ifndef FLUXWIDGET_H_
#define FLUXWIDGET_H_

#include <QVector>
#include "qcustomplot.h"
#include "FalconType.h"

class MainWindow;

class FluxWidget : public QCustomPlot
{
	Q_OBJECT

public:
	FluxWidget(MainWindow *mainWindow);
	~FluxWidget();

	// 清空流量显示数据
	void fluxDataClear();

	// 指定IP的数据添加函数
	void addOnceSpeedByIP(QString srtIP, double upSpeed, double downSpeed);

	// 修改显示为指定IP的流量数据
	void showFluxInfoByIP(QString strIP);

private:
	QVector<ClientFluxInfoSave> vectAllClientFluxInfo;
	QString strNowSelectIP;
	int fluxPonitCount;
	MainWindow *mainWindow;
};

#endif	// FLUXVIEWWIDGET_H_
