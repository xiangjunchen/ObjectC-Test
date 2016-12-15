#import <Foundation/Foundation.h>
//ֻҪ��ֵ���͡������͵����ͣ�����˵NSInteger��CGPoint��CGFloat���Լ�C��������int��float��double�ȣ���Ӧ��ʹ��assign��
//��ô���ں��п��������Ķ��󣬱���˵NSArray��NSSet��NSDictionary��NSData��NSString�ȵȣ���Ӧ��ʹ��copy���ԡ�
//
//ע�⣺����NSMutableArray֮��Ŀɱ����ͣ����ܹ�ʹ��Copy���ԣ������ʼ������ִ���
//����������NSObject������ô��Ӧ��ʹ��retain�����в�������Ҳ�Ǿ��������ʹ�õ������
//@property(weak) MyOtherClass *delegate;
//�൱��@property(assign) MyOtherClass *delegate;
//
//�򵥽�strong��ͬretain
//weak��assign����һ�����ܣ���������ʧ���Զ���ָ����nil���ô����Զ�����
//weak����������delegate����
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
//�����ַ��������ϴ�
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


