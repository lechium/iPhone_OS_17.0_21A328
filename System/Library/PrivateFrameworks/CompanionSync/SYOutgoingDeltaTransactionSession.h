//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_os_activity> *_sessionActivity;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 32 = 0x20
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 40 = 0x28
    NSObject<OS_os_activity> *_changeWaitActivity;	// 48 = 0x30
    _SYMessageTimerTable *_timers;	// 56 = 0x38
    _Bool _canRestart;	// 64 = 0x40
    _Bool _canRollback;	// 65 = 0x41
    _Bool _cancelled;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x000000000001cdd9
- (_Bool)wasCancelled;	// IMP=0x000000000001cdc7
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x000000000001cdb7
- (_Bool)canRollback;	// IMP=0x000000000001cda5
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000001cd95
- (_Bool)canRestart;	// IMP=0x000000000001cd83
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001cd66
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001cceb
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000001cc20
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c553
- (void)_installStateListener;	// IMP=0x000000000001c43b
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;	// IMP=0x000000000001c390
- (void)_processNextState;	// IMP=0x000000000001c15b
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000001c076
- (void)_notifySessionComplete;	// IMP=0x000000000001be51
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x000000000001bab2
- (void)_fetchNextBatch;	// IMP=0x000000000001b56d
- (void)_waitForMessageWindow;	// IMP=0x000000000001b36f
- (void)_setupChangeConcurrency;	// IMP=0x000000000001b29f
- (unsigned long long)protocolVersion;	// IMP=0x000000000001b294
- (_Bool)isSending;	// IMP=0x000000000001b28c
- (_Bool)isResetSync;	// IMP=0x000000000001b284
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x000000000001b14c
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000001afc4
- (unsigned int)state;	// IMP=0x000000000001afb4
- (id)initWithService:(id)arg1;	// IMP=0x000000000001ac88

@end

