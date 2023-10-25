//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APFileSystemAdapter, APUnfairRecursiveLock, NSCache, NSMapTable, NSObject, NSString;
@protocol OS_dispatch_source;

@interface APCacheStore
{
    unsigned long long _diagnosticsMemoryCacheHits;	// 8 = 0x8
    unsigned long long _diagnosticsOperations;	// 16 = 0x10
    unsigned long long _diagnosticsLiveObjectHits;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_diagnostics_memory_event_source;	// 32 = 0x20
    double _diagnosticsInterval;	// 40 = 0x28
    APFileSystemAdapter *_fileStorage;	// 48 = 0x30
    NSCache *_memoryCache;	// 56 = 0x38
    NSMapTable *_liveObjectsTracker;	// 64 = 0x40
    APUnfairRecursiveLock *_lock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000f6327
@property(readonly, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMapTable *liveObjectsTracker; // @synthesize liveObjectsTracker=_liveObjectsTracker;
@property(readonly, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) APFileSystemAdapter *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void)_printCacheStatistics;	// IMP=0x00100000000f5db1
- (void)enableDiagnosticsWithInterval:(double)arg1;	// IMP=0x00100000000f5b0c
- (id)enumerateIDsWithExtension:(id)arg1;	// IMP=0x00100000000f5a3d
- (void)evictObjectFromMemoryCacheForKey:(id)arg1;	// IMP=0x00100000000f590d
- (_Bool)isObjectAliveForKey:(id)arg1;	// IMP=0x00100000000f57fb
- (_Bool)_executeOperation:(id)arg1;	// IMP=0x00100000000f5753
- (void)executeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f56dd
- (id)createTransaction;	// IMP=0x00100000000f56a7
- (void)touchObjectForKey:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000000f5576
- (void)touchObjectForKey:(id)arg1;	// IMP=0x00100000000f5562
- (void)setObject:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;	// IMP=0x00100000000f53f9
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f53e4
- (void)removeObjectForKey:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000000f52ef
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00100000000f52db
- (id)_objectForKey:(id)arg1 ignoreKeys:(id)arg2;	// IMP=0x00100000000f4f2b
- (id)objectForKey:(id)arg1 ignoreKeys:(id)arg2;	// IMP=0x00100000000f4e1e
- (id)objectForKey:(id)arg1;	// IMP=0x00100000000f4e0a
- (_Bool)_hasObjectForKey:(id)arg1;	// IMP=0x00100000000f4d42
- (_Bool)hasObjectForKey:(id)arg1;	// IMP=0x00100000000f4c5f
- (id)initWithTotalCostLimit:(long long)arg1;	// IMP=0x00100000000f4be0
- (id)initWithFileStorage:(id)arg1 memoryCache:(id)arg2;	// IMP=0x00100000000f4ae6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
