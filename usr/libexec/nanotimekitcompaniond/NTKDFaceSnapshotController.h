//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NTKComplicationCollection, NTKFaceSnapshotter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NTKDFaceSnapshotController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;	// 8 = 0x8
    NSMutableArray *_snapshotKeysWithBlankComplications;	// 16 = 0x10
    NSMutableDictionary *_snapshotContexts;	// 24 = 0x18
    NTKComplicationCollection *_complicationCollection;	// 32 = 0x20
    _Bool _needToUpdateSnapshotsForFacesWithThirdPartyComplications;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSRecursiveLock *_observersLock;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_setImageForKeyOperationsCount;	// 64 = 0x40
    NSArray *_currentSnapshots;	// 72 = 0x48
    NSMutableArray *_currentSnapshotCompletions;	// 80 = 0x50
    NSMutableArray *_pendingSnapshots;	// 88 = 0x58
    NSMutableArray *_pendingSnapshotCompletions;	// 96 = 0x60
    NTKFaceSnapshotter *_snapshotter;	// 104 = 0x68
    NSOperationQueue *_xpcSnapshotOperationQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000016d06
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_writeImageToDisk:(id)arg1 imageName:(id)arg2;	// IMP=0x0010000000016c1c
- (id)_preferencesKeyForCollectionStore:(id)arg1;	// IMP=0x0010000000016b41
- (void)_endSnapshottingActivityDidTakeSnapshot:(_Bool)arg1;	// IMP=0x00100000000169cc
- (void)_startSnapshottingActivity;	// IMP=0x00100000000168fb
- (void)_queue_snapshotFaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001612b
- (void)_queue_updateSnapshots:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000156b5
- (void)_queue_updateSnapshotForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x00100000000155bf
- (void)_queue_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x00100000000154b2
- (void)_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x00100000000153da
- (void)_enumerateRemoteComplicationsForFace:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000152a9
- (void)_enumerateAllFacesForDeviceUUID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014feb
- (void)_loadComplicationCollection;	// IMP=0x0010000000014f32
- (_Bool)_snapshotExistsForKey:(id)arg1;	// IMP=0x0010000000014eab
- (void)_onObserverQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014dfd
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014d4f
- (id)_currentContext;	// IMP=0x0010000000014d36
- (_Bool)_queue_cleanCacheExcludingKeys:(id)arg1;	// IMP=0x001000000001498e
- (_Bool)_queue_cleanCache;	// IMP=0x001000000001460b
- (_Bool)_queue_cleanSnapshotKeysWithBlankComplications;	// IMP=0x00100000000144dd
- (_Bool)_queue_cleanContexts;	// IMP=0x00100000000143af
- (id)_queue_snapshotObjectsForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x0010000000013eba
- (id)_queue_snapshotObjectsForFace:(id)arg1;	// IMP=0x0010000000013ea6
- (id)_queue_allSnapshotObjects;	// IMP=0x001000000001325e
- (void)complicationCollectionDidLoad:(id)arg1;	// IMP=0x0010000000013055
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;	// IMP=0x0010000000012ce9
- (_Bool)_modernSnapshottingEnabledForStore:(id)arg1;	// IMP=0x0010000000012ce1
- (void)collectionStore:(id)arg1 didUpgradeFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x0010000000012bb2
- (void)collectionStore:(id)arg1 didRemoveFaceOfStyle:(long long)arg2 forUUID:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x0010000000012b30
- (void)collectionStore:(id)arg1 didUpdateOrderedUUIDs:(id)arg2 seqId:(id)arg3;	// IMP=0x0010000000012ad7
- (void)collectionStore:(id)arg1 didUpdateSelectedUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x001000000001298b
- (void)collectionStore:(id)arg1 loadOrderedUUIDs:(id)arg2 selectedUUID:(id)arg3 facesByUUID:(id)arg4 seqId:(id)arg5 acknowledge:(CDUnknownBlockType)arg6;	// IMP=0x0010000000012769
- (void)collectionStore:(id)arg1 didAddFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x001000000001263a
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withResourceDirectory:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x00100000000124ca
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withConfiguration:(id)arg3 seqId:(id)arg4;	// IMP=0x001000000001237e
- (void)collectionStoreWillBePurged:(id)arg1;	// IMP=0x001000000001226f
- (void)collectionStoreHasBeenCreated:(id)arg1;	// IMP=0x001000000001211a
- (void)_notifyFaceSnapshotChangedForKey:(id)arg1;	// IMP=0x0010000000011e84
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011d7f
- (void)queue_updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010b3b
- (void)updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010a63
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010643
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000eff6
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ef3c
- (void)updateSnapshotForFace:(id)arg1;	// IMP=0x001000000000ef28
- (void)_queue_updateAllSnapshots;	// IMP=0x001000000000ec2b
- (void)updateAllSnapshots;	// IMP=0x001000000000ebc9
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000eadd
- (void)addObserver:(id)arg1;	// IMP=0x001000000000e9f1
- (void)dealloc;	// IMP=0x001000000000e8db
- (id)init;	// IMP=0x001000000000d9b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

