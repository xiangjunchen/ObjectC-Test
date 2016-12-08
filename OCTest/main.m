
#import "Circle.h"
#import "TPFileOperation.h"
#import "TPBaseDataType.h"
#import "TPCacheManage.h"
#import "TPResClipCache.h"
#import "TPResCatalogCache.h"
#import "TPResCacheManage.h"
int main (int argc,const char *argv[])
{
    NSAutoreleasePool *pool =[[NSAutoreleasePool alloc] init];
    NSLog(@"%@",@"hello world");
    NSDate *date = [NSDate date];
    NSString *str1 = @"";
    NSLog(@"%@",date);

    TPResCache *cache = [[TPResCache alloc]
                                initWithbUpdate: FALSE
                                dwTickUpdate: 0
                                sUpdateUrl: @"www.sobey.com"];
    cache.m_dwTickUpdate = 1;
    NSLog(@"TickUpdate %d",cache.m_dwTickUpdate);
    NSLog(@"UpdateUrl %@",cache.m_sUpdateUrl);
    TPResCatalogCache *resCatalog = [[TPResCatalogCache alloc] init];

    NSString* catGuid = @"1888888dddd8";
    NSString* catGuid1 = @"999999d9";
    resCatalog.m_guidNode = catGuid;
    resCatalog.m_guidRes = catGuid1;
    resCatalog.m_eResType = 222;
    resCatalog.m_sResName = @"A";
    TPResCatalogCache *childCatalog1 = [[TPResCatalogCache alloc] init];
    childCatalog1.m_sResName = @"a1";
    childCatalog1.m_guidRes = @"666666";
    [resCatalog addChildCatalog: childCatalog1];
    [cache setCatalogCacheObject: childCatalog1.m_guidRes
                catalogObject: childCatalog1];

    TPResCatalogCache *childCatalog2 = [[TPResCatalogCache alloc] init];
    childCatalog2.m_sResName = @"a2";
    childCatalog2.m_guidRes = @"88888888";
    [resCatalog addChildCatalog: childCatalog2];
    [cache setCatalogCacheObject: childCatalog2.m_guidRes
            catalogObject: childCatalog2];

    [cache setCatalogCacheObject: catGuid
                catalogObject: resCatalog];

    TPResClipCache *clip1 = [[TPResClipCache alloc] init];
    clip1.m_sResName = @"clip1_a2";
    clip1.m_guidNode = childCatalog2.m_guidRes;
    clip1.m_guidRes  = @"000000";
    [cache setClipCacheObject: clip1.m_guidRes
                clipObject: clip1];

    [cache print];
    //[cache release];

    //file search ,lookup
    //NSString *sFile = @"jpg";
    //TPFileOperation *fileOpera = [TPFileOperation new];
    //[fileOpera lookFile:sFile];

    //TPBaseDataType *baseDataType = [TPBaseDataType new];
    //[baseDataType Test];
    //[baseDataType release];

    //TPResCache *cacheM = [TPResCache new];
    //[cacheM retain];
    //NSLog(@"%d",[cacheM retainCount]);
    //[cacheM release];
    //NSLog(@"%d",[cacheM retainCount]);
    //[cacheM autorelease];
    [pool release];
    return 0;
}
