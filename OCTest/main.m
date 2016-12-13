#import "TPResTest.h"
#import "TPCodeStandard.h"
//#import "TPLiteral.h"
int main (int argc,const char *argv[])
{
    NSAutoreleasePool *pool =[[NSAutoreleasePool alloc] init];
//    NSLog(@"%@",@"hello world");
//    TPResTest *resTest = [[TPResTest alloc] init];
//    [resTest do];
    TPEmployee *codeStandard = [[TPEmployee alloc] init];
    [codeStandard doADaysWork];

    [pool release];
    return 0;
}
