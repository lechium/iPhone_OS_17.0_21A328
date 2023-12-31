//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject
{
    BRCAccountSessionFPFS *_session;	// 8 = 0x8
    _Bool _isClosed;	// 16 = 0x10
    _Bool _computingPurgable;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (double)accessTimeDeltaForUrgency:(int)arg1;	// IMP=0x00600000002db195
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)arg1;	// IMP=0x00600000002db126
- (void).cxx_destruct;	// IMP=0x00000000002db9f2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)totalSize;	// IMP=0x00000000002db950
- (unsigned long long)nonPurgeableSizeWithPurgeableSize:(unsigned long long)arg1;	// IMP=0x00000000002db92a
- (unsigned long long)_recursivelySizeDirectoryAtPath:(id)arg1;	// IMP=0x00000000002db65f
- (_Bool)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;	// IMP=0x00000000002db3d0
- (long long)cachedNonPurgeableSpace;	// IMP=0x00000000002db357
- (long long)cachedPurgeableSpaceForUrgency:(int)arg1;	// IMP=0x00000000002db28f
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;	// IMP=0x00000000002db215
- (int)urgencyForCacheDeleteUrgency:(int)arg1;	// IMP=0x00000000002db13a
- (long long)periodicReclaimSpace;	// IMP=0x00000000002dad35
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;	// IMP=0x00000000002daafd
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;	// IMP=0x00000000002da79d
- (void)_cleanFPCreationItemIdentifier;	// IMP=0x00000000002da58b
- (long long)_garbageCollectGroupContainersDownloadStage;	// IMP=0x00000000002da42e
- (void)_asyncAutovacuumIfNeeds:(id)arg1;	// IMP=0x00000000002da355
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;	// IMP=0x00000000002da2c7
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;	// IMP=0x00000000002d9f3c
- (long long)_fullVacuumIfPossible:(id)arg1;	// IMP=0x00000000002d9e82
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;	// IMP=0x00000000002d9ce2
- (long long)_dbSizeInBytes:(id)arg1;	// IMP=0x00000000002d9ba3
- (long long)_computeCiconiaSizeInBytes:(_Bool)arg1;	// IMP=0x00000000002d96f7
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d89df
- (void)close;	// IMP=0x00000000002d8986
- (id)initWithAccountSession:(id)arg1;	// IMP=0x00000000002d8514

@end

