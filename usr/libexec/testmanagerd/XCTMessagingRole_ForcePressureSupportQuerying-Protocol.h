//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, XCSynthesizedEventRecord;

@protocol XCTMessagingRole_ForcePressureSupportQuerying
- (void)_XCT_requestCurrentKeyboardModifierFlagsWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)_XCT_synthesizeEvent:(XCSynthesizedEventRecord *)arg1 implicitConfirmationInterval:(double)arg2 completion:(void (^)(NSError *))arg3;
- (void)_XCT_postTelemetryData:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_XCT_requestPressureEventsSupported:(void (^)(_Bool, NSError *))arg1;
@end
