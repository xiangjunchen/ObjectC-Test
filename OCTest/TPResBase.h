#import "TPResObject.h"

@interface TPResBase : TPResObject
{
    DWORD			m_dwVersion;				//	�汾��
	DWORD           m_dwState;
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
	TPResObject    *m_pUsedRes;
	BOOL            m_bNeedUpdateView;
}
@property NSString*   m_guidRes;
@property NSString*   m_guidNode;
@property TP_RES_TYPE m_eResType;

- (void) print;
@end

@implementation TPResBase
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
    NSLog(@"  guidRes is %@, ResType is %lf,guidnode is %@", m_guidRes,m_eResType,m_guidNode);//DWORD
}
@end
