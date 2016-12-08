#import "TPResObject.h"

@interface TPResBase : TPResObject
{
    DWORD			m_dwVersion;				//	版本号
	DWORD           m_dwState;
	NSString*       m_sResName;
	NSString*       m_resIconPath;
	NSString* 		m_guidRes;		    		//	唯一索引
    NSString* 		m_guidNode;                 //  目录GUID
	TP_RES_TYPE     m_eResType;					//	资源类型
	TP_NODE_TYPE	m_eNodeType;
	NSString* 		m_guidDBType;

	NSString* 		m_guidUserCreate;			//	创建者id
	NSString* 		m_sUserCreate;			    //	创建者名字
	NSString* 		m_guidUserLastModify;
	NSDate*         m_tmCreate;                 //  创建时间
	NSDate*         m_tmLastModify;
	NSDate*         m_tmLastRead;
	NSDate*         m_tmLastUsed;               //最后一次使用时间

	DWORD			m_dwResFlag;	         	//标志
	DWORD           m_dwBookMarkIndex;          //书签索引
	UINT            m_uResSource;               //资源来源
	BYTE            m_lColorIndex;
	BOOL            m_bNotifyUI;
	TPResObject*    m_pUsedRes;
	BOOL            m_bNeedUpdateView;
    NSString*       m_sCatalogKeyWord;              //关键字
	NSString*       m_sCatalogDescription;          //描述
}
@property NSString*   m_sResName;
@property NSString*   m_resIconPath;
@property NSString*   m_guidRes;
@property NSString*   m_guidNode;
@property TP_RES_TYPE m_eResType;

- (void) print;
@end

@implementation TPResBase
@synthesize m_sResName;
@synthesize m_resIconPath;
@synthesize m_guidRes;
@synthesize m_guidNode;
@synthesize m_eResType;
- (id) init
{
    if(self = [super init]){
        m_tmCreate = [NSDate date];
    }
    return (self);
}
- (void) print
{
    NSLog(@"  resname is %@, ResType is %lf,guidres is %@", m_sResName,m_eResType,m_guidRes);//DWORD
}
@end
