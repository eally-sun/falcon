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

class FluxWidget : public QCustomPlot
{
	Q_OBJECT

public:
	FluxWidget();
	~FluxWidget();

	// ���������ʾ����
	void fluxDataClear();

	// ����һ���ϴ���������
	void addUpSpeedData(double upSpeed);

	// ����һ��������������
	void addDownSpeedData(double downSpeed);

private:
	// �ϴ�������������
	QVector<double> upLineXVector;
	QVector<double> upLineYVector;

	// ����������������
	QVector<double> downLineXVector;
	QVector<double> downLineYVector;

	int fluxPonitCount;
};

#endif	// FLUXVIEWWIDGET_H_
