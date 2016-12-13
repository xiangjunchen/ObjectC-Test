#import <Foundation/Foundation.h>

@interface TPProperty : NSObject
{
    NSString    *firstName;
    NSString    *lastName;
    BOOL         on;
}
//(nonatomic,readwrite,copy)ԭ���ԣ���дȨ�ޣ��ڴ��������
@property (nonatomic,readwrite,copy) NSString *firstName;
@property (nonatomic,readonly,copy) NSString *lastName;
@property (nonatomic,getter=isOn) BOOL on;
- (void) do;
- (NSString*) fullName;
- (void) setFullName: (NSString*) fullName;
@end

@implementation TPProperty
@synthesize firstName;
@synthesize lastName;
- (void) do
{
    firstName = @"ssss";
    NSLog(@"%@",firstName);
}
- (NSString*) fullName
{
    return [NSString stringWithFormat: @"%@ %@",
                    self.firstName,self.lastName];
}
- (void) setFullName: (NSString*) fullName
{
    NSArray *components = [fullName componentsSeparatedByString:@" "];
    self.firstName = [components objectAtIndex:0];
    self.lastName  = [components objectAtIndex:1];
}

@end


