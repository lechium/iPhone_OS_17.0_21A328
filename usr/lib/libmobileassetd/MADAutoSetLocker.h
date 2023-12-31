//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoAssetPersisted, NSMutableDictionary, SUCoreLog;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoSetLocker : NSObject
{
    SUCoreLog *_logger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockerQueue;	// 16 = 0x10
    MADAutoAssetPersisted *_persistedState;	// 24 = 0x18
    NSMutableDictionary *_locksBySelector;	// 32 = 0x20
    NSMutableDictionary *_eliminateSelectors;	// 40 = 0x28
}

+ (void)forceGlobalUnlock:(id)arg1;	// IMP=0x006000000006cdff
+ (void)addClientLockReasons:(id)arg1 basedOnControl:(id)arg2;	// IMP=0x006000000006cdf9
+ (id)migrateMismatchedPersistedStateVersion:(id)arg1 forEntryID:(id)arg2 withMismatchedState:(id)arg3;	// IMP=0x006000000006adec
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)arg1;	// IMP=0x00600000000698c5
+ (id)lockedSelectorsForEliminate:(id)arg1;	// IMP=0x0060000000068789
+ (id)copyOfLocksBySelector;	// IMP=0x00600000000681f9
+ (id)newCurrentLockUsageForSelector:(id)arg1;	// IMP=0x00600000000670ec
+ (_Bool)endedAllPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;	// IMP=0x0060000000066ddc
+ (_Bool)endedPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;	// IMP=0x0060000000066dd4
+ (_Bool)endedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;	// IMP=0x0060000000066dcc
+ (_Bool)continuedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 continueError:(id *)arg5;	// IMP=0x0060000000066dc4
+ (_Bool)additionalLockedByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 lockError:(id *)arg5;	// IMP=0x0060000000066dbc
+ (_Bool)lockedByClient:(id)arg1 forAssetSetIdentifier:(id)arg2 forAtomicInstance:(id)arg3 forLockReason:(id)arg4 withUsagePolicy:(id)arg5 lockError:(id *)arg6;	// IMP=0x0060000000066db4
+ (id)autoAssetLocker;	// IMP=0x0060000000066d5f
- (void).cxx_destruct;	// IMP=0x000000000006d6e5
@property(retain, nonatomic) NSMutableDictionary *eliminateSelectors; // @synthesize eliminateSelectors=_eliminateSelectors;
@property(retain, nonatomic) NSMutableDictionary *locksBySelector; // @synthesize locksBySelector=_locksBySelector;
@property(readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState; // @synthesize persistedState=_persistedState;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue; // @synthesize lockerQueue=_lockerQueue;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)arg1;	// IMP=0x000000000006ccb6
- (id)summary;	// IMP=0x000000000006cbf9
- (id)description;	// IMP=0x000000000006cbe7
- (_Bool)_anyCurrentLocksForEliminate:(id)arg1;	// IMP=0x000000000006c15a
- (id)_refreshFilesystemMetadataLastInterest:(id)arg1;	// IMP=0x000000000006bde0
- (void)_logPersistedTableOfContents:(id)arg1;	// IMP=0x000000000006b5c9
- (void)_logPersistedRemovedEntry:(id)arg1 removedAssetLock:(id)arg2 forSelector:(id)arg3 message:(id)arg4;	// IMP=0x000000000006b201
- (void)_logPersistedEntry:(id)arg1 operation:(id)arg2 persistingAssetLock:(id)arg3 forSelector:(id)arg4 message:(id)arg5;	// IMP=0x000000000006adf4
- (_Bool)_endLockDecideUnlocked:(id)arg1;	// IMP=0x000000000006ad4a
- (void)_mergeContinuedLock:(id)arg1 intoExistingLock:(id)arg2;	// IMP=0x000000000006ac1c
- (void)_mergeAddedLock:(id)arg1 intoExistingLock:(id)arg2;	// IMP=0x000000000006aa93
- (void)_persistRemoveAssetLock:(id)arg1 removedAssetLock:(id)arg2 message:(id)arg3;	// IMP=0x000000000006a7b2
- (_Bool)_persistAssetLock:(id)arg1 operation:(id)arg2 forAssetLock:(id)arg3 message:(id)arg4;	// IMP=0x000000000006a46c
- (void)_removeAssetLock:(id)arg1 lastClient:(id)arg2 forSelector:(id)arg3 message:(id)arg4;	// IMP=0x0000000000069582
- (id)_assetIDOfLock:(id)arg1;	// IMP=0x0000000000067035
- (long long)_currentLockCountOfLock:(id)arg1;	// IMP=0x0000000000066dec
- (_Bool)_endLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;	// IMP=0x0000000000066de4
- (id)init;	// IMP=0x0000000000066bf6

@end

