//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol MFAPSManager
- (NSData *)copyDeviceToken;
- (void)connect;
- (void)swapTopic:(NSString *)arg1 forNewTopic:(NSString *)arg2;
- (void)stopWatchingForTopic:(NSString *)arg1;
- (void)startWatchingForTopic:(NSString *)arg1;
- (NSString *)copyDiagnosticInformation;
- (void)setLaunchMachServiceName:(NSString *)arg1;
@end

