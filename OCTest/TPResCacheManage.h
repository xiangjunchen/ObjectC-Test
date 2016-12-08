#import "TPBaseObject.h"
@class TPResCatalogCache;
@class TPResClipCache;

@interface TPResCache : TPBaseObject
{
    BOOL                 m_bUpdate;
    DWORD                m_dwTickUpdate;
    NSString            *m_sUpdateUrl;

    NSMutableDictionary *m_resCatalogCaches;
    NSMutableDictionary *m_resClipCaches;
}
@property BOOL  m_bUpdate;
@property DWORD m_dwTickUpdate;
@property (copy) NSString *m_sUpdateUrl;

- (id)   initWithbUpdate: (BOOL) bUpdate
         dwTickUpdate:(DWORD) dwTick
         sUpdateUrl:(NSString*) sUrl;
//Catalog
- (void) setCatalogCacheObject: (NSString*) guid
          catalogObject: (TPResCatalogCache *) catalogObject;
- (void) removeCatalogCacheForKey: (NSString*) guid;
- (TPResCatalogCache *) catalogCacheForKey: (NSString*) guid;
//Clip
- (void) setClipCacheObject: (NSString*) guid
          clipObject: (TPResClipCache *) clipObject;
- (void) removeClipCacheForKey: (NSString*) guid;
- (TPResClipCache *) clipCacheForKey: (NSString*) guid;
//
- (void) emptyCache;
- (void) print;
@end

@implementation TPResCache
@synthesize m_bUpdate;
@synthesize m_dwTickUpdate;
@synthesize m_sUpdateUrl;
- (id) init
{
    if(self = [super init]){
        m_resCatalogCaches = [[NSMutableDictionary dictionary] init];
        m_resClipCaches = [[NSMutableDictionary dictionary] init];
    }
    return (self);
}
- (id)   initWithbUpdate: (BOOL) bUpdate
         dwTickUpdate:(DWORD) dwTick
         sUpdateUrl:(NSString*) sUrl
{
    if(self = [self init]){
        m_bUpdate = bUpdate;
        m_dwTickUpdate = dwTick;
        m_sUpdateUrl = sUrl;
    }
    return (self);
}
- (void) dealloc
{
    [self emptyCache];
    [m_sUpdateUrl release];
    [m_resCatalogCaches dealloc];
    [m_resClipCaches dealloc];
    [super dealloc];
}
- (void) emptyCache
{
    [m_resCatalogCaches removeAllObjects];
    [m_resClipCaches removeAllObjects];
}
- (TPResCatalogCache *) catalogCacheForKey: (NSString*) guid
{
    TPResCatalogCache *catalogCache = [NSNull null];
    catalogCache = [m_resCatalogCaches objectForKey: guid];
    return catalogCache;
}
- (void) setCatalogCacheObject: (NSString*) guid
          catalogObject: (TPResCatalogCache *) catalogObject
{
    [m_resCatalogCaches setObject: catalogObject
                        forKey: guid];
    NSLog(@"Catalog has %d count.",[m_resCatalogCaches count]);
}
- (void) removeCatalogCacheForKey: (NSString*) guid
{
    [m_resCatalogCaches removeObjectForKey: guid];
}
- (TPResClipCache *) clipCacheForKey: (NSString*) guid
{
    TPResClipCache *clipCache = [NSNull null];
    clipCache = [m_resClipCaches objectForKey: guid];
    return clipCache;
}
- (void) setClipCacheObject: (NSString*) guid
          clipObject: (TPResClipCache *) clipObject
{
    [m_resClipCaches setObject: clipObject
                        forKey: guid];
    NSLog(@"Clip has %d count.",[m_resClipCaches count]);
}
- (void) removeClipCacheForKey: (NSString*) guid
{
    [m_resClipCaches removeObjectForKey: guid];
}
- (void) print
{
    NSLog(@"Catalog has %d count.",[m_resCatalogCaches count]);
    for (id akey in [m_resCatalogCaches allKeys]) {
        TPResCatalogCache *catalogCache= (TPResCatalogCache *)[m_resCatalogCaches objectForKey:akey];
        //NSLog(@"Catalog guid is %@.",catalogCache.m_guidRes);
        [catalogCache print];
        for (id akey in [m_resClipCaches allKeys]) {
            TPResClipCache *clipCache= (TPResClipCache *)[m_resClipCaches objectForKey:akey];
            [clipCache print];
            if(TRUE == [clipCache.m_guidNode isEqualToString:catalogCache.m_guidRes]){
                NSLog(@"Clip %@ is %@ child .",clipCache.m_sResName,catalogCache.m_sResName);
            }
        }
    }
    for (id akey in [m_resClipCaches allKeys]) {
        TPResClipCache *clipCache= (TPResClipCache *)[m_resClipCaches objectForKey:akey];
        [clipCache print];
    }
}
@end
