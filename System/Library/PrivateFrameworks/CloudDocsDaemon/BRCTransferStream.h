//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCDeadlineSource, BRCSyncContext, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCTransferStream : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    BRCSyncContext *_syncContext;	// 16 = 0x10
    BRCDeadlineSource *_schedulingSource;	// 24 = 0x18
    long long _minSignalTime;	// 32 = 0x20
    NSMutableDictionary *_inFlightOpByID;	// 40 = 0x28
    NSObject<OS_dispatch_workloop> *_transferWorkloop;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;	// 56 = 0x38
    unsigned long long _inFlightSize;	// 64 = 0x40
    _Bool _isWaitingForTransferBatch;	// 72 = 0x48
    _Bool _hasReachedCap;	// 73 = 0x49
    _Atomic int _multipleItemsInteractiveSchedulingCount;	// 76 = 0x4c
    unsigned long long _maxCountOfBatchesInFlight;	// 80 = 0x50
    _Bool _isCancelled;	// 88 = 0x58
    CDUnknownBlockType _streamDidBecomeReadyToTransferRecords;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001b14b1
@property(readonly, nonatomic) unsigned long long inFlightSize; // @synthesize inFlightSize=_inFlightSize;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType streamDidBecomeReadyToTransferRecords; // @synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords;
- (void)suspend;	// IMP=0x00000000001b146f
- (void)close;	// IMP=0x00000000001b0f7e
- (void)cancel;	// IMP=0x00000000001b0de5
- (void)resume;	// IMP=0x00000000001b0dcf
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;	// IMP=0x00000000001b0d0c
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;	// IMP=0x00000000001b0bc4
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;	// IMP=0x00000000001b0779
- (void)_schedule;	// IMP=0x00000000001b0760
- (void)_scheduleOneBatchWithQoS:(long long)arg1;	// IMP=0x00000000001b05fb
- (void)addBatchOperation:(id)arg1;	// IMP=0x00000000001b04ac
- (void)_addBatchOperation:(id)arg1;	// IMP=0x00000000001afe6d
- (void)_evaluateCap;	// IMP=0x00000000001afc39
- (void)forceSchedulingPendingInteractiveTransfers;	// IMP=0x00000000001af4eb
- (void)endSchedulingMultipleItemsInteractively;	// IMP=0x00000000001af457
- (void)startSchedulingMultipleItemsInteractively;	// IMP=0x00000000001af432
- (void)_setReachedCap:(_Bool)arg1;	// IMP=0x00000000001af3e7
- (void)signal;	// IMP=0x00000000001af3d1
- (void)signalWithDeadline:(long long)arg1;	// IMP=0x00000000001af3ad
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 maxCountOfBatchesInFlight:(unsigned long long)arg4;	// IMP=0x00000000001af0fc
@property(readonly) NSArray *operations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

