//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/WBSCloudTabStore.h>

@class NSArray, NSHashTable, NSMutableArray, NSObject, NSString, NSUUID, WBSEncryptedCloudKeyValueStore;
@protocol CloudTabStoreDelegate, OS_dispatch_queue;

@interface CloudTabStore : WBSCloudTabStore
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;	// 24 = 0x18
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;	// 32 = 0x20
    _Bool _hasInitiatedFetchOfCloudKitDataAtLeastOnce;	// 40 = 0x28
    _Bool _hasCompletedFetchOfCloudKitDataAtLeastOnce;	// 41 = 0x29
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;	// 48 = 0x30
    _Bool _didAttemptToCloseAtLeastOneTab;	// 56 = 0x38
    _Bool __cloudKitDataNeedsFetching;	// 57 = 0x39
    id <CloudTabStoreDelegate> _delegate;	// 64 = 0x40
}

+ (id)sharedCloudTabStore;	// IMP=0x0020000000001e92
- (void).cxx_destruct;	// IMP=0x002000000000589d
@property(setter=_setCloudKitDataNeedsFetching:) _Bool _cloudKitDataNeedsFetching; // @synthesize _cloudKitDataNeedsFetching=__cloudKitDataNeedsFetching;
@property(nonatomic) __weak id <CloudTabStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_closeRequestedTabIfPossible:(id)arg1;	// IMP=0x00100000000056ea
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;	// IMP=0x00100000000055a3
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;	// IMP=0x0010000000005453
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;	// IMP=0x001000000000531e
- (id)_storeForIdentifier:(long long)arg1;	// IMP=0x00100000000052e2
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)arg1 error:(id)arg2;	// IMP=0x00100000000051ec
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)arg1;	// IMP=0x001000000000519a
- (id)_currentDeviceUUID;	// IMP=0x0010000000005181
- (_Bool)canSaveCloudTabsForCurrentDevice;	// IMP=0x001000000000516f
- (_Bool)cloudTabsAreEnabled;	// IMP=0x00100000000050fc
- (_Bool)_shouldUseCloudKitForSavingCurrentDevice;	// IMP=0x00100000000050ea
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1 syncCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004a69
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1;	// IMP=0x0010000000004a55
- (void)_saveCurrentDeviceCloudTabs:(id)arg1 syncCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000453b
- (void)saveCurrentDeviceCloudTabs:(id)arg1;	// IMP=0x0010000000004527
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000413e
- (void)_removeConflictingDevice;	// IMP=0x00100000000038de
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000038a4
- (void)clearTabsForCurrentDevice;	// IMP=0x0010000000003890
- (void)_clearAllDevices;	// IMP=0x0010000000003522
- (_Bool)closeAllTabsOnDevice:(id)arg1;	// IMP=0x00100000000034cc
- (_Bool)closeTabs:(id)arg1 onDevice:(id)arg2;	// IMP=0x0010000000003476
- (_Bool)closeTab:(id)arg1 onDevice:(id)arg2;	// IMP=0x0010000000003420
- (void)_callFetchCloudKitDataCompletionHandlers;	// IMP=0x00100000000032d5
- (void)_waitForInitialCloudKitFetchToComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003080
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;	// IMP=0x0010000000002fc0
- (void)synchronizeCloudTabDevices;	// IMP=0x0010000000002d0e
- (id)syncedCloudTabDevicesUsingFilter:(_Bool)arg1;	// IMP=0x0010000000002976
- (id)syncedCloudTabDevices;	// IMP=0x001000000000295f
@property(readonly, copy, nonatomic) NSArray *allSyncedCloudTabDevices;
- (id)currentDevice;	// IMP=0x001000000000269a
@property(readonly, nonatomic) NSUUID *currentDeviceUUID;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)arg1;	// IMP=0x0010000000002442
- (void)addCloudTabsObserver:(id)arg1;	// IMP=0x0010000000002425
- (void)_cloudKitDataDidUpdateOnServer:(id)arg1;	// IMP=0x00100000000023d1
- (void)_userRequestsStoreDidUpdate:(id)arg1;	// IMP=0x001000000000239c
- (void)_syncedDevicesStoreDidUpdate:(id)arg1;	// IMP=0x0010000000002367
- (void)_cloudTabsEnabledDidChange;	// IMP=0x00100000000022da
- (void)stopObservingTabStoreStateChanges;	// IMP=0x001000000000223a
- (void)startObservingTabStoreStateChanges;	// IMP=0x0010000000002019
- (id)init;	// IMP=0x0010000000001ee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
