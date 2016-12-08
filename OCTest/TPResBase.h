#import "TPResObject.h"

@interface TPResBase : TPResObject
{
    DWORD			m_dwVersion;				//	�汾��
	DWORD           m_dwState;
	NSString*       m_sResName;
	NSString*       m_resIconPath;
	NSString* 		m_guidRes;		    		//	Ψһ����
    NSString* 		m_guidNode;                 //  Ŀ¼GUID
	TP_RES_TYPE     m_eResType;					//	��Դ����
	TP_NODE_TYPE	m_eNodeType;
	NSString* 		m_guidDBType;

	NSString* 		m_guidUserCreate;			//	������id
	NSString* 		m_sUserCreate;			    //	����������
	NSString* 		m_guidUserLastModify;
	NSDate*         m_tmCreate;                 //  ����ʱ��
	NSDate*         m_tmLastModify;
	NSDate*         m_tmLastRead;
	NSDate*         m_tmLastUsed;               //���һ��ʹ��ʱ��

	DWORD			m_dwResFlag;	         	//��־
	DWORD           m_dwBookMarkIndex;          //��ǩ����
	UINT            m_uResSource;               //��Դ��Դ
	BYTE            m_lColorIndex;
	BOOL            m_bNotifyUI;
	TPResObject*    m_pUsedRes;
	BOOL            m_bNeedUpdateView;
    NSString*       m_sCatalogKeyWord;              //�ؼ���
	NSString*       m_sCatalogDescription;          //����
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
