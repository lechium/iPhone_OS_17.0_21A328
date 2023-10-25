//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDAccessoryPairingLogEventStateManager : NSObject
{
    struct os_unfair_lock_s _accessoryPairingRetryMapLock;	// 8 = 0x8
    struct os_unfair_lock_s _accessoryPairingProgressStateTrackerLock;	// 12 = 0xc
    unsigned long long _pairingUIState;	// 16 = 0x10
    unsigned long long _recoveryType;	// 24 = 0x18
    unsigned long long _previousRecoveryType;	// 32 = 0x20
    NSDate *_lastPairingEndTime;	// 40 = 0x28
    NSMutableDictionary *_retryCountMap;	// 48 = 0x30
    NSMutableDictionary *_pairingProgressStateTracker;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0060000000530902
- (void).cxx_destruct;	// IMP=0x00000000005308cf
@property(readonly, nonatomic) NSMutableDictionary *pairingProgressStateTracker; // @synthesize pairingProgressStateTracker=_pairingProgressStateTracker;
@property(readonly, nonatomic) NSMutableDictionary *retryCountMap; // @synthesize retryCountMap=_retryCountMap;
@property(retain, nonatomic) NSDate *lastPairingEndTime; // @synthesize lastPairingEndTime=_lastPairingEndTime;
@property(nonatomic) unsigned long long previousRecoveryType; // @synthesize previousRecoveryType=_previousRecoveryType;
@property(nonatomic) unsigned long long recoveryType; // @synthesize recoveryType=_recoveryType;
@property(nonatomic) unsigned long long pairingUIState; // @synthesize pairingUIState=_pairingUIState;
- (void)resetStatesForNewAddOperation;	// IMP=0x00000000005307d2
- (double)getTimeDurationForProgressStateForIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x0000000000530672
- (double)getTimeDurationForLongestProgressStateForAccessory:(id)arg1;	// IMP=0x00000000005305a5
- (id)getLastProgressStateForAccessory:(id)arg1;	// IMP=0x000000000053039b
- (id)getLongestProgressStateForAccessory:(id)arg1;	// IMP=0x00000000005302c5
- (void)clearPairingProgressStateTrackerForIdentifier:(id)arg1;	// IMP=0x00000000005301db
- (void)updateLastPairingProgressStateEventForIdentifier:(id)arg1 withDate:(id)arg2;	// IMP=0x0000000000530104
- (void)_updateStateOnPairingProgress:(long long)arg1;	// IMP=0x000000000052ff4f
- (void)updatePairingProgressState:(id)arg1;	// IMP=0x000000000052fcdd
- (void)startProgressStateTrackerWithDate:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000052fbce
- (void)_handlePairingStateProgressNotification:(id)arg1;	// IMP=0x000000000052fa78
- (void)incrementRetryCount:(id)arg1;	// IMP=0x000000000052f91a
- (void)updateStatesOnResult:(_Bool)arg1;	// IMP=0x000000000052f773
- (void)clearRetryCountMap;	// IMP=0x000000000052f708
- (unsigned long long)retryCountForIdentifier:(id)arg1;	// IMP=0x000000000052f648
- (id)init;	// IMP=0x000000000052f53d

@end
