// =====================================================================================
// 
//       Filename:  MainWindow.h
//
//    Description:  �����ڵ�������ͷ�ļ�
//
//        Version:  1.0
//        Created:  2013��08��18�� 21ʱ11��58��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>
#include <QSystemTrayIcon>

#include "FalconType.h"

class QLabel;
class QSplitter;
class QMenu;
class QToolBar;
class QAction;
class QSpinBox;
class QLineEdit;
class QPushButton;

class QSplitter;
class QHBoxLayout;
class QVBoxLayout;

class LinkTreeWidget;
class MainStackWidget;
class ControlSocket;
class QSystemTrayIcon;

class QHttp;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	QString strNowSelectIP; 	// ��ǰѡ�� IP

	void sleep(unsigned int msec);

	MainStackWidget *getStackWidget();
	ControlSocket *getConnSocket();

	void sendPhoneMessage(QString strMsg);
	void setUIEnable(bool isEnabled);
	void showTrayInfo(QString strInfo, unsigned int msec = 2000);
	void setStatusLabel(QString strLabel);
	void setClientList(QVector<GroupWithClient> &vectClient);
	void setClientScreenInfo();
	void setClientFluxInfo(ClientFluxInfo &clientFluxInfo);
	void setClientProcessInfo(QVector<ClientProcessInfo> &vectProcessInfo);
	void setClientCmdInfo(QString &strCmdInfo);
	void setClientHardInfo(QString &strHardInfo);
	void setClientLogInfo(QString &strLogInfo);

	void readSettings();			// ��ȡ�����ļ�
	void writeSettings();			// д�������ļ�

protected:
	void closeEvent(QCloseEvent *event);

private slots:
	void connectInfo();
	void screenShot();
	void flux();
	void process();
	void cmd();
	void info();
	void about();
	void closeWindow();
	void softSetting();
	void connectServerBtn();
	void showWindow(QSystemTrayIcon::ActivationReason type);

private:
	void createMainWeiget();		// ����������
	void createActions();			// ��������
	void createMenus();				// �������˵�
	void createToolBars();			// ����������
	void createStatusBar();			// ����״̬��
	void createSystemTrayIcon();	// ����ϵͳ����ͼ��
	void tryConnServer();			// �������ӷ�����

	bool isTrayExit; 				// �Ƿ��������������˳�

	QLabel *statusLabel;			// ״̬������

	QLabel *currLinkLabel;			// �����浱ǰ���ӱ�ǩ
	QLabel *currPortLabel;			// ���������Ӷ˿ڱ�ǩ

	QLineEdit *currLinkIPEdit;		// �����浱ǰ���������
	QSpinBox  *currPortSpin;		// ���������Ӷ˿������

	QPushButton *linkButton;		// �ֶ����Ӱ�ť

	LinkTreeWidget *linkTreeWidget; 	// �Զ����������б�
	MainStackWidget *mainStackWidget;	// ��ǩ����

	QHBoxLayout *topLayout;			// �����ָ��
	QSplitter *bottomSplitter;		// �ײ��зִ���
	QVBoxLayout *mainLayout;		// ���ָ��

	QWidget *mainWigget;			// ��������ʾ

	QMenu *fileMenu;				// ���˵�-�ļ��Ӳ˵�ָ��
	QMenu *setsMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *helpMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *trayMenu; 				// �������˵� 

	QToolBar *mainToolBar;			// ������ع�����ָ��

	QAction *auto_connAction;		// �Զ�����

	QAction *connectAction; 		// ��������
	QAction *screenShotAction;		// ��Ļ����
	QAction *fluxAction; 			// �������
	QAction *processAction; 		// ���̹���
	QAction *cmdAction; 			// Զ������
	QAction *infoAction; 			// ��Ϣ�鿴

	QAction *settingAction;			// �������
	QAction *minAction;				// ��С������
	QAction *exitAction;			// �˳�����
	QAction *aboutAction;			// �ر��ڳ���

	QSystemTrayIcon *systemTrayIcon; // ϵͳ����ͼ��

	ControlSocket *clientSocket;	// ������ͨ���׽���
	QHttp 		  *httpSocket;

	SettingInfo settingInfo; 		// �������
};

#endif // MAINWINDOW_H_