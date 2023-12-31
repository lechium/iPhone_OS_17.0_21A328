//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSRecursiveLock, NSSet, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface UpdatesManager_ObjC : NSObject
{
    _Bool _agentRequestedUpdateAll;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 9 = 0x9
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedTVProviderApps;	// 48 = 0x30
    NSSet *_tvProviderApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    TaskQueue *_taskQueue;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000001b3371
- (void).cxx_destruct;	// IMP=0x00200000001b41b7
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x00100000001b3de0
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x00100000001b3dda
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x00100000001b3dd4
- (void)verifyAllPendingUpdates;	// IMP=0x00100000001b3aec
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b3a7d
- (void)showPendingUpdatesBadge;	// IMP=0x00100000001b3a77
- (void)setupFollowingMigration;	// IMP=0x00100000001b3a71
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3995
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x00100000001b38e3
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3876
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b380e
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b37a1
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3739
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x00100000001b3733
- (void)performPostRestoreUpdatesCheck;	// IMP=0x00100000001b372d
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x00100000001b3727
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x00100000001b3721
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b3716
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x00100000001b3701
- (void)hidePendingUpdatesBadge;	// IMP=0x00100000001b36fb
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b36e6
- (void)getUpdateMetadataForBundleID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b36d6
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x00100000001b3624
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b35b7
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b35a1
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b355d
- (void)isTVProviderApp:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b354d
- (id)init;	// IMP=0x00100000001b33c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

