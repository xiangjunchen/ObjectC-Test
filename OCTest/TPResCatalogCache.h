#import "TPResBase.h"

@interface TPResCatalogCache : TPResBase
{
	TPResCatalogCache*              *m_pParentCatalog;
	NSMutableArray*                 *m_aChildCatalog;
	long                             m_lViewType;                    //显示模式
	BOOL                             m_bShow;                        //是否显示
	long                             m_lIconSize;                    //排列

	NSString*                        m_sCatalogName;                 //节点名称
    NSString*                        m_sCatalogKeyWord;              //关键字
	NSString*                        m_sCatalogDescription;          //描述

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
