//
//  PXUIKitExceptionCatcher.h
//  HUMAN Security
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Runs a block inside Objective-C `@try/@catch` so Swift can recover from `NSException`.
///
/// This does **not** catch `EXC_BREAKPOINT` / `SIGTRAP`. Those are fatal Mach traps
/// (for example iOS 27 `UIScreen.brightness` when scene settings are unset) and cannot
/// be handled with try/catch. Skip the unsafe API instead.
@interface PXUIKitExceptionCatcher : NSObject

+ (BOOL)perform:(void (NS_NOESCAPE ^)(void))block;

@end

NS_ASSUME_NONNULL_END
