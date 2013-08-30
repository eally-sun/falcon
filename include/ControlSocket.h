// =====================================================================================
// 
//       Filename:  ControlSocket.h
//
//    Description:  ���ƶ��׽���
//
//        Version:  1.0
//        Created:  2013��08��23�� 22ʱ09��08��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef CONTROLSOCKET_H_
#define CONTROLSOCKET_H_

#include <QTcpSocket>

#include "FalconType.h"

class MainWindow;

class ControlSocket : public QTcpSocket
{
	Q_OBJECT

public:
	ControlSocket(MainWindow *mainWindow);
	~ControlSocket();

	QString getIP();
	void readFullXml(QByteArray &recvData);

public slots:
	void sendControlCommand(XmlInfoType type, QString strCmd = "");
	void sendRequest();
	void getServerInfo();
	void connFailed();
	void connError();

private:
	MainWindow *mainWindow;
};

#endif	// CONTROLSOCKET_H_
