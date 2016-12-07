
#import "Circle.h"
#import "TPFileOperation.h"
#import "TPBaseDataType.h"
#import "TPCacheManage.h"
#import "TPResClipCache.h"
#import "TPResCacheManage.h"
int main (int argc,const char *argv[])
{
    NSAutoreleasePool *pool =[[NSAutoreleasePool alloc] init];
    NSLog(@"%@",@"hello world");
    Circle *circle = [Circle new];
    [circle setFillColor:_blue];
    [circle draw];
    [circle release];

    TPResCache *cache = [[TPResCache alloc]
                                initWithbLockCache: FALSE
                                dwTickCount: 0];
    cache.m_dwTickCount = 1;
    NSLog(@"output %d",cache.m_dwTickCount);

    NSDate *date = [NSDate date];

    NSString *str1 = @"";
    NSLog(@"%@",str1);

   // UUID ud = [NSUUID init];
    //NSString *uuid = [[NSUUID UUID] UUIDString];
   // NSLog(@"%@",uuid);

    //file search ,lookup
    NSString *sFile = @"jpg";
    //TPFileOperation *fileOpera = [TPFileOperation new];
    //[fileOpera lookFile:sFile];

    TPBaseDataType *baseDataType = [TPBaseDataType new];
    [baseDataType Test];
    [baseDataType release];

    TPResCache *cacheM = [TPResCache new];
    [cacheM retain];
    NSLog(@"%d",[cacheM retainCount]);
    [cacheM release];
    NSLog(@"%d",[cacheM retainCount]);
    [cacheM autorelease];


    [pool release];
    return 0;
}
