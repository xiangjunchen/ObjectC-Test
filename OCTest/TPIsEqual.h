#import <Foundation/Foundation.h>
//只要是值类型、简单类型的类型，比如说NSInteger、CGPoint、CGFloat，以及C数据类型int、float、double等，都应该使用assign。
//那么对于含有可深复制子类的对象，比如说NSArray、NSSet、NSDictionary、NSData、NSString等等，都应该使用copy特性。
//
//注意：对于NSMutableArray之类的可变类型，不能够使用Copy特性，否则初始化会出现错误。
//至于其他的NSObject对象，那么都应该使用retain来进行操作，这也是绝大多数所使用的情况。
//@property(weak) MyOtherClass *delegate;
//相当于@property(assign) MyOtherClass *delegate;
//
//简单讲strong等同retain
//weak比assign多了一个功能，当对象消失后自动把指针变成nil，好处不言而喻。
//weak常用于网络delegate属性
@interface TPIsEqual : NSObject
@property (nonatomic,copy) NSString *firstName;
@property (nonatomic,copy) NSString *lastName;
@property (nonatomic,assign) NSUInteger age;
- (BOOL) isEqualToObject:(TPIsEqual*) otherInstance;
@end

@implementation TPIsEqual
- (BOOL) isEqualToObject:(TPIsEqual*) otherInstance
{
    if(self == otherInstance) return YES;

    if(![self.firstName isEqualToString:otherInstance.firstName])
        return NO;
    if(![self.lastName isEqualToString:otherInstance.lastName])
        return NO;
    if(self.age != otherInstance.age)
        return NO;
    return YES;
}
- (BOOL) isEqual:(id)object
{
    if([self class] != [object class]){
        return [self isEqualToObject:(TPIsEqual*)object];
    }
    else{
        return [super isEqual:object];
    }
}
//创建字符串开销较大
//- (NSUInteger) hash
//{
//    NSString *stringToHash =
//            [NSString stringWithFormat: @"%@:%@:%@",
//                self.firstName,self.lastName,self.age];
//    return [stringToHash hash];
//}
- (NSUInteger) hash
{
    NSUInteger firstNameHash = [self.firstName hash];
    NSUInteger lastNameHash  = [self.lastName hash];
    NSUInteger ageHash = self.age;
    return firstNameHash ^ lastNameHash ^ ageHash;
}
@end


