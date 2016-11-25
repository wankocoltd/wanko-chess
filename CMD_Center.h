#ifndef CMD_CENTER_HEAD_FILE
#define CMD_CENTER_HEAD_FILE

//
//��Ϸ�б�������
//

#define MDM_CS_SERVER_LIST				1								//�б���Ϣ

#define SUB_CS_GET_SERVER_LIST			1								//�����б�

#define SUB_CS_LIST_INFO				100								//�б���Ϣ
#define SUB_CS_LIST_TYPE				101								//�����б�
#define SUB_CS_LIST_KIND				102								//�����б�
#define SUB_CS_LIST_STATION				103								//վ���б�
#define SUB_CS_LIST_SERVER				104								//�����б�
#define SUB_CS_LIST_FINISH				105								//�б����

//�б���Ϣ
struct CMD_CS_ListInfo
{
	DWORD								dwTypeCount;					//������Ŀ
	DWORD								dwKindCount;					//������Ŀ
	DWORD								dwServerCount;					//������Ŀ
	DWORD								dwStationCount;					//վ����Ŀ
};

//
//�������������
//

#define MDM_CS_SERVER_MANAGER			2								//�������

#define SUB_CS_REG_GAME_SERVER			1								//ע�᷿��
#define SUB_CS_UNREG_GAME_SERVER		2								//ע������
#define SUB_CS_SERVER_ONLINE_COUNT		3								//��������
#define SUB_CS_SERVER_CHAMPION			4								//�ھ�����
#define SUB_CS_SERVER_OL_LEVEL_COUNT	5								//����������������������ϸ����

//ע�᷿��
struct CMD_CS_RegGameServer
{	
	tagGameServer						GameServer;						//������Ϣ
};

//ע������
struct CMD_CS_UnRegGameServer
{	
	WORD								wKindID;						//���ƺ���
	WORD								wServerID;						//�������
};

//��������
struct CMD_CS_ServerOnLineCount
{
	WORD								wKindID;						//���ƺ���
	WORD								wServerID;						//�������
	DWORD								dwOnLineCount;					//��������
};

//��������
struct CMD_CS_ServerOLLevelCount
{
	WORD								wKindID;						//���ƺ���
	WORD								wServerID;						//�������
	DWORD								dwOnLineCount;					//��������
	WORD								wZiJinCount;					//�Ͻ�����
	WORD								wHuangJinCount;					//�ƽ�����
	WORD								wBaiYinCount;					//����������
	WORD								wQingTongCount;					//��ͭ������
	WORD								wOtherCount;					//���������������Ʋ�����������ľ����������������600000����ң�
};

//
//��Ϣ������������
//

#define MDM_CS_SERVER_INFO				3								//��Ϣ������
#define SUB_CS_GET_CHAMPION_INFO		1								//�ھ�����
#define SUB_CS_CLEAR_CHAMPION			2								//�ھ�����


#endif


//-----------------------------------------------
//					the end
//-----------------------------------------------
