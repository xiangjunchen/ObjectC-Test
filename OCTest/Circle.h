

#import <Foundation/Foundation.h>

typedef enum{
    _red,
    _green,
    _blue
}SharpColor;
typedef enum{
    _Circle,
    _Rectangle
}SharpRect;
@interface Circle : NSObject
{
    SharpColor fillColor;
    SharpRect  bounds;
}
- (void) setFillColor: (SharpColor) fillColor;
- (void) setBounds: (SharpRect) bounds;
- (void) draw;
@end

@implementation Circle
- (void) setFillColor: (SharpColor) c
{
    fillColor = c;
}
- (void) setBounds: (SharpRect) b
{
    bounds = b;
    [super setBounds: b];
}
- (void) draw
{
    NSLog(@"current color is %d",fillColor);
}
@end

