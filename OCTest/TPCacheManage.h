#import <Foundation/Foundation.h>
@interface TPCacheManage : NSObject
@end

@implementation TPCacheManage
- (id) init
{
    if(self = [super init]){
        NSLog(@"init: Retain count %d ", [self retainCount]);
    }
    return (self);
}
- (void) dealloc
{
    NSLog(@"dealloc called,Bye Bye ");
    [super dealloc];
}
@end
