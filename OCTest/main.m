#import "TPResTest.h"
#import "TPCodeStandard.h"
//#import "TPLiteral.h"
//#import "TPNet.h"
#import "TPNumberConvenience.h"
#import "TPManagerProtocal.h"
int main (int argc,const char *argv[])
{
    NSAutoreleasePool *pool =[[NSAutoreleasePool alloc] init];
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    [dict setObject: [@"xiang" lengthAsNumber]
          forKey: @"xiang"];
    NSLog(@"dict is :%@",dict);
    [@"ss" selectorTest];
//    NSLog(@"%@",@"hello world");
//    TPResTest *resTest = [[TPResTest alloc] init];
//    [resTest do];
//   TPMemoryManage *codeStandard = [[TPMemoryManage alloc] init];
//   [codeStandard do];

    [pool release];
    return 0;
}
