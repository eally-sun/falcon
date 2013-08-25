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
	ProcessInfo = 6,
	// Ӳ����Ϣ��
	hardInfo = 7,
	// ��־��Ϣ��
	LogInfo = 8,

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
	GetLogInfo = 25
};

struct GroupWithClient
{
	QString strGroup;
	QVector<QString> vectClient;
};

#endif // FALCONTYPE_H_