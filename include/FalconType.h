// =====================================================================================
// 
//	   Filename:  FalconType.h
//
//	Description:  һЩ���ݶ���ͷ�ļ�
//
//		Version:  1.0
//		Created:  2013��08��24�� 16ʱ37��20��
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef FALCONTYPE_H_
#define FALCONTYPE_H_

enum XmlInfoType {
	// �޷�ʶ�������
	NoType = 0,
	// �ͻ����б���Ϣ��
	ClientListInfo = 1,
	// �ͻ����ϱ���������Ϣ��
	ClientDisposeInfo = 2,
	// �����ͼ��Ϣ��
	DesktopScreen = 3,
	// �ͻ�������������Ϣ��
	FluxInfo = 4,
	// ������Ϣ��
	ProcessInfo = 5,
	// Ӳ����Ϣ��
	hardInfo = 6,
	// ��־��Ϣ��
	LogInfo = 7,
	// CMD ��Ϣ��
	CmdInfo = 8,
	// ��������Ϣ��
	BlackList = 9,
	// �µĿͻ���������Ϣ��
	NewClientConn = 10,
	// �ͻ���������Ϣ
	ClientOffLine = 11,

	// ��ȡ�ͻ����б���Ϣ��
	GetClientListInfo = 20,
	// ��ȡ�����ͼ��Ϣ��
	GetDesktopScreen = 21,
	// ��ȡ�ͻ�������������Ϣ��
	GetFluxInfo = 22,
	// ��ȡ������Ϣ��
	GetProcessInfo = 23,
	// ��ȡӲ����Ϣ��
	GethardInfo = 24,
	// ��ȡ��־��Ϣ��
	GetLogInfo = 25,
	// ִ��CMDָ���
	RunCMDCommand = 26,
	// ��ض��޸ĺ�������
	ChangeBlackList = 27,
	// ��ɱ�ͻ��˽���
	KillProcess = 28,
	// ��ض˻�ȡ��������Ϣ��
	GetBlackList = 29,

	// �ͻ���UDP��ȡ����˰�
	FoundServerInfo = 30,
	// ����˻�Ӧ�ͻ�����Ϣ��
	ServerResponse = 31
};

// ���鼰�ͻ���IP
struct GroupWithClient
{
	QString strGroup;
	QVector<QString> vectClient;
};

// �ͻ���������Ϣ
struct ClientFluxInfo
{
	QString strClientIP;
	double uploadSpeed;
	double downloadSpeed;
};

// �ͻ��˽�����Ϣ
struct ClientProcessInfo
{
	QString process;
	QString pid;
	QString mem;
	QString path;
	QString description;
};

// ϵͳ������Ϣ
struct SettingInfo
{
	QString strServerIP;
	int serverPort;
	bool isReConn;
	bool isShowTrayInfo;
	bool isPlaySound;
	bool isSendPhoneMessage;
	QString strFetionNumber;
	QString strFetionPass;
	QString strLanguage;
	int 	upSpeedLimit;
	int 	downSpeedLimit;
	int 	allowTimes;
};

// �ͻ���IP�������ݱ���
struct ClientFluxInfoSave
{
	QString strIP;
	QVector<double> upLineX;
	QVector<double> upLineY;
	QVector<double> downLineX;
	QVector<double> downLineY;
	int upOverMaxTimes;
	int downOverMaxTimes;
};

// �ͻ�����־����
struct ClientLogInfo
{
	QString strIP;
	QVector<QString> vectLogInfo;
};

#endif // FALCONTYPE_H_