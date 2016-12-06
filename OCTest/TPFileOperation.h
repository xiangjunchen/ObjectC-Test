#import <Foundation/Foundation.h>

@interface TPFileOperation : NSObject
{

}
- (BOOL) lookFile: (NSString *) strFile;
@end

@implementation TPFileOperation

- (BOOL) lookFile: (NSString *) strFile
{
    NSLog(@"begin %@",strFile);
    NSFileManager *manager;
    manager = [NSFileManager defaultManager];
    NSString *home ;
    home = [@"~" stringByExpandingTildelnPath];
    NSDirectoryEnumerator *direnum;
    direnum = [manager enumratorAtPath:home];
    NSMutableArray *files;
    files = [NSMutableArray arrayWithCapacity:47];
    NSString *fileName;
    while(fileName = [direnum nextObject]){
        if([[fileName pathExtension]
           isEqualTo:@"jpg"]){
            [files addObject:fileName];
           }
    }
    NSEnumerator *fileEnum;
    fileEnum = [files objectEnumerator];
    while(fileName = [fileEnum nextObject]){
        NSLog(@"%@",fileName);
    }
    NSLog(@"End_%@",strFile);
}
@end
