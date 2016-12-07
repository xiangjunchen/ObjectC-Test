#import "TPBaseObject.h"
#import "TPResDataTypeDefine.h"

@class TPResCache;
@class TPResCatalog;

@interface TPResObject : TPBaseObject
{
	TPResObject         *m_pPreObject;
	TPResObject         *m_pNextObject;

	TPResCache          *m_pResCache;   //Cache数据
	TPResCatalog        *m_pCatalog;    //父目录指针

	NSString*           *m_guidUser;
	BOOL                *m_uUseFlag;

	TP_GRADE_TYPE         m_eGradeType;
	BOOL                  m_bModify;     //是否修改过

	UINT                  m_uBaseState;
	INT64                 m_iRefFlag;
	BYTE                  m_bUpdateView;
}
- (void) Reset;
- (void) ReUse;
- (void) ClearCacheGrade;
@end

@implementation TPResObject
- (void) init
{
    if(self = [super init]){
        [self Reset];
    }
    return (self);
}
- (void) dealloc
{

}
- (void) Reset;
{
    m_pPreObject          = NULL;
    m_pNextObject         = NULL;

    m_pResCache           = NULL;   //Cache数据
    m_pCatalog            = NULL;    //父目录指针

    m_guidUser            = @"";
    m_uUseFlag            = NULL;
    m_eGradeType          = TP_GRADE_UNKNOW;
    m_bModify             = FALSE;
    m_uBaseState          = 0;
    m_iRefFlag            = 0;
    m_bUpdateView         = FALSE;
}
- (void) ReUse
{
    if(m_uBaseState & (TP_RESBASESTATE_DELETE|TP_RESBASESTATE_TODELOBJ))
    {
        m_eGradeType   = TP_GRADE_UNKNOW;
        m_uBaseState  &= ~(TP_RESBASESTATE_DELETE|TP_RESBASESTATE_TODELOBJ);
    }
    m_uBaseState &= ~TP_RESBASESTATE_NOSAVE;
}
- (void) ClearCacheGrade
{
    m_eGradeType &= TP_GRADE_USERINFO;
}
@end
