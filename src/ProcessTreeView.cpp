// =====================================================================================
// 
//       Filename:  ProcessTreeView.cpp
//
//    Description:  进程浏览显示
//
//        Version:  1.0
//        Created:  2013年08月19日 19时14分01秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>
#include "MainWindow.h"
#include "ControlSocket.h"
#include "ProcessTreeView.h"

ProcessTreeView::ProcessTreeView(MainWindow *mainWindow)
{
	qDebug() << "ProcessTreeView 控件初始化\r\n";
	this->mainWindow = mainWindow;
	this->setSortingEnabled(true);
	this->setItemsExpandable(false);
	this->setEditTriggers(QAbstractItemView::NoEditTriggers);

	iPosition = 0;

	mainModel = new QStandardItemModel();

	mainModel->setColumnCount(5);
	mainModel->setHeaderData(0, Qt::Horizontal, tr("映像名称"));
	mainModel->setHeaderData(1, Qt::Horizontal, tr("PID"));
	mainModel->setHeaderData(2, Qt::Horizontal, tr("内存"));
	mainModel->setHeaderData(3, Qt::Horizontal, tr("映像路径"));
	mainModel->setHeaderData(4, Qt::Horizontal, tr("描述"));

	connect(this, SIGNAL(clicked(const QModelIndex &)), this, SLOT(setNowSelectProcess(const QModelIndex &)));
	this->setModel(mainModel);
}

ProcessTreeView::~ProcessTreeView()
{

}

/*================================================================
*  函 数 名： ProcessTreeView::rebuildInfo
*
*  功能描述： 清空显示的进程数据，初始化控件显示
*
*  参    数： 无
*			  
*  返 回 值： 无
*
*  作    者：刘欢 2013/8
================================================================*/
void ProcessTreeView::rebuildInfo()
{
	mainModel->clear();
	iPosition = 0;

	mainModel->setColumnCount(5);
	mainModel->setHeaderData(0, Qt::Horizontal, tr("映像名称"));
	mainModel->setHeaderData(1, Qt::Horizontal, tr("PID"));
	mainModel->setHeaderData(2, Qt::Horizontal, tr("内存"));
	mainModel->setHeaderData(3, Qt::Horizontal, tr("映像路径"));
	mainModel->setHeaderData(4, Qt::Horizontal, tr("描述"));
}

/*================================================================
*  函 数 名： ProcessTreeView::addOneProcessItem
*
*  功能描述： 列表增加一条进程信息
*
*  参    数： QString strProcess —— 进程名
*			  QString strPID —— 进程PID
*			  QString strMem —— 进程内存
*			  QString strPart —— 进程映像路径
*			  QString strDes —— 进程描述
*			  
*  返 回 值：无
*
*  作    者：刘欢 2013/8
================================================================*/
void ProcessTreeView::addOneProcessItem(QString strProcess, QString strPID, QString strMem, 
										QString strPart, QString strDes)
{
	QStandardItem *item;

	item = new QStandardItem(QString(strProcess));
	mainModel->setItem(iPosition, 0, item);
	item = new QStandardItem(QString(strPID));
	mainModel->setItem(iPosition, 1, item);
	item = new QStandardItem(QString(strMem));
	mainModel->setItem(iPosition, 2, item);
	item = new QStandardItem(QString(strPart));
	mainModel->setItem(iPosition, 3, item);
	item = new QStandardItem(QString(strDes));
	mainModel->setItem(iPosition, 4, item);

	iPosition++;
}

/*================================================================
*  函 数 名： ProcessTreeView::getStrNowProcess
*
*  功能描述： 获得当前选中的进程名
*
*  参    数： 无
*			  
*			  
*  返 回 值： 当前选中的进程名
*
*  作    者：刘欢 2013/8
================================================================*/
QString ProcessTreeView::getStrNowProcess()
{
	return strNowProcess;
}

/*================================================================
*  函 数 名： ProcessTreeView::removeNowSelectProcess
*
*  功能描述： 删除当前选中的进程名
*
*  参    数： 无
*
*  返 回 值： 当前选中的进程名
*
*  作    者：刘欢 2013/8
================================================================*/
void ProcessTreeView::removeNowSelectProcess()
{
	if (strNowProcess == "") {
		QMessageBox::warning(this, tr("结束进程错误"), tr("请先选中要结束的进程。"));
	} else {
		QString strWarning = QString("您真的要结束客户机的 <font color=\"red\">%1"
						"</font> 进程吗").arg(strNowProcess);
		int result = QMessageBox::warning(this, tr("结束进程"),
						strWarning, QMessageBox::Yes | QMessageBox::No);
		if (result == QMessageBox::No) {
			return;
		}
		mainModel->removeRow(nowSelectIndex.row());
		qDebug() << "当前删除进程：" << nowSelectIndex.row() << strNowProcess << "\r\n";
		strNowProcess = "";
		mainWindow->getConnSocket()->sendControlCommand(KillProcess, strNowPid);
		QMessageBox::information(this, tr("结束进程"), tr("结束进程命令成功发送"));
	}
}

/*================================================================
*  函 数 名： ProcessTreeView::setNowSelectProcess
*
*  功能描述： 设置当前选中的进程名到内部变量(内部接口)
*
*  参    数： 选中的索引
*			  
*  返 回 值：无
*
*  作    者：刘欢 2013/8
================================================================*/
void ProcessTreeView::setNowSelectProcess(const QModelIndex &index)
{
	nowSelectIndex = index;
	QAbstractItemModel *model = (QAbstractItemModel *)index.model();
	QModelIndex nowSelectProcessName = model->index(index.row(), 0);
	strNowProcess = nowSelectProcessName.data().toString();

	QModelIndex nowSelectProcessPID = model->index(index.row(), 1);
	strNowPid = nowSelectProcessPID.data().toString(); 
	
	qDebug() << "当前选择进程：" << index.row() << strNowProcess 
					<<"PID:" << strNowPid << "\r\n";
}