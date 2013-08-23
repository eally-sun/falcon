// =====================================================================================
// 
//       Filename:  ProcessTreeView.h
//
//    Description:  ���������ʾ
//
//        Version:  1.0
//        Created:  2013��08��19�� 19ʱ45��01��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef PROCESSTREEVIEW_H_
#define PROCESSTREEVIEW_H_

#include <QTreeView>
#include <QString>

class QStandardItemModel;
class QModelIndex;

class ProcessTreeView : public QTreeView
{
	Q_OBJECT

public:
	ProcessTreeView();
	~ProcessTreeView();

	void rebuildInfo();

	void addOneProcessItem(QString strProcess, QString strPID, QString strMem, 
								QString strPart, QString strDes);

	QString getStrNowProcess();

public slots:
		void setNowSelectProcess(const QModelIndex &index);
		void removeNowSelectProcess();

private:
	QStandardItemModel *mainModel;
	QModelIndex nowSelectIndex;
	QString strNowProcess;
	int iPosition;
};

#endif	// PROCESSTREEVIEW_H_
