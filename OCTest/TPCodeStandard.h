#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger, TPEmployeeType){
    TPEmployeeTypeDeveloper,
    TPEmployeeTypeDesigner,
    TPEmployeeTypeFinance,
};
@interface TPEmployee : NSObject
@property (copy) NSString *name;
@property NSUInteger salary;
+ (TPEmployee*) employeeWithType:(TPEmployeeType) type;
- (void) doADaysWork;
@end

@interface TPEmployeeDeveloper : TPEmployee
@end
@implementation TPEmployeeDeveloper
@end
@interface TPEmployeeDesigner : TPEmployee
@end
@implementation TPEmployeeDesigner
@end
@interface TPEmployeeFinance : TPEmployee
@end
@implementation TPEmployeeFinance
@end

@implementation TPEmployee
+ (TPEmployee*) employeeWithType:(TPEmployeeType) type
{
    switch(type){
    case TPEmployeeTypeDeveloper:
        return [TPEmployeeDeveloper new];
        break;
    case TPEmployeeTypeDesigner:
        return [TPEmployeeDesigner new];
        break;
    case TPEmployeeTypeFinance:
        return [TPEmployeeFinance new];
        break;
    }
    return nil;
}
- (void) doADaysWork
{
    TPEmployee *employee = [TPEmployee employeeWithType:TPEmployeeTypeDesigner];
    BOOL bIsE = [employee isMemberOfClass:[TPEmployee class]];
    if(bIsE)
        NSLog(@"employee is TPEmployee");
    else
        NSLog(@"employee is not a TPEmployee");
    BOOL bIsSub = [employee isKindOfClass:[TPEmployee class]];
    if(bIsSub)
        NSLog(@"employee is Kind Of TPEmployee");
    else
        NSLog(@"employee is not Kind Of TPEmployee");
}
@end



