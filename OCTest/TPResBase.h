
#import "TPResDataTypeDefine.h"
@class TPResObject;
@interface TPResBase : NSObject
{
    DWORD			m_dwVersion;				//	版本号
	DWORD           m_dwState;
	NSString* 		m_guidRes;		    		//	唯一索引
	NSString*       m_guidLink;		    		//	唯一索引
	NSString* 		m_guidType;		    		//	唯一索引
	NSString* 		m_guidDBType;
	TP_RES_TYPE     m_eResType;					//	资源类型

	NSString* 		m_guidUserCreate;			//	创建者
	NSDate*         m_tmCreate;                 //  创建时间

	NSString* 		m_guidProject;   		    //	项目

	NSDate*         m_tmLastModify;
	NSString* 		m_guidUserLastModify;

	NSDate*         m_tmLastRead;
	TP_VIDEO_STANDARD  m_eVideoStandard;            //视频制式
	DWORD			m_dwResFlag;	         		//标志
	DWORD			m_dwOperateFlag;	       		//操作标志
	DWORD           m_dwBookMarkIndex;          //  书签索引

	NSString* 		m_guidNode;              //  目录GUID
	TP_NODE_TYPE	m_eNodeType;

	NSString* 		m_guidDevice;                //光盘设备GUID
	long            m_lDeviceFileIndex;          //光盘设备文件索引
	UINT            m_uResSource;                //资源来源
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

	NSDate*         m_tmLastUsed;  //最后一次使用时间

	TPResObject         *m_pUsedRes;


	long                  m_lLockRead;                                  //缩定计数
	long                  m_lLockWrite;
	long                  m_lLockView;
	long				  m_lLockTL;									// 被时间线锁定的素材
	long				  m_lLockSV;									// 被SV锁定的素材
	long                  m_lLockNoReleaseItem;
	BOOL                  m_bNeedUpdateView;

	long                  m_lOpenCount;
}
@end

@implementation TPResBase
@end
