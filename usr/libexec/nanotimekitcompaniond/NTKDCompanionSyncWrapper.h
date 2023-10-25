//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYService;
@protocol NTKDSyncDelegate, OS_dispatch_queue;

@interface NTKDCompanionSyncWrapper : NSObject
{
    _Bool _resetSyncRequestedDuringSyncRestriction;	// 8 = 0x8
    _Bool _resumeWhenSyncRestrictionLifted;	// 9 = 0x9
    SYService *_syncService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncServiceQueue;	// 24 = 0x18
    _Bool _resetSyncRequested;	// 32 = 0x20
    unsigned long long _syncFailureCount;	// 40 = 0x28
    _Bool _syncBackoffOngoing;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncSerialQueue;	// 56 = 0x38
    _Bool _deltaSyncRequiredAfterBackoff;	// 64 = 0x40
    _Bool _resetSyncRequiredAfterBackoff;	// 65 = 0x41
    _Bool _isPrimary;	// 66 = 0x42
    id <NTKDSyncDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000032691
@property(nonatomic) __weak id <NTKDSyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x0010000000032586
- (id)dataFromChange:(id)arg1;	// IMP=0x0010000000032565
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00100000000323b6
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x0010000000031fcd
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x0010000000031f7c
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ada
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000000318a9
- (void)service:(id)arg1 incomingData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003157f
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x0010000000031430
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000031120
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x00100000000310a1
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000030f65
- (void)_reportProgressForMessage:(id)arg1 inSession:(id)arg2;	// IMP=0x0010000000030dbb
- (void)_resetBackoffPeriod;	// IMP=0x0010000000030d70
- (long long)_getNextSyncBackoffPeriod;	// IMP=0x0010000000030c91
- (void)_queue_requestSync:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000309e3
- (void)_queue_deltaSync_async;	// IMP=0x00100000000308c8
- (void)_queue_deltaSync;	// IMP=0x00100000000307f0
- (void)_queue_resetSync;	// IMP=0x00100000000306b6
- (void)sendOutOfBandMessage:(id)arg1 ofType:(long long)arg2;	// IMP=0x0010000000030399
- (void)requestDeltaSync;	// IMP=0x0010000000030338
- (void)requestResetSync;	// IMP=0x001000000003022e
- (void)suspend;	// IMP=0x00100000000301ab
- (void)resume;	// IMP=0x0010000000030008
- (void)dealloc;	// IMP=0x001000000002ff50
- (id)initAsPrimary:(_Bool)arg1;	// IMP=0x001000000002fd67
- (id)init;	// IMP=0x001000000002fd53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
