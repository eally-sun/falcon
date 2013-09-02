// =====================================================================================
// 
//       Filename:  SettingDialog.h
//
//    Description:  设置对话框
//
//        Version:  1.0
//        Created:  2013年08月31日 22时03分08秒
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

	// 设置对话框选项信息
	void setDialogSetting(SettingInfo &setInfo);

	// 获取对话框选项信息
	void getDialogSetting(SettingInfo &setInfo);

	// 设置黑名单列表
	void setBlackList(QVector<QString> &vectBlackList);

	// 获取黑名单列表
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
