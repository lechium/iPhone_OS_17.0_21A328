//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDBackingStore, HMDResidentSyncManager, HMFTimer, NSNotificationCenter, NSString, NSUUID;
@protocol HMDAppleMediaDeviceAssociationControllerDataSource, HMDTimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaDeviceAssociationController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _busy;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    HMDResidentSyncManager *_residentSyncManager;	// 40 = 0x28
    HMDBackingStore *_backingStore;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    id <HMDAppleMediaDeviceAssociationControllerDataSource> _dataSource;	// 64 = 0x40
    id <HMDTimerProvider> _timerProvider;	// 72 = 0x48
    HMFTimer *_backoffTimer;	// 80 = 0x50
    long long _timerIntervalIndex;	// 88 = 0x58
    CDUnknownBlockType _mkfAppleMediaModelFinder;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000005150fd
- (void).cxx_destruct;	// IMP=0x0000000000513894
@property(copy) CDUnknownBlockType mkfAppleMediaModelFinder; // @synthesize mkfAppleMediaModelFinder=_mkfAppleMediaModelFinder;
@property long long timerIntervalIndex; // @synthesize timerIntervalIndex=_timerIntervalIndex;
@property(retain) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property __weak id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly) id <HMDAppleMediaDeviceAssociationControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly) HMDResidentSyncManager *residentSyncManager; // @synthesize residentSyncManager=_residentSyncManager;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)logIdentifier;	// IMP=0x0000000000513737
- (id)mkfAppleMediaAccessoryWithModelIdentifier:(id)arg1;	// IMP=0x0000000000513668
- (double)nextInterval;	// IMP=0x00000000005135b7
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000051338f
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000051334f
- (void)_setStatusBusy:(_Bool)arg1;	// IMP=0x000000000051331c
- (_Bool)_statusBusy;	// IMP=0x00000000005132f2
- (id)_deviceAssociationInfoFromProtoData:(id)arg1;	// IMP=0x00000000005131c5
- (void)_handleHMDAppleMediaDeviceAssociationPushMessage:(id)arg1;	// IMP=0x000000000051310d
- (void)_updateIdsAddressWithAccessoryUUID:(id)arg1 idsIdentifier:(id)arg2 idsDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000512f67
- (void)_handlePrimaryResidentDeviceAddressUpdate;	// IMP=0x0000000000512cce
- (void)_startRetryTimer;	// IMP=0x0000000000512a62
- (void)_pushDeviceAddress;	// IMP=0x0000000000512583
- (void)_shouldPushDeviceAddressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000512230
- (void)_pushDeviceAddressIfNeeded;	// IMP=0x000000000051215e
- (_Bool)_currentDeviceHasDeviceAddress;	// IMP=0x000000000051202c
- (void)_process;	// IMP=0x0000000000511e50
- (void)_handlePrimaryChange:(id)arg1;	// IMP=0x0000000000511cd5
- (void)handleTransactionObjectUpdated;	// IMP=0x0000000000511bb4
- (void)_handleDeviceUpdatedNotification:(id)arg1;	// IMP=0x0000000000511885
- (void)_handleAppleAccountManagerResolvedNotification:(id)arg1;	// IMP=0x000000000051170a
- (void)_registerForNotifications:(id)arg1;	// IMP=0x000000000051149a
- (void)_registerForMessages:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000051128a
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000051106c
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 residentSyncManager:(id)arg4 backingStore:(id)arg5 notificationCenter:(id)arg6 dataSource:(id)arg7;	// IMP=0x0000000000510f10
- (id)initWithHome:(id)arg1 accessory:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000510bf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

