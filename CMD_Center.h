#ifndef CMD_CENTER_HEAD_FILE
#define CMD_CENTER_HEAD_FILE

//
//游戏列表命令码
//

#define MDM_CS_SERVER_LIST				1								//列表信息

#define SUB_CS_GET_SERVER_LIST			1								//请求列表

#define SUB_CS_LIST_INFO				100								//列表信息
#define SUB_CS_LIST_TYPE				101								//类型列表
#define SUB_CS_LIST_KIND				102								//种类列表
#define SUB_CS_LIST_STATION				103								//站点列表
#define SUB_CS_LIST_SERVER				104								//房间列表
#define SUB_CS_LIST_FINISH				105								//列表完成

//列表信息
struct CMD_CS_ListInfo
{
	DWORD								dwTypeCount;					//类型数目
	DWORD								dwKindCount;					//种类数目
	DWORD								dwServerCount;					//房间数目
	DWORD								dwStationCount;					//站点数目
};

//
//房间管理命令码
//

#define MDM_CS_SERVER_MANAGER			2								//房间管理

#define SUB_CS_REG_GAME_SERVER			1								//注册房间
#define SUB_CS_UNREG_GAME_SERVER		2								//注销房间
#define SUB_CS_SERVER_ONLINE_COUNT		3								//房间人数
#define SUB_CS_SERVER_CHAMPION			4								//冠军数据
#define SUB_CS_SERVER_OL_LEVEL_COUNT	5								//房间人数，包括各级别详细人数

//注册房间
struct CMD_CS_RegGameServer
{	
	tagGameServer						GameServer;						//房间信息
};

//注销房间
struct CMD_CS_UnRegGameServer
{	
	WORD								wKindID;						//名称号码
	WORD								wServerID;						//房间号码
};

//房间人数
struct CMD_CS_ServerOnLineCount
{
	WORD								wKindID;						//名称号码
	WORD								wServerID;						//房间号码
	DWORD								dwOnLineCount;					//在线人数
};

//房间人数
struct CMD_CS_ServerOLLevelCount
{
	WORD								wKindID;						//名称号码
	WORD								wServerID;						//房间号码
	DWORD								dwOnLineCount;					//在线人数
	WORD								wZiJinCount;					//紫金级人数
	WORD								wHuangJinCount;					//黄金级人数
	WORD								wBaiYinCount;					//白银级人数
	WORD								wQingTongCount;					//青铜级人数
	WORD								wOtherCount;					//其他级别人数（破产，灰土，红木，黑铁。积分少于600000的玩家）
};

//
//信息服务器命令码
//

#define MDM_CS_SERVER_INFO				3								//信息服务器
#define SUB_CS_GET_CHAMPION_INFO		1								//冠军数据
#define SUB_CS_CLEAR_CHAMPION			2								//冠军数据


#endif


//-----------------------------------------------
//					the end
//-----------------------------------------------
