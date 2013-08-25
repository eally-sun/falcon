// =====================================================================================
// 
//	   Filename:  FalconType.h
//
//	Description:  一些数据定义头文件
//
//		Version:  1.0
//		Created:  2013年08月24日 16时37分20秒
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
	// 无法识别的类型
	NoType = 0,
	// 客户端列表信息包
	ClientListInfo = 1,
	// 客户端上报处理结果信息包
	ClientDisposeInfo = 2,
	// 桌面截图信息包
	DesktopScreen = 3,
	// 客户端网络流量信息包
	FluxInfo = 4,
	// 进程信息包
	ProcessInfo = 6,
	// 硬件信息包
	hardInfo = 7,
	// 日志信息包
	LogInfo = 8,

	// 获取客户端列表信息包
	GetClientListInfo = 20,
	// 获取桌面截图信息包
	GetDesktopScreen = 21,
	// 获取客户端网络流量信息包
	GetFluxInfo = 22,
	// 获取进程信息包
	GetProcessInfo = 23,
	// 获取硬件信息包
	GethardInfo = 24,
	// 获取日志信息包
	GetLogInfo = 25
};

struct GroupWithClient
{
	QString strGroup;
	QVector<QString> vectClient;
};

#endif // FALCONTYPE_H_