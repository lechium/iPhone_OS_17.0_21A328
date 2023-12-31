//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKContainer, HMFTimer, NAFuture, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMBCloudCredentialsAvailabilityListener : HMFObject
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    NAFuture *_manateeAvailabilityFuture;	// 32 = 0x20
    NAFuture *_keychainAvailabilityFuture;	// 40 = 0x28
    HMFTimer *_keychainAvailabilityTimer;	// 48 = 0x30
    CDUnknownBlockType _keychainAvailabilityTimerFactory;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000000843a
- (void).cxx_destruct;	// IMP=0x0000000000007710
@property(copy) CDUnknownBlockType keychainAvailabilityTimerFactory; // @synthesize keychainAvailabilityTimerFactory=_keychainAvailabilityTimerFactory;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000075ce
- (id)logIdentifier;	// IMP=0x0000000000007561
- (void)handleIdentityUpdateNotification:(id)arg1;	// IMP=0x0000000000007492
- (void)handleAccountChangedNotification:(id)arg1;	// IMP=0x00000000000073c3
- (id)waitForKeychainAvailability;	// IMP=0x00000000000070d5
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;	// IMP=0x00000000000070c6
- (id)waitForManateeAvailability;	// IMP=0x00000000000070ba
- (id)initWithContainer:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x0000000000006ffc
- (id)initWithContainer:(id)arg1;	// IMP=0x0000000000006f7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

