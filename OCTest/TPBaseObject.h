#import <Foundation/Foundation.h>

@interface TPBaseObject : NSObject
{
    WORD m_dwSafeFlag;
    WORD m_dwSafeFlagEx;

    INT64 m_dwBaseType;
    INT64 m_dwSafeType;

   	LPVOID  m_pRes;
	long    m_lRes;
}
- (void) ReleaseObject;
- (BOOL) IsObject;
- (BOOL) IsSafeType: (DWORD) dwType;
@end

@implementation TPBaseObject
- (id) init
{
    if(self = [super init]){
        m_dwSafeFlag    = rand();
		m_dwSafeFlagEx  = m_dwSafeFlag + 1;
		m_dwBaseType    = 0;
		m_dwSafeType    = 0;
		m_pRes          = NULL;
		m_lRes          = 0;
    }
    return (self);
}
- (void) dealloc
{
    m_dwSafeFlag   = 0;
    m_dwSafeFlagEx = 0;
}
- (void) ReleaseObject
{
    m_dwSafeFlag   = 0;
    m_dwSafeFlagEx = m_dwSafeFlag+2;
}
- (BOOL) IsObject
{
    return m_dwSafeFlag == 0;
}
- (BOOL) IsSafeType: (DWORD) dwType
{
    if(m_dwSafeFlagEx!=m_dwSafeFlag+1)    return FALSE;
    if((dwType & m_dwBaseType) != dwType) return FALSE;
    return TRUE;
}
@end
