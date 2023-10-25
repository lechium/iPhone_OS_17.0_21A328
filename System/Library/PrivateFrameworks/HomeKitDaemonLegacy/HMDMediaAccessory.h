//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSDictionary, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessory
{
    HMDMediaAccessoryAdvertisement *_advertisement;	// 32 = 0x20
    HMDMediaProfile *_mediaProfile;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004b7586
- (void).cxx_destruct;	// IMP=0x00000000004b731e
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b724d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b718c
- (id)dumpSimpleState;	// IMP=0x00000000004b7087
- (id)dumpState;	// IMP=0x00000000004b6f82
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x00000000004b6f7c
- (void)addHostedAccessory:(id)arg1;	// IMP=0x00000000004b6f76
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004b6b0a
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000004b6a4f
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x00000000004b6a49
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x00000000004b6a43
- (long long)reachableTransports;	// IMP=0x00000000004b698c
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x00000000004b68f5
- (void)notifyConnectivityChangedWithReachabilityState:(_Bool)arg1;	// IMP=0x00000000004b687b
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x00000000004b6792
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000004b66ea
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;	// IMP=0x00000000004b64d4
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x00000000004b6332
- (id)transportReports;	// IMP=0x00000000004b632a
- (id)name;	// IMP=0x00000000004b62a3
- (_Bool)providesHashRouteID;	// IMP=0x00000000004b629b
- (void)removeAdvertisement:(id)arg1;	// IMP=0x00000000004b60e4
- (void)addAdvertisement:(id)arg1;	// IMP=0x00000000004b5f59
- (id)_createMediaProfile;	// IMP=0x00000000004b5f23
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x00000000004b5ee1
- (void)_registerForMessages;	// IMP=0x00000000004b5e15
- (unsigned long long)supportedTransports;	// IMP=0x00000000004b5e0a
- (id)init;	// IMP=0x00000000004b5d62
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000004b5aca
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
