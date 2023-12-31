//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapDataSubscriptionManager, GEOObserverHashTable, NSArray, NSMutableSet;

@interface MapsOfflineUIHelper : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    int _subscriptionsChangedNotifyToken;	// 16 = 0x10
    _Bool _usingOfflineMaps;	// 20 = 0x14
    NSArray *_subscriptions;	// 24 = 0x18
    unsigned long long _totalOfflineDataSize;	// 32 = 0x20
    GEOMapDataSubscriptionManager *_subscriptionManager;	// 40 = 0x28
    NSArray *_subscriptionInfos;	// 48 = 0x30
    unsigned long long _outOfDateSubscriptionsCount;	// 56 = 0x38
    unsigned long long _fullyLoadedSubscriptionsCount;	// 64 = 0x40
    NSMutableSet *_updatingSubscriptions;	// 72 = 0x48
    unsigned long long _expiredSubscriptionsCount;	// 80 = 0x50
}

+ (id)sharedHelper;	// IMP=0x002000000083afda
+ (long long)idealDisplayAspectRatio:(id)arg1;	// IMP=0x001000000083af64
- (void).cxx_destruct;	// IMP=0x00200000008410d9
@property(nonatomic) unsigned long long expiredSubscriptionsCount; // @synthesize expiredSubscriptionsCount=_expiredSubscriptionsCount;
@property(retain, nonatomic) NSMutableSet *updatingSubscriptions; // @synthesize updatingSubscriptions=_updatingSubscriptions;
@property(nonatomic) unsigned long long fullyLoadedSubscriptionsCount; // @synthesize fullyLoadedSubscriptionsCount=_fullyLoadedSubscriptionsCount;
@property(nonatomic) unsigned long long outOfDateSubscriptionsCount; // @synthesize outOfDateSubscriptionsCount=_outOfDateSubscriptionsCount;
@property(copy, nonatomic) NSArray *subscriptionInfos; // @synthesize subscriptionInfos=_subscriptionInfos;
@property(retain, nonatomic) GEOMapDataSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(nonatomic) unsigned long long totalOfflineDataSize; // @synthesize totalOfflineDataSize=_totalOfflineDataSize;
@property(copy, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(nonatomic, getter=isUsingOfflineMaps) _Bool usingOfflineMaps; // @synthesize usingOfflineMaps=_usingOfflineMaps;
- (void)_captureDisplayDownloadMapsAlertWithType:(long long)arg1;	// IMP=0x0010000000841016
- (id)alertControllerForInsufficientDiskSpaceForDownloadSize:(long long)arg1;	// IMP=0x0010000000840995
- (id)alertControllerForCellularUpdateConfirmationForSize:(long long)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000008405d1
- (id)alertControllerForCellularDownloadConfirmationForRegionName:(id)arg1 size:(long long)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000083fda2
- (id)alertControllerForAttemptedAddCollection;	// IMP=0x001000000083fb21
- (id)alertControllerForAttemptedAddShortcut;	// IMP=0x001000000083f8a0
- (id)alertControllerForAttemptedShowMyShortcut;	// IMP=0x001000000083f61f
- (id)alertControllerForAttemptedRegionDownload;	// IMP=0x001000000083f23e
- (id)alertControllerForAttemptedDataManagementDisplay;	// IMP=0x001000000083f037
- (id)_osUpdateRequiredAlert;	// IMP=0x001000000083ed59
- (long long)cellularBehaviorForDownloadOfSize:(long long)arg1 forForcedDownload:(_Bool)arg2;	// IMP=0x001000000083ec94
- (id)subscriptionInfoForRegion:(id)arg1;	// IMP=0x001000000083e95d
- (_Bool)isRegionDownloaded:(id)arg1 requireFullyDownloaded:(_Bool)arg2 coverageRequirement:(double)arg3;	// IMP=0x001000000083e5ce
- (_Bool)isRegionDownloaded:(id)arg1 requireFullyDownloaded:(_Bool)arg2;	// IMP=0x001000000083e565
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000083dd9d
- (void)removeKVOForSubscriptionInfo:(id)arg1;	// IMP=0x001000000083dbb6
- (void)addKVOForSubscriptionInfo:(id)arg1;	// IMP=0x001000000083d9c5
- (void)_updateTotalDataSize;	// IMP=0x001000000083d639
@property(readonly, nonatomic) _Bool hasExpiredSubscriptions;
- (void)_updateExpiredSubscriptionsCount;	// IMP=0x001000000083d4bf
- (void)_reloadSubscriptionInfosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000083c630
- (void)_reloadSubscriptions;	// IMP=0x001000000083c5f3
- (void)forceUpdateAllSubscriptionsWithMode:(unsigned long long)arg1;	// IMP=0x001000000083c5a2
@property(readonly, nonatomic) _Bool hasSubscriptionsBeingUpdated;
- (void)_stoppedUpdatingSubscription:(id)arg1;	// IMP=0x001000000083c463
- (void)_startedUpdatingSubscription:(id)arg1;	// IMP=0x001000000083c3ac
@property(readonly, nonatomic) _Bool hasSubscriptionsNeedingUpdate;
@property(readonly, nonatomic) _Bool hasFullyLoadedSubscriptions;
- (void)_postSubscriptionsDidChangeNotification;	// IMP=0x001000000083c2b8
- (void)_subscriptionsDidChange;	// IMP=0x001000000083c25a
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000083c1b2
- (void)updateName:(id)arg1 forSubscriptionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000083c056
- (void)updateRegion:(id)arg1 forSubscriptionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000083bef2
- (void)restoreExpiredSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000083bc6a
- (void)resumeDownloadForSubscriptionWithIdentifier:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000083bbf3
- (void)resumeDownloadForSubscriptionInfo:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000083bb40
- (void)pauseDownloadForSubscriptionInfo:(id)arg1;	// IMP=0x001000000083ba92
- (void)addSubscriptionWithRegion:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000083b501
- (void)removeObserver:(id)arg1;	// IMP=0x001000000083b4eb
- (void)addObserver:(id)arg1;	// IMP=0x001000000083b4d5
- (void)fetchAllSubscriptionInfosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000083b4c3
@property(readonly, nonatomic, getter=isUsingForcedOfflineMaps) _Bool usingForcedOfflineMaps;
- (void)_offlineServiceStateChanged;	// IMP=0x001000000083b461
- (void)_updateUsingOfflineMaps;	// IMP=0x001000000083b3fc
- (void)dealloc;	// IMP=0x001000000083b269
- (void)_commonInit;	// IMP=0x001000000083b07b
- (id)init;	// IMP=0x001000000083b02f

@end

