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

class ControlSocket : public QTcpSocket
{
public:
	ControlSocket();
	~ControlSocket();

private:
};

#endif	// CONTROLSOCKET_H_
