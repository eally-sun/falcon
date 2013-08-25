// =====================================================================================
// 
//	   Filename:  Debug.h
//
//	Description:  ��������ͷ�ļ�
//
//		Version:  1.0
//		Created:  2013��08��16�� 16ʱ37��20��
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef DEBUG_H_
#define DEBUG_H_

#include <QDebug>
#include <QFile>
#include <QTextStream>

#define _TIME_ qPrintable(QTime::currentTime().toString("hh:mm:ss:zzz"))

void customMessageHandler(QtMsgType type, const char *msg)
{
	QString qstrText;

	switch (type) {
		case QtDebugMsg:
			qstrText = QString("%1 Debug Info: %2 ").arg(_TIME_, msg);
			break;
		case QtWarningMsg:
			qstrText = QString("%1 Warning Info: %2").arg(_TIME_, msg);
			break;
		case QtCriticalMsg:
			qstrText = QString("%1 Critical Info: %2").arg(_TIME_, msg);
			break;
		case QtFatalMsg:
			qstrText = QString("%1 Fatal Info: %2").arg(_TIME_, msg);
			exit(0);
	}

	QFile outFile("debug.log");

	outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	QTextStream logStream(&outFile);

	logStream << qstrText;
}

#endif // DEBUG_H_