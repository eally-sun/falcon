// =====================================================================================
// 
//       Filename:  SettingDialog.h
//
//    Description:  ���öԻ���
//
//        Version:  1.0
//        Created:  2013��08��31�� 22ʱ03��08��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef SETTINGDIALOG_H_
#define SETTINGDIALOG_H_

#include <QDialog>
#include <QVector>
#include <QString>

#include "ui_SettingDialog.h"
#include "FalconType.h"

class SettingDialog : public QDialog, Ui::SettingDialog
{
	Q_OBJECT

public:
	SettingDialog();
	~SettingDialog();

	// ���öԻ���ѡ����Ϣ
	void setDialogSetting(SettingInfo &setInfo);

	// ��ȡ�Ի���ѡ����Ϣ
	void getDialogSetting(SettingInfo &setInfo);

	// ���ú������б�
	void setBlackList(QVector<QString> &vectBlackList);

	// ��ȡ�������б�
	void getBlackList(QVector<QString> &vectBlackList);

protected:
	bool eventFilter(QObject *target, QEvent *event);

public slots:
	void addProcessToList();

	void resetListView();

	void deleteProcess();

private:
	QVector<QString> oldBlackList;
};

#endif	// SETTINGDIALOG_H_
