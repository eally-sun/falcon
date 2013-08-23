// =====================================================================================
// 
//       Filename:  InfoWidget.cpp
//
//    Description:  信息查看选项卡
//
//        Version:  1.0
//        Created:  2013年08月23日 11时08分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "InfoWidget.h"

InfoWidget::InfoWidget()
{
	setStyleSheet("QGroupBox {border-width:1px; border-style:solid; border-color:gray;}");

	infoView = new QTextBrowser();
	hardInfoButton = new QPushButton(tr("查看硬件信息"));
	
	logInfoButton = new QPushButton(tr("查看客户端历史处理日志"));

	vBoxLayout = new QVBoxLayout();
	hBoxLayout = new QHBoxLayout();
	
	hBoxLayout->addStretch();
	hBoxLayout->addWidget(hardInfoButton);
	hBoxLayout->addStretch();
	hBoxLayout->addWidget(logInfoButton);
	hBoxLayout->addStretch();
	
	vBoxLayout->addWidget(infoView);
	vBoxLayout->addLayout(hBoxLayout);
	
	setLayout(vBoxLayout);
	
	resetView();
}

InfoWidget::~InfoWidget()
{

}

/*================================================================
*  函 数 名： InfoWidget::resetView
*
*  功能描述： 重置显示界面数据
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void InfoWidget::resetView()
{
	infoView->clear();
	infoView->setCurrentFont(QFont("新宋体", 12));
}