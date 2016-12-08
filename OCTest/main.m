
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
    [cache setCatalogCacheObject: catGuid
                catalogObject: resCatalog];
    [cache print];

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
