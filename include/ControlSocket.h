// =====================================================================================
// 
//       Filename:  ControlSocket.h
//
//    Description:  控制端套接字
//
//        Version:  1.0
//        Created:  2013年08月23日 22时09分08秒
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
#include <QVector>
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
	void addClientLog(QString strIP, QString strLogInfo);
	void getLogInfo(QString strIP, QString &strLogInfo);

public slots:
	void sendControlCommand(XmlInfoType type, QString strCmd = "");
	void sendRequest();
	void getServerInfo();
	void connFailed();
	void connError();

private:
	MainWindow *mainWindow;
	QVector<ClientLogInfo> vectClientInfo;
};

#endif	// CONTROLSOCKET_H_
