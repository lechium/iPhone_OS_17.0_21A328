//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingNotificationRegistrationProviding;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingControllerManagerStateManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_homeUUIDToState;	// 16 = 0x10
    id <HMDCompositeSettingControllerManagerStateTransitionDelegate> _delegate;	// 24 = 0x18
    id <HMDCompositeSettingNotificationRegistrationProviding> _notificationRegistrationProvider;	// 32 = 0x20
    unsigned long long _notificationOptions;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    id <HMDCompositeSettingControllerManagerStateManagerDataSource> _dataSource;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000083f877
- (void).cxx_destruct;	// IMP=0x000000000083f7df
@property(readonly) __weak id <HMDCompositeSettingControllerManagerStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long notificationOptions; // @synthesize notificationOptions=_notificationOptions;
@property(readonly) id <HMDCompositeSettingNotificationRegistrationProviding> notificationRegistrationProvider; // @synthesize notificationRegistrationProvider=_notificationRegistrationProvider;
@property(readonly) __weak id <HMDCompositeSettingControllerManagerStateTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)stateForHomeUUID:(id)arg1;	// IMP=0x000000000083f6a9
- (id)logIdentifier;	// IMP=0x000000000083f659
- (void)_handleAccessoryRemovedNotification:(id)arg1;	// IMP=0x000000000083f3f6
- (void)_handleAccessoryLanguagesChangedNotification:(id)arg1;	// IMP=0x000000000083f187
- (void)_computeResidentStateChangeForHome:(id)arg1;	// IMP=0x000000000083edd3
- (void)_handleResidentDeviceUpdated:(id)arg1;	// IMP=0x000000000083ea8c
- (void)_handleSiriEndpointProfileCreation:(id)arg1;	// IMP=0x000000000083e7db
- (void)_handleSiriEndpointProfileSettingsUpdate:(id)arg1;	// IMP=0x000000000083e4ce
- (void)_handleHomeAdded:(id)arg1;	// IMP=0x000000000083e329
- (void)_handleCompositeSettingsControllerConfiguredNotification:(id)arg1;	// IMP=0x000000000083e088
- (void)_createStateForHomeUUIDIfNotExist:(id)arg1;	// IMP=0x000000000083df2c
- (void)_unregisterForNotifications;	// IMP=0x000000000083dee0
- (void)_registerForNotifications;	// IMP=0x000000000083dbc4
- (id)initWithDataSource:(id)arg1 notificationRegistrationProvider:(id)arg2 subscribeWithOptions:(unsigned long long)arg3 delegate:(id)arg4 uuid:(id)arg5;	// IMP=0x000000000083da97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

