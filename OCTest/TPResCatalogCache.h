#import "TPResBase.h"

@interface TPResCatalogCache : TPResBase
{
	TPResCatalogCache*  *m_pParentCatalog;
	NSMutableArray*     *m_aChildCatalog;
	long                 m_lViewType;                    //显示模式
	BOOL                 m_bShow;                        //是否显示
	BOOL                 m_bLoadChild;
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
        m_bShow    = TRUE;
        m_bLoadChild = FALSE;
        m_aChildCatalog = [[NSMutableArray array] init];
    }
    return (self);
}
- (void) dealloc
{
    [m_aChildCatalog dealloc];
    [super dealloc];
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
- (void) print
{
    [super print];
    for(int i = 0 ; i < [m_aChildCatalog count]; i++){
        TPResCatalogCache *childCatalog = (TPResCatalogCache *)[m_aChildCatalog objectAtIndex: i];
        NSLog(@"child name is %@, index is %d",childCatalog.m_sResName,i);
    }
}
@end
