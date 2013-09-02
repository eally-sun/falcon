// =====================================================================================
// 
//       Filename:  FalconXml.h
//
//    Description:  XML ����
//
//        Version:  1.0
//        Created:  2013��08��23�� 21ʱ09��08��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef FALCONXML_H_
#define FALCONXML_H_

#include "FalconType.h"

class FalconXml
{
public:

	// �������ָ��XML��
	static QByteArray CreaterControlCommandXml(XmlInfoType strType, QString strIP, QString strCmd = "");

	// ����Ѱ�ҷ���˵�UDP����XML��
	static QByteArray CreateUdpFoundServerXml();

	// ����һ���յ���XML��������
	static XmlInfoType getXmlInfoType(QByteArray &strXml);

	// ���һ��XML���Ƿ��������
	static bool checkXmlData(QByteArray &strData);

	// �����ͻ����б�XML��
	static void ResolvingClientListInfoXml(QByteArray &strXml, QVector<GroupWithClient> &vectClient);

	// �����ͻ����ϱ�������XML��
	static void ResolvingClientDisposeInfoXml(QByteArray &strXml, QString &showInfo, QString &strIP);

	// TODO
	// ���������ͼXML��
	static void ResolvingDesktopScreenXml(QByteArray &strXml);

	// �����ͻ�������������ϢXML��
	static void ResolvingFluxInfoXml(QByteArray &strXml, ClientFluxInfo &clientFluxInfo);

	// �����ͻ��˽�����ϢXML��
	static void ResolvingProcessInfoXml(QByteArray &strXml, QVector<ClientProcessInfo> & vectProcessInfo);

	// �����ͻ���cmd������ϢXML��
	static void ResolvingCmdInfoXml(QByteArray &strXml, QString &strCmd);

	// �����ͻ���Ӳ����ϢXML��
	static void ResolvingHardInfoXml(QByteArray &strXml, QString &strHard);

	// �����ͻ�����־��ϢXML��
	static void ResolvingLogInfoXml(QByteArray &strXml, QString &strLog);

	// ��������˺�����XML��
	static void ResolvingBlackListInfoXml(QByteArray &strXml, QVector<QString> &vectBlackList);
	
	// �������˺�������
	static QByteArray CreateBlackListInfoXml(QVector<QString> &vectBlackList);
};

#endif	// FALCONXML_H_
