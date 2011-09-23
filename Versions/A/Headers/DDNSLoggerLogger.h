//
//  DDNSLoggerLogger.h
//  Created by Peter Steinberger on 26.10.10.
//

#import <Foundation/Foundation.h>
#import "DDLog.h"

/** Bridge between NSLogger and CocoaLumberJack.  
 
 Get the shared instance of this Custom Logger and add it  to CocoaLumberjack: 

 [DDLog addLogger:[DDNSLoggerLogger sharedInstance]];
 
 By doing this, everything that you log using the CocoaLumberjack methods will also be logged 
 into the NSLogger Desktop viewer.
 */
@interface DDNSLoggerLogger : DDAbstractLogger <DDLogger>
{
}

+ (DDNSLoggerLogger *)sharedInstance;

// Inherited from DDAbstractLogger

// - (id <DDLogFormatter>)logFormatter;
// - (void)setLogFormatter:(id <DDLogFormatter>)formatter;

@end
