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
#include "ui_SettingDialog.h"

class SettingDialog : public QDialog, Ui::SettingDialog
{
	Q_OBJECT

public:
	SettingDialog();
	~SettingDialog();
};

#endif	// SETTINGDIALOG_H_
