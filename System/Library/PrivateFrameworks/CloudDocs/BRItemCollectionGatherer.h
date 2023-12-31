//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRWatchingConfiguration, NSData, NSMetadataQuery, NSMutableDictionary, NSMutableSet, NSPredicate, NSString;
@protocol BRItemCollectionGathererDelegate, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRItemCollectionGatherer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_itemIDToItemCollectionMap;	// 16 = 0x10
    id <BRItemCollectionGathererDelegate> _delegate;	// 24 = 0x18
    NSMetadataQuery *_query;	// 32 = 0x20
    NSPredicate *_predicate;	// 40 = 0x28
    BRWatchingConfiguration *_config;	// 48 = 0x30
    NSMutableSet *_watchedAppLibraryFPItemIDs;	// 56 = 0x38
    NSMutableSet *_waitingToBeGatheredCollections;	// 64 = 0x40
    NSMutableSet *_collectionsSet;	// 72 = 0x48
    NSMutableDictionary *_itemOwnersMap;	// 80 = 0x50
    _Bool _finishedInitialGathering;	// 88 = 0x58
    NSMutableSet *_boostedAppLibraries;	// 96 = 0x60
    NSMutableDictionary *_failureCountByItemID;	// 104 = 0x68
    NSData *_perAppAccountIdentifier;	// 112 = 0x70
    id <NSObject> _accountTokenDidChangeNotificationObserver;	// 120 = 0x78
    unsigned long long _appLibrariesLookupAttempts;	// 128 = 0x80
    _Bool _finishedLookingUpAppLibraries;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000008db27
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;	// IMP=0x000000000008d2a6
- (void)collection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x000000000008c7d4
- (void)collectionDidFinishGathering:(id)arg1;	// IMP=0x000000000008c366
- (void)dataForCollectionShouldBeReloaded:(id)arg1 deleteItemsWithIDs:(id)arg2;	// IMP=0x000000000008c154
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x000000000008c102
- (_Bool)_isItemOwnedByAnyCollection:(id)arg1;	// IMP=0x000000000008c0b6
- (unsigned long long)_itemID:(id)arg1 wasDeletedByCollection:(id)arg2;	// IMP=0x000000000008bf79
- (unsigned long long)_itemID:(id)arg1 becameOwnedByCollection:(id)arg2;	// IMP=0x000000000008beae
- (void)_removeCollectionFromGatherSet:(id)arg1;	// IMP=0x000000000008bccf
- (_Bool)_signalDelegateIfNeededOnFinishGathering;	// IMP=0x000000000008bbff
- (void)_queueSignalDelegateIfNeededOnFinishGathering;	// IMP=0x000000000008bb9e
- (void)resumeWatching;	// IMP=0x000000000008b9ad
- (void)pauseWatchingWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008b766
- (void)enableUpdates;	// IMP=0x000000000008b556
- (void)disableUpdates;	// IMP=0x000000000008b346
- (void)invalidate;	// IMP=0x000000000008b332
- (void)_invalidateAndNotifyDelegate:(_Bool)arg1;	// IMP=0x000000000008b08a
- (void)_unboostApplibrariesIfNeeded;	// IMP=0x000000000008ace7
- (void)_stopWatchingItemIDRecusively:(id)arg1 itemIDsInItem:(id)arg2;	// IMP=0x000000000008a6b4
- (void)_startWatchingNewSubItem:(id)arg1;	// IMP=0x000000000008a60a
- (void)_startWatchingRootItemWithConfig:(id)arg1;	// IMP=0x000000000008a3d0
- (void)startWatchingRootItemWithScopes:(id)arg1;	// IMP=0x000000000008a346
- (void)_startWatchingAppLibraries:(id)arg1;	// IMP=0x0000000000089d21
- (void)_startWatchingURLs:(id)arg1;	// IMP=0x00000000000895f5
- (void)_boostAppLibraryOfItemIfNeeded:(id)arg1;	// IMP=0x000000000008939c
- (id)_getAppLibraryURLFromConfig:(id)arg1;	// IMP=0x00000000000892da
- (_Bool)_buildCollectionOnItemIfPossible:(id)arg1;	// IMP=0x000000000008914f
- (_Bool)_canWatchItem:(id)arg1;	// IMP=0x0000000000088f1b
- (void)_addItemCollectionOnItem:(id)arg1;	// IMP=0x0000000000088826
- (void)_startObservingAccountTokenDidChangeNotification;	// IMP=0x000000000008800b
- (void)_stopObservingAccountTokenDidChangeNotification;	// IMP=0x0000000000087f3b
@property(readonly, copy) NSString *description;
- (id)test_getQueue;	// IMP=0x0000000000087f08
- (id)initWithDelegate:(id)arg1 query:(id)arg2;	// IMP=0x0000000000087d4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

