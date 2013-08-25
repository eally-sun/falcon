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
	static QByteArray CreaterControlCommandXml(XmlInfoType strType, QString strCmd = "");

	// ����һ���յ���XML��������
	static XmlInfoType getXmlInfoType(QByteArray &strXml);

	// �����ͻ����б�XML��
	static void ResolvingClientListInfoXml(QByteArray &strXml, QVector<GroupWithClient> &vectClient);

	// �����ͻ����ϱ�������XML��
	static void ResolvingClientDisposeInfoXml(QByteArray &strXml);

	// ���������ͼXML��
	static void ResolvingDesktopScreenXml(QByteArray &strXml);

	// �����ͻ�������������ϢXML��
	static void ResolvingFluxInfoXml(QByteArray &strXml);

	// �����ͻ��˽�����ϢXML��
	static void ResolvingProcessInfoXml(QByteArray &strXml);

	// �����ͻ���Ӳ����ϢXML��
	static void ResolvinghardInfoXml(QByteArray &strXml);

	// �����ͻ�����־��ϢXML��
	static void ResolvingLogInfoXml(QByteArray &strXml);

};

#endif	// FALCONXML_H_
