#import "TPResBase.h"

@interface TPResCatalogCache : TPResBase
{
	TPResCatalogCache*              *m_pParentCatalog;
	NSMutableArray*                 *m_aChildCatalog;
	long                             m_lViewType;                    //��ʾģʽ
	BOOL                             m_bShow;                        //�Ƿ���ʾ
	long                             m_lIconSize;                    //����

	NSString*                        m_sCatalogName;                 //�ڵ�����
    NSString*                        m_sCatalogKeyWord;              //�ؼ���
	NSString*                        m_sCatalogDescription;          //����

	BOOL                             m_bLoadChild;
}
- (void) setChildCatalog: (TPResCatalogCache *) childCatalog
         atIndex:      (int) index;
- (void) addChildCatalog: (TPResCatalogCache *) childCatalog;
- (TPResCatalogCache *) childCatalogAtIndex: (int) index;
- (void) removeChildCatalogAtIndex: (int) index;
- (void) removeChildCatalogByGuid: (NSString*) guid;

@end

@implementation TPResCatalogCache
- (id) init
{
    if(self = [super init]){
        m_eResType = TP_RES_CATALOG;
    }
    return (self);
}
- (void) setChildCatalog: (TPResCatalogCache *) childCatalog
         atIndex:      (int) index
{
    [m_aChildCatalog replaceObjectAtIndex: index
                    withObject: childCatalog];
}
- (TPResCatalogCache *) childCatalogAtIndex: (int) index
{
    TPResCatalogCache *childCatalog;
    childCatalog = [m_aChildCatalog objectAtIndex: index];
    return (childCatalog);
}
- (void) addChildCatalog: (TPResCatalogCache*) childCatalog
{
    [m_aChildCatalog addObject: childCatalog];
}
- (void) removeChildCatalogAtIndex: (int) index
{
    [m_aChildCatalog removeObjectAtIndex: index];
}
- (void) removeChildCatalogByGuid: (NSString*) guid
{
    for(int i = [m_aChildCatalog count] - 1; i >= 0; i--){
        TPResCatalogCache *childCatalog = (TPResCatalogCache *)[m_aChildCatalog objectAtIndex: i];
        if(nil != childCatalog){
            NSString *sCatalogGuid = childCatalog.m_guidRes;
            if(TRUE == [sCatalogGuid isEqualToString:guid]){
                [m_aChildCatalog removeObjectAtIndex: i];
                break;
            }
        }
    }
}
@end
