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
	ProcessInfo = 5,
	// 硬件信息包
	hardInfo = 6,
	// 日志信息包
	LogInfo = 7,
	// CMD 信息包
	CmdInfo = 8,
	// 黑名单信息包
	BlackList = 9,
	// 新的客户端连接信息包
	NewClientConn = 10,
	// 客户端离线信息
	ClientOffLine = 11,

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
	GetLogInfo = 25,
	// 执行CMD指令包
	RunCMDCommand = 26,
	// 监控端修改黑名单包
	ChangeBlackList = 27,
	// 查杀客户端进程
	KillProcess = 28,
	// 监控端获取黑名单信息包
	GetBlackList = 29,

	// 客户端UDP获取服务端包
	FoundServerInfo = 30,
	// 服务端回应客户端信息包
	ServerResponse = 31
};

// 分组及客户端IP
struct GroupWithClient
{
	QString strGroup;
	QVector<QString> vectClient;
};

// 客户端流量信息
struct ClientFluxInfo
{
	QString strClientIP;
	double uploadSpeed;
	double downloadSpeed;
};

// 客户端进程信息
struct ClientProcessInfo
{
	QString process;
	QString pid;
	QString mem;
	QString path;
	QString description;
};

// 系统设置信息
struct SettingInfo
{
	QString strServerIP;
	int serverPort;
	bool isReConn;
	bool isShowTrayInfo;
	bool isPlaySound;
	bool isSendPhoneMessage;
	QString strFetionNumber;
	QString strFetionPass;
	QString strLanguage;
	int 	upSpeedLimit;
	int 	downSpeedLimit;
	int 	allowTimes;
};

// 客户端IP流量数据保存
struct ClientFluxInfoSave
{
	QString strIP;
	QVector<double> upLineX;
	QVector<double> upLineY;
	QVector<double> downLineX;
	QVector<double> downLineY;
	int upOverMaxTimes;
	int downOverMaxTimes;
};

// 客户端日志数据
struct ClientLogInfo
{
	QString strIP;
	QVector<QString> vectLogInfo;
};

#endif // FALCONTYPE_H_