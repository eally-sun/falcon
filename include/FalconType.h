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

	// �ͻ���UDP��ȡ����˰�
	FoundServerInfo = 30,
	// ����˻�Ӧ�ͻ�����Ϣ��
	ServerResponse = 31
};

struct GroupWithClient
{
	QString strGroup;
	QVector<QString> vectClient;
};

struct ClientFluxInfo
{
	QString strClientIP;
	double uploadSpeed;
	double downloadSpeed;
};

struct ClientProcessInfo
{
	QString process;
	QString pid;
	QString mem;
	QString path;
	QString description;
};

#endif // FALCONTYPE_H_