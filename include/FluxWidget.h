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

#include "qcustomplot.h"

class FluxWidget : public QCustomPlot
{
	Q_OBJECT

public:
	FluxWidget();
	~FluxWidget();
};

#endif	// FLUXVIEWWIDGET_H_
