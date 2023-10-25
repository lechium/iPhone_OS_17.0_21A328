//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKContainer, CloudTabLocalStoreShim, CloudTabRemoteStore, CloudTabSQLiteStore, CloudTabSyncCoordinator, NSArray, NSMutableArray, NSString, WBSCloudKitContainerManateeObserver;
@protocol CloudTabSyncArbiterDelegate, OS_dispatch_queue;

@interface CloudTabSyncArbiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    CloudTabSQLiteStore *_cloudTabLocalStore;	// 24 = 0x18
    CloudTabRemoteStore *_remoteStore;	// 32 = 0x20
    CloudTabSyncCoordinator *_syncCoordinator;	// 40 = 0x28
    CloudTabLocalStoreShim *_localStoreShim;	// 48 = 0x30
    WBSCloudKitContainerManateeObserver *_containerManateeObserver;	// 56 = 0x38
    NSMutableArray *_syncCoordinatorDeterminationCompletionBlocks;	// 64 = 0x40
    CloudTabLocalStoreShim *_localStoreShimForManateeContainer;	// 72 = 0x48
    long long _currentManateeState;	// 80 = 0x50
    _Bool _manateeStateNeedsUpdate;	// 88 = 0x58
    _Bool _isWaitingForPCSIdentityUpdate;	// 89 = 0x59
    _Bool _determiningSyncCoordinator;	// 90 = 0x5a
    NSArray *_completionHandlersForCurrentDeviceFetchRequest;	// 96 = 0x60
    NSMutableArray *_completionHandlersForNextDeviceFetchRequest;	// 104 = 0x68
    id <CloudTabSyncArbiterDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000073eef
@property(nonatomic) __weak id <CloudTabSyncArbiterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getCachedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000073d8b
- (void)getCloudTabRemoteStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000073c4f
- (void)deleteDatabaseAndSyncDataForAccountChange;	// IMP=0x0010000000073b91
- (void)userAccountChanged;	// IMP=0x0010000000073a97
- (void)deleteCloudTabsZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000739ed
- (void)_fetchDevices;	// IMP=0x0010000000073525
- (void)fetchDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000733c8
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007312f
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072e96
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000072bab
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000728c0
- (void)_handleManateeErrorIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072594
- (id)_manateeErrorCode:(id)arg1;	// IMP=0x00100000000724e0
- (void)_pcsIdentitiesChangedNotification:(id)arg1;	// IMP=0x0010000000072306
- (void)_deleteCloudTabsZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000720fd
- (void)deleteDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071f45
- (void)_transitionCloudTabSyncCoordinatorToManateeState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000716e1
- (void)_determineCloudTabSyncCoordinatorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071391
@property(readonly, nonatomic) CKContainer *container;
- (void)dealloc;	// IMP=0x001000000007132c
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0010000000070e33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
