//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class NSObject;
@protocol CLVO2MaxServiceClientProtocol, OS_xpc_object;

@protocol CLVO2MaxServiceProtocol <CLIntersiloServiceProtocol>
- (void)onRetryTriggerRetrocompute:(NSObject<OS_xpc_object> *)arg1;
- (void)onRetrocomputeHealthKitSampleFailed:(NSObject<OS_xpc_object> *)arg1;
- (void)onRetrocomputeHealthKitSampleSavedWithStartTime:(double)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
- (void)unregisterForRetrocomputeStatusUpdates:(byref id <CLVO2MaxServiceClientProtocol>)arg1;
- (void)registerForRetrocomputeStatusUpdates:(byref id <CLVO2MaxServiceClientProtocol>)arg1;
- (void)queryVO2MaxRetrocomputeStatusWithReply:(void (^)(CMVO2MaxRetrocomputeState *, int))arg1;
- (void)updateRetrocomputeStatus:(int)arg1 unavailableReasons:(unsigned int)arg2;
- (void)onRetryHealthKitDeleteSamples:(NSObject<OS_xpc_object> *)arg1;
- (void)retryHealthKitDeleteSamples;
- (void)deleteHealthKitSamples:(_Bool)arg1;
- (void)triggerRetrocomputeWithReply:(void (^)(int))arg1;
- (void)onRetrocomputePreprocessingActivity:(NSObject<OS_xpc_object> *)arg1;
@end

