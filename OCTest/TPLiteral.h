#import <Foundation/Foundation.h>

@interface TPLiteral : NSObject
- (void) do;
@end

@implementation TPLiteral
- (void) do
{
    //少用这种方式
    NSNumber *someNumber0 = [NSNumber numberWithInt:1];
    //多用字面数值
    NSString *someString = @"Effective objectivity-C 2.0";
    NSNumber *someNumber1 = @1;
    NSNumber *floatNumber = @2.5f;
    NSNumber *doubleNumber = @3.14159;
    NSNumber *boolNumber = @YES;
    NSNumber *charNumber = @'a';
    //字面量语法也适用于下述表达式
    int x = 5;
    int y = 6;
    NSNumber *expressionNumber = @(x * y);
    //普通创建数组的方式
    NSArray *animals = [NSArray arrayWithObjects:@"cat", @"dog", @"mouse", @"badger", nil];
    //使用
    NSString *dog = [animals objectAtIndex:1];
    //创建字面量数组
    NSArray *animals1 = @[@"cat", @"dog", @"mouse", @"badger"];
    //使用
    NSString *cat = animals1[0];
    //如：
    id object1 = @1;
    id object2 = nil;
    id object3 = @3;
    //此数组中只有object1，因为arrayWithObjects会依次处理各个参数，直到发现nil为止
    NSArray *arrayA = [NSArray arrayWithObjects:object1, object2, object3, nil];

    //而object2位nil，会引发异常，向数组中插入nil通常说明程序有错，通过异常可以更快的发现这个错误
    //使用字面量数组比上面的方式更安全
    NSArray *arrayB = @[object1, object2, object3];
    NSLog(@"%@", arrayA[1]);
    NSLog(@"%@",arrayB[1]);
    //字典
    NSDictionary *personData = [NSDictionary dictionaryWithObjectsAndKeys:
                                @"Matt", @"firstName",
                                @"Galloway", @"lastName",
                                [NSNumber numberWithInt:25], @"age",
                                nil];
    NSString *lastName = [personData objectForKey:@"lastName"];
    //字面量字典
    NSDictionary *personData2 = @{@"firstName" : @"Matt",
                                  @"lastName" : @"Galloway",
                                  @"age" : @25};
    NSString *lastName2 = personData2[@"lastName"];
    //可变数组字典
    NSMutableArray *mutableArray = [NSMutableArray arrayWithObjects:@"a", @"b", @"c", nil];
    NSMutableDictionary *mutabledictionary = [NSMutableDictionary dictionaryWithObjectsAndKeys:
                                              @"Matt", @"firstName",
                                              @"Galloway", @"lastName",
                                              [NSNumber numberWithInt:25], @"age",
                                              nil];
    //可以这样操作
    [mutableArray replaceObjectAtIndex:1 withObject:@"h"];
    [mutabledictionary setObject:@"jeck" forKey:@"lastName"];
    //也可以这样来操作
    mutableArray[1] = @"h";
    mutabledictionary[@"lastName"] = @"jeck";
    //使用字面量语法创建出来的字符串 数组 字典对象都是不可变的（immutable）若想要可变版本的对象，则需要复制一份
    NSMutableArray *mutable = [@[@1, @2, @3, @4] mutableCopy];
}
@end


