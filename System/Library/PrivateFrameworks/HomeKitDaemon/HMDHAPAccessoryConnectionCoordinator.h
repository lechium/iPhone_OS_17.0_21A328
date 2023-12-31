//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryConnectionCoordinator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000002f6bfc
- (void).cxx_destruct;	// IMP=0x00000000002f6bd6
- (id)logIdentifier;	// IMP=0x00000000002f6b5c
- (void)_enableDisconnectOnIdleWithAccessories;	// IMP=0x00000000002f697a
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(_Bool)arg1;	// IMP=0x00000000002f65ff
- (void)evaluateAccessoryConnectionStatus;	// IMP=0x00000000002f630a
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000002f6233
- (void)handleResidentChangedOnNonResident;	// IMP=0x00000000002f6064
- (void)handleCurrentResidentChanged:(id)arg1;	// IMP=0x00000000002f5ecd
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg1;	// IMP=0x00000000002f5df6
- (void)handleResidentUpdated:(id)arg1;	// IMP=0x00000000002f5d20
- (void)handleResidentAddRemove:(id)arg1;	// IMP=0x00000000002f5bdb
- (void)handleResidentStatusChanged:(id)arg1;	// IMP=0x00000000002f5ac9
- (void)configureWithIsResidentCapable:(_Bool)arg1;	// IMP=0x00000000002f5872
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000002f57d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

