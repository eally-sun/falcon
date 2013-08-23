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

class FluxWidget : public QCustomPlot
{
	Q_OBJECT

public:
	FluxWidget();
	~FluxWidget();

	// 清空流量显示数据
	void fluxDataClear();

	// 增加一个上传速率数据
	void addUpSpeedData(double upSpeed);

	// 增加一个下载速率数据
	void addDownSpeedData(double downSpeed);

private:
	// 上传速率数据容器
	QVector<double> upLineXVector;
	QVector<double> upLineYVector;

	// 下载速率数据容器
	QVector<double> downLineXVector;
	QVector<double> downLineYVector;

	int fluxPonitCount;
};

#endif	// FLUXVIEWWIDGET_H_
