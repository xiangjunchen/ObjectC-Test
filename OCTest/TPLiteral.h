#import <Foundation/Foundation.h>

@interface TPLiteral : NSObject
- (void) do;
@end

@implementation TPLiteral
- (void) do
{
    //�������ַ�ʽ
    NSNumber *someNumber0 = [NSNumber numberWithInt:1];
    //����������ֵ
    NSString *someString = @"Effective objectivity-C 2.0";
    NSNumber *someNumber1 = @1;
    NSNumber *floatNumber = @2.5f;
    NSNumber *doubleNumber = @3.14159;
    NSNumber *boolNumber = @YES;
    NSNumber *charNumber = @'a';
    //�������﷨Ҳ�������������ʽ
    int x = 5;
    int y = 6;
    NSNumber *expressionNumber = @(x * y);
    //��ͨ��������ķ�ʽ
    NSArray *animals = [NSArray arrayWithObjects:@"cat", @"dog", @"mouse", @"badger", nil];
    //ʹ��
    NSString *dog = [animals objectAtIndex:1];
    //��������������
    NSArray *animals1 = @[@"cat", @"dog", @"mouse", @"badger"];
    //ʹ��
    NSString *cat = animals1[0];
    //�磺
    id object1 = @1;
    id object2 = nil;
    id object3 = @3;
    //��������ֻ��object1����ΪarrayWithObjects�����δ������������ֱ������nilΪֹ
    NSArray *arrayA = [NSArray arrayWithObjects:object1, object2, object3, nil];

    //��object2λnil���������쳣���������в���nilͨ��˵�������д�ͨ���쳣���Ը���ķ����������
    //ʹ�����������������ķ�ʽ����ȫ
    NSArray *arrayB = @[object1, object2, object3];
    NSLog(@"%@", arrayA[1]);
    NSLog(@"%@",arrayB[1]);
    //�ֵ�
    NSDictionary *personData = [NSDictionary dictionaryWithObjectsAndKeys:
                                @"Matt", @"firstName",
                                @"Galloway", @"lastName",
                                [NSNumber numberWithInt:25], @"age",
                                nil];
    NSString *lastName = [personData objectForKey:@"lastName"];
    //�������ֵ�
    NSDictionary *personData2 = @{@"firstName" : @"Matt",
                                  @"lastName" : @"Galloway",
                                  @"age" : @25};
    NSString *lastName2 = personData2[@"lastName"];
    //�ɱ������ֵ�
    NSMutableArray *mutableArray = [NSMutableArray arrayWithObjects:@"a", @"b", @"c", nil];
    NSMutableDictionary *mutabledictionary = [NSMutableDictionary dictionaryWithObjectsAndKeys:
                                              @"Matt", @"firstName",
                                              @"Galloway", @"lastName",
                                              [NSNumber numberWithInt:25], @"age",
                                              nil];
    //������������
    [mutableArray replaceObjectAtIndex:1 withObject:@"h"];
    [mutabledictionary setObject:@"jeck" forKey:@"lastName"];
    //Ҳ��������������
    mutableArray[1] = @"h";
    mutabledictionary[@"lastName"] = @"jeck";
    //ʹ���������﷨�����������ַ��� ���� �ֵ�����ǲ��ɱ�ģ�immutable������Ҫ�ɱ�汾�Ķ�������Ҫ����һ��
    NSMutableArray *mutable = [@[@1, @2, @3, @4] mutableCopy];
}
@end


