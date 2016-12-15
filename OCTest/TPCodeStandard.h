#import <Foundation/Foundation.h>

@interface TPMemoryManage : NSObject
{
    NSString *name;
}
@property (copy) NSString *name;
- (void) do;
- (NSString*) stringValue;
@end

@implementation TPMemoryManage
@synthesize name;
- (NSString*) stringValue
{
    NSString *value = [[NSString alloc] initWithFormat:@"i'm this :%@",self];
    return [value autorelease];
}
- (void) dealloc
{
    [self.name release];
    [super dealloc];
}
- (void) do
{
    NSString *str1 = [[self stringValue] retain];
    NSLog(@"This string1 is %@",str1);
    [str1 release];

    NSString *str2 = [self stringValue];
    NSLog(@"This string2 is %@",str2);
    self.name = str2;
    NSString *test = self.name;
    [self.name release];
}
@end



