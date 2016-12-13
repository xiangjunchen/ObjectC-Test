#import <Foundation/Foundation.h>

#define ANIMATION_DURATION 0.3
static const NSTimeInterval kAnimationDuration = 0.3;
static const NSTimeInterval TPCodeStandardAnimationDuration = 0.3;
typedef NS_ENUM(NSUInteger,TPConnectionState){
    TPConnectionStateDisonnected,
    TPConnectionStateConnecting,
    TPConnectionStateConnected,
};

typedef NS_OPTIONS(NSUInteger,TPViewAutoresing){
    UIViewAutoresingNone    = 0,
    UIViewAutoresingLeft    = 1 << 0,
    UIViewAutoresingTop     = 1 << 1,
    UIViewAutoresingRight   = 1 << 2,
    UIViewAutoresingBottom  = 1 << 3,
};

@interface TPEnumOptions : NSObject
- (void) do;
@end

@implementation TPEnumOptions
- (void) do
{
    TPConnectionState state = TPConnectionStateConnecting;
    switch(state){
        case TPConnectionStateDisonnected:
            {
                NSLog(@"enum TPConnectionStateDisonnected");
                break;
            }
        case TPConnectionStateConnecting:
            {
                NSLog(@"enum TPConnectionStateConnecting");
                break;
            }
        case TPConnectionStateConnected:
            {
                NSLog(@"enum TPConnectionStateConnected");
                break;
            }
    }
    TPViewAutoresing resing = UIViewAutoresingLeft|UIViewAutoresingTop;
    if(resing & UIViewAutoresingLeft){
        NSLog(@"option checked");
    }
}
@end


