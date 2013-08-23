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

class ControlSocket : public QTcpSocket
{
public:
	ControlSocket();
	~ControlSocket();

private:
};

#endif	// CONTROLSOCKET_H_
