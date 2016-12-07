
#import "TPResDataTypeDefine.h"
@class TPResObject;
@interface TPResBase : NSObject
{
    DWORD			m_dwVersion;				//	�汾��
	DWORD           m_dwState;
	NSString* 		m_guidRes;		    		//	Ψһ����
	NSString*       m_guidLink;		    		//	Ψһ����
	NSString* 		m_guidType;		    		//	Ψһ����
	NSString* 		m_guidDBType;
	TP_RES_TYPE     m_eResType;					//	��Դ����

	NSString* 		m_guidUserCreate;			//	������
	NSDate*         m_tmCreate;                 //  ����ʱ��

	NSString* 		m_guidProject;   		    //	��Ŀ

	NSDate*         m_tmLastModify;
	NSString* 		m_guidUserLastModify;

	NSDate*         m_tmLastRead;
	TP_VIDEO_STANDARD  m_eVideoStandard;            //��Ƶ��ʽ
	DWORD			m_dwResFlag;	         		//��־
	DWORD			m_dwOperateFlag;	       		//������־
	DWORD           m_dwBookMarkIndex;          //  ��ǩ����

	NSString* 		m_guidNode;              //  Ŀ¼GUID
	TP_NODE_TYPE	m_eNodeType;

	NSString* 		m_guidDevice;                //�����豸GUID
	long            m_lDeviceFileIndex;          //�����豸�ļ�����
	UINT            m_uResSource;                //��Դ��Դ
	NSSize          m_szPos;
	long            m_lIconIndex;
	long            m_lRepoetIndex;
	BOOL            m_bDropFrame;

	DWORD           m_dwLockRead;
	DWORD           m_dwLockWrite;
	DWORD           m_dwLockDelete;

	BYTE            m_lColorIndex;
	BOOL            m_bEmpty;
	BOOL            m_bNotifyUI;
 	BYTE            m_bIndexEdit;
	BYTE            m_bGetNode;
	//static   int    m_iBaseCount;

	TPResVAType    *m_pResVAType;

	NSDate*         m_tmLastUsed;  //���һ��ʹ��ʱ��

	TPResObject         *m_pUsedRes;


	long                  m_lLockRead;                                  //��������
	long                  m_lLockWrite;
	long                  m_lLockView;
	long				  m_lLockTL;									// ��ʱ�����������ز�
	long				  m_lLockSV;									// ��SV�������ز�
	long                  m_lLockNoReleaseItem;
	BOOL                  m_bNeedUpdateView;

	long                  m_lOpenCount;
}
@end

@implementation TPResBase
@end
