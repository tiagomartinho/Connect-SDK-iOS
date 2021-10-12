#define TARGET_APP_EXTENSION __has_feature(attribute_availability_app_extension)

#import "ApplicationHelper.h"

@implementation ApplicationHelper : NSObject 

 + (nullable UIApplication *)sharedApplication {
     if ([UIApplication respondsToSelector:@selector(sharedApplication)]) {
         return [UIApplication performSelector:@selector(sharedApplication)];
     }
     return nil;
 }

 @end
