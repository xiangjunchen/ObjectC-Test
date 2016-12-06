#import <Foundation/Foundation.h>

@interface TPBaseDataType : NSObject
{

}
- (BOOL) Test;
@end


@implementation TPBaseDataType
- (BOOL) Test
{
    DWORD dw;
    GUID guid;
    NSLog(@"hello jc");
    int i ;
    for(i = 0 ; i < 5 ; i++){
        NSLog(@" %d ",i);
    }
    //base data type
    NSRange rang = NSMakeRange(10,4);
    NSPoint point;//NSMakePoint();
    NSSize size;//NSMakeSize();
    NSRect rect;//NSMakeRect();
    NSString *strInit;
    strInit = [[NSString alloc] initWithFormat: @"%d or %d",25,42];
    strInit = [[NSString alloc] initWithContentOfFile: @"c:\a.txt"];//auto open file as string to strInit
    NSString *string;
    string = [NSString stringWithFormat:
                @"You height is %d feet, %d inches",5,11];
    unsigned int length = [string length];
    NSString *string1 = @"test";
    if(FALSE == [string1 isEqualToString:string]){
        NSLog(@"They are same");
    }
    NSString *filename = @"draw_chapter.mov";
    if([filename hasPrefix: @"draw"]){
    }
    if([filename hasSuffix: @".mov"]){
    }
    NSRange strRange ;
    strRange = [filename rangeOfString:@"chapter"];
    NSLog(@"strRange start is %d ",strRange.length);

    NSMutableString *mutableString ;
    mutableString = [NSMutableString stringWithCapacity: 50];
    [mutableString appendString: @"Hello there"];
    [mutableString appendFormat: @"human %d",39];
    NSMutableString *friendString ;
    friendString = [NSMutableString stringWithCapacity: 50];
    [friendString appendString: @"James Bethly Jack Evan"];
    NSRange jackRange ;
    jackRange = [friendString rangeOfString: @"Jack"];
    jackRange.length++;
    [friendString deleteCharactersInRange: jackRange];

    NSArray *array;
    array = [NSArray arrayWithObjects:
                @"one",@"two",@"three",nil];
    for(i = 0; i < [array count]; i++){
        NSLog(@"index %d has %@. ",i,[array objectAtIndex:i]);
    }

    NSMutableArray *muArray;
    muArray = [NSMutableArray arrayWithCapacity: 17];
    for(i = 0 ; i < 4 ; i++){
        NSString *str = [NSString new];
        [muArray addObject: str];
    }
    NSEnumerator *enumerator;
    enumerator = [muArray objectEnumerator];
    id thing;
    while(thing = [enumerator nextObject]){
        NSLog(@"I found %@",thing);
    }
    for(NSString *string in muArray){
        NSLog(@"I found %@",string);
    }
    for(i = [muArray count] - 1; i >= 0; i--){
        NSString *str = [muArray objectAtIndex: i];
        [muArray removeObjectAtIndex: i];
    }
    NSString *str1 = [NSString new];
    NSString *str2 = [NSString new];
    NSString *str3 = [NSString new];
    NSString *str4 = [NSString new];
    NSDictionary *strDic;
   // strDic = [NSDictionary dictionaryWithObjectAndKey:
   //          str1,@"one", str2,@"two",str3,@"three",str4,@"Four",nil,nil];
    NSMutableDictionary *muDic;
    muDic = [NSMutableDictionary dictionary];
    [muDic setObject: str1 forKey: @"one"];
    [muDic setObject: str2 forKey: @"two"];
    [muDic setObject: str3 forKey: @"three"];
    [muDic setObject: str4 forKey: @"Four"];
    [muDic removeObjectForKey: @"two"];
    //array，dictionary不支持基本数据类型，结构体直接添加
    //NSValue,NSNumber可以直接封装基本数据类型，结构体到array，dictionary
    //[muDic setObject: [NSNull null]
    //        forkey: @"five"];
    id fiveFax;
    fiveFax = [muDic objectForKey: @"five"];
    if(fiveFax == [NSNull null]){
        //
    }
}
@end
