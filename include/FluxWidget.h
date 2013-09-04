// =====================================================================================
// 
//       Filename:  FluxWidget.h
//
//    Description:  ������ʾ
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

	// ���������ʾ����
	void fluxDataClear();

	// ָ��IP��������Ӻ���
	void addOnceSpeedByIP(QString srtIP, double upSpeed, double downSpeed);

	// �޸���ʾΪָ��IP����������
	void showFluxInfoByIP(QString strIP);

private:
	QVector<ClientFluxInfoSave> vectAllClientFluxInfo;
	QString strNowSelectIP;
	int fluxPonitCount;
	MainWindow *mainWindow;
};

#endif	// FLUXVIEWWIDGET_H_
