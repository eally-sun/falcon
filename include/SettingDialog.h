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
};

#endif	// SETTINGDIALOG_H_
