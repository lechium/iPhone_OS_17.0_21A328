//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue
{
    CPLPrequeliteVariable *;	// 8 = 0x8
    CPLPrequeliteVariable *_nextPosition;	// 16 = 0x10
    _Bool _recreatedDownloadQueueIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000592e9
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000000591dd
- (id)statusPerScopeIndex;	// IMP=0x0010000000059159
- (id)status;	// IMP=0x0010000000058d88
- (id)recordsDesignation;	// IMP=0x0010000000058d7b
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;	// IMP=0x0010000000058ccb
- (unsigned long long)countOfQueuedDownloadTasks;	// IMP=0x0010000000058cb4
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;	// IMP=0x0010000000058c03
- (id)enumeratorForDownloadedResources;	// IMP=0x0010000000058a1c
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000058898
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;	// IMP=0x00100000000587b2
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x001000000005812b
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000057f88
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000057ddc
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00100000000578fe
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000572b2
- (id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(_Bool)arg2;	// IMP=0x00100000000570fa
- (_Bool)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056f5d
- (_Bool)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;	// IMP=0x0010000000056ea5
- (unsigned long long)newTaskIdentifier;	// IMP=0x0010000000056d4c
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000056c34
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000565bc
- (_Bool)initializeStorage;	// IMP=0x0010000000056496
- (_Bool)_createResourceTypeAndStatusIndex;	// IMP=0x0010000000056439
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000056336

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

