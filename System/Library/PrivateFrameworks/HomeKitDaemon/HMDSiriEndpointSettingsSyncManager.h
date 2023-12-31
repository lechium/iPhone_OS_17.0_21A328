//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSNotificationCenter, NSObject, NSString;
@protocol HMDSiriEndpointSettingsSyncManagerDataSource, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointSettingsSyncManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDSiriEndpointSettingsSyncManagerDataSource> _dataSource;	// 16 = 0x10
    id <HMESubscriptionProviding> _subscriptionProvider;	// 24 = 0x18
    NSMutableSet *_homeUUIDsManagedByCurrentDevice;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000808ba8
+ (id)siriEndPointHomeKitBackedKeyPaths;	// IMP=0x0010000000808b78
- (void).cxx_destruct;	// IMP=0x0000000000806d81
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice; // @synthesize homeUUIDsManagedByCurrentDevice=_homeUUIDsManagedByCurrentDevice;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly) __weak id <HMDSiriEndpointSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000806b5d
- (id)readValueValueForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x0000000000806601
- (void)_matchingHomeforUUID:(id)arg1 accessoryUUID:(id)arg2 home:(id *)arg3 accessory:(id *)arg4;	// IMP=0x00000000008062d6
- (void)writeSettingValue:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 forKeyPath:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000805f1e
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000804f60
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x0000000000804f4b
- (void)_writeSetting:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x0000000000804d93
- (void)_synchronizeSettingsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000008048a0
- (void)handleAccessoryIsReachableNotification:(id)arg1;	// IMP=0x0000000000804460
- (void)handleHAPMediaProfileAddedNotification:(id)arg1;	// IMP=0x0000000000804020
- (void)handleCompositeSettingsControllerDidConfigureNotification:(id)arg1;	// IMP=0x0000000000803bcf
- (void)handleSiriEndPointAddedNotification:(id)arg1;	// IMP=0x0000000000803857
- (void)handleHomeAddedNotification:(id)arg1;	// IMP=0x000000000080370e
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x0000000000803361
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x00000000008031e6
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x000000000080281a
- (void)_updateManagedHomes;	// IMP=0x000000000080205a
- (void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x0000000000801fa7
- (void)registerForAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x0000000000801ee6
- (void)_stopManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000801d23
- (void)_beginManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000801b16
- (void)_stopManagingHome:(id)arg1;	// IMP=0x0000000000801933
- (void)_beginManagingHome:(id)arg1;	// IMP=0x0000000000801750
- (void)configure;	// IMP=0x000000000080149e
- (id)initWithDataSource:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000801372

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

