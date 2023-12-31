//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeAccessorySiriDataSharingLogger, NSArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ADHomeDataSharingRepromptManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _needsInitialPropagationKickOff;	// 16 = 0x10
    _Bool _needsPropagationAfterRetryFires;	// 17 = 0x11
    NSNumber *_targetHomeKitOptInStatus;	// 24 = 0x18
    NSArray *_accessoryIdsThatNeedPropagation;	// 32 = 0x20
    int _retryCounter;	// 40 = 0x28
    ADHomeAccessorySiriDataSharingLogger *_homeAccessorySiriDataSharingLogger;	// 48 = 0x30
    NSString *_logEventIdentifier;	// 56 = 0x38
    unsigned long long _propagationDelayInSeconds;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x0040000000085808
- (void).cxx_destruct;	// IMP=0x00200000000835e2
- (void)removeAccessoryFromPropagationList:(id)arg1;	// IMP=0x0010000000083555
- (void)_clearPropagationStatusFromLocalStorage;	// IMP=0x001000000008350f
- (void)_writePropagationStatusToLocalStorage;	// IMP=0x0010000000083391
- (void)_loadStoredPropagationStatus;	// IMP=0x00100000000831d6
- (void)_homeKitDataSyncHasFinished:(id)arg1;	// IMP=0x001000000008318b
- (void)_propagateSiriDataSharingToAccessory:(id)arg1 home:(id)arg2 homeManager:(id)arg3 propagationEvent:(long long)arg4 propagationReason:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000082bd0
- (void)_propagateDataSharingStatusToAccessoriesWithPropagationEvent:(long long)arg1 propagationReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000082945
- (void)propagateDataSharingStatusToAccessoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000828b8
- (void)_kickOffInitialPropagationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000082776
- (void)_propagateToAllHomeAccessoriesAfterReprompt:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082689
- (void)propagateToAllHomeAccessoriesAfterReprompt:(long long)arg1 source:(long long)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000082519
- (id)initWithPropagationDelay:(unsigned long long)arg1;	// IMP=0x001000000008240f

@end

