//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

@interface GEOPDPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    id <GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;	// 16 = 0x10
    id <GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 32 = 0x20
    NSMutableDictionary *_accessTimesDict;	// 40 = 0x28
    NSMutableOrderedSet *_recentlySeenPlaceHashes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000013383
@property(readonly, nonatomic) NSArray *serviceVersions;
- (void)cancelCleanupBlockSchedule;	// IMP=0x001000000001322d
- (void)runCleanupBlock:(CDUnknownBlockType)arg1 inSecondsFromNow:(long long)arg2;	// IMP=0x0010000000013042
- (long long)currentTime;	// IMP=0x0010000000013023
- (id)internalSerialQueue;	// IMP=0x001000000001300d
- (void)iterateAllHandleKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012f6b
- (void)iterateAllPhoneKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012ec9
- (void)iterateAllBasemapIdKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e27
- (void)iterateAllMUIDKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012d85
- (void)iterateAllKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012d6b
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012a8c
- (void)iterateHandlePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000129ea
- (void)iteratePhonePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012948
- (void)iterateBasemapIdPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000128a6
- (void)iterateMUIDPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012804
- (void)iterateAllPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000127ea
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012491
- (void)close;	// IMP=0x0010000000012424
- (void)_evictPlaceWithHash:(id)arg1;	// IMP=0x00100000000121a2
- (void)periodicCleanupAndAccessTimeUpdate;	// IMP=0x0010000000011b85
- (void)scheduleCleanup;	// IMP=0x0010000000011a7b
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;	// IMP=0x00100000000118fa
- (void)evictAllEntries;	// IMP=0x001000000001174b
- (void)deletePhoneNumberMapping;	// IMP=0x00100000000115bb
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x00100000000113d6
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0010000000011286
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011006
- (unsigned long long)_calculateFreeableSpace;	// IMP=0x0010000000010ede
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x0010000000010d9d
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010bcd
- (id)lookupIdentifierByPhoneNumber:(id)arg1;	// IMP=0x0010000000010650
- (void)lookupPlaceByHandle:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010256
- (void)lookupPlaceByIdentifier:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fbf0
- (void)lookupPlaceByPhoneNumber:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f7e4
- (void)lookupPlaceByRequest:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f257
- (void)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ec1c
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e5d2
- (void)storePlace:(id)arg1 forRequest:(id)arg2;	// IMP=0x001000000000e501
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e02e
- (void)trackPlace:(id)arg1;	// IMP=0x001000000000df78
- (id)_cacheKeyForHandle:(id)arg1;	// IMP=0x001000000000debd
- (id)_cacheKeysForPlace:(id)arg1 request:(id)arg2;	// IMP=0x001000000000db0a
- (void)_storePlace:(id)arg1 withHash:(id)arg2 forRequestKeys:(id)arg3;	// IMP=0x001000000000ce3b
- (_Bool)_meetsManifestVersionPolicyForPlace:(id)arg1;	// IMP=0x001000000000cb77
- (_Bool);	// IMP=0x001000000000c958
- (_Bool)_validateDBLocaleAndResetIfNecessary;	// IMP=0x001000000000c5ae
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000000c457
- (void)dealloc;	// IMP=0x001000000000c3e2
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;	// IMP=0x001000000000bf6d

@end

