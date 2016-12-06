#import <Foundation/Foundation.h>

@class TPResClipCache;

@interface TPResCacheManage : NSObject
{
    NSMutableArray *resClipCaches;
}
- (void) setClipCache: (TPResClipCache *) clipCache
         atIndex:      (int) index;
- (void) addClipCache: (TPResClipCache *) clipCache;
- (TPResClipCache *) clipCacheAtIndex: (int) index;
- (void) print;
@end

@implementation TPResCacheManage
- (id) init
{
    if(self = [super init]){
        resClipCaches = [[NSMutableArray alloc] init];
        int i ;
        for(i = 0 ; i < 4 ; i++){
            [resClipCaches addObject: [NSNull null]];
        }
    }
    return (self);
}
- (void) setClipCache: (TPResClipCache *) clipCache
         atIndex:      (int) index
{
    [resClipCaches replaceObjectAtIndex: index
                    withObject: clipCache];
}
- (TPResClipCache *) clipCacheAtIndex: (int) index
{
    TPResClipCache *clipCache;
    clipCache = [resClipCaches objectAtIndex: index];
    return (clipCache);
}
- (void) addClipCache: (TPResClipCache*) ClipCache
{
    [resClipCaches addObject: ClipCache];
}
- (void) print
{
    int i;
    for(i = 0 ; i < [resClipCaches count] ; i++){
        NSLog(@"%@",[self clipCacheAtIndex: i]);
    }
}
- (void) dealloc
{
    [resClipCaches dealloc];
    [super dealloc];
}
