//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol USDeviceActivityMonitorExtension
- (void)eventWillReachThresholdWarning:(NSString *)arg1 activity:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)intervalWillEndWarningForActivity:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)intervalWillStartWarningForActivity:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)eventDidReachThreshold:(NSString *)arg1 activity:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)intervalDidEndForActivity:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)intervalDidStartForActivity:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
@end
