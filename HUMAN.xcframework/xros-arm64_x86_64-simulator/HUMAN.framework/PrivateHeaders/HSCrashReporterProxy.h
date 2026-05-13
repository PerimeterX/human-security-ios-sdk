//
//  HSCrashReporterProxy.h
//  HUMAN Security
//
//  Created by Oren Yaar on 10/08/2022.
//

// PLCrashReporter - https://github.com/microsoft/plcrashreporter

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface _HSCrashReporterProxy : NSObject

+ (BOOL)isPLCrashReporterAvailable;

- (BOOL)enableCrashReporter;
- (BOOL)hasPendingCrashReport;
- (nullable NSData *)loadPendingCrashReportData;
- (BOOL)crateCrashReport:(NSData *)data;
- (nullable NSString *)getCrashReportUUID;
- (nullable NSString *)generateCrashLog;
- (void)purgePendingCrashReport;

@end

NS_ASSUME_NONNULL_END
