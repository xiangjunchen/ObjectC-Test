#import <Foundation/Foundation.h>

@class TPResClipCache;

@interface TPResCache : NSObject
{
    BOOL  m_bLockCache;
    DWORD m_dwTickCount;
    NSString *name;

    NSMutableArray *resClipCaches;
}
@property BOOL  m_bLockCache;
@property DWORD m_dwTickCount;
@property (copy) NSString *name;

- (id)   initWithbLockCache: (BOOL) bLock dwTickCount:(DWORD) dwTick;
- (void) setClipCache: (TPResClipCache *) clipCache
         atIndex:      (int) index;
- (void) addClipCache: (TPResClipCache *) clipCache;
- (void) removeClipCacheAtIndex: (int) index;
- (TPResClipCache *) clipCacheAtIndex: (int) index;
- (void) print;
@end

@implementation TPResCache

@synthesize m_bLockCache;
@synthesize m_dwTickCount;
@synthesize name;

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
- (void) dealloc
{
    [name release];
    [resClipCaches dealloc];
    [super dealloc];
}
- (id)   initWithbLockCache: (BOOL) bLock dwTickCount:(DWORD) dwTick
{
    if(self = [super init]){
        m_dwTickCount = dwTick;
        m_bLockCache  = bLock;
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
- (void) removeClipCacheAtIndex: (int) index
{
    [resClipCaches removeObjectAtIndex: index];
}
- (void) print
{
    int i;
    for(i = 0 ; i < [resClipCaches count] ; i++){
        NSLog(@"%@",[self clipCacheAtIndex: i]);
    }
}

