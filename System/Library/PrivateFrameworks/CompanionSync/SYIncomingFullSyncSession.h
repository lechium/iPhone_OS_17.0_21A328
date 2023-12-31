//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSObject;
@protocol OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYIncomingFullSyncSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;	// 8 = 0x8
    unsigned int _state;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 24 = 0x18
    _Bool canRestart;	// 32 = 0x20
    _Bool canRollback;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000000632b1
@property(readonly, nonatomic) NSObject<OS_os_activity> *sessionActivity; // @synthesize sessionActivity=_sessionActivity;
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x0000000000063290
- (_Bool)canRollback;	// IMP=0x000000000006327e
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000006326e
- (_Bool)canRestart;	// IMP=0x000000000006325c
- (void)_handleEndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ac6a5
- (void)_handleBatchChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ac67a
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000063126
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x00000000000626d0
- (void)_installStateListener;	// IMP=0x00000000000625b8
- (void)_processNextState;	// IMP=0x00000000000624ff
- (void)_sendEndSessionResponse:(id)arg1;	// IMP=0x00000000000ac64f
- (void)_continueProcessing;	// IMP=0x00000000000ac624
- (void)_sessionComplete;	// IMP=0x0000000000062426
- (void)_notifyErrorAndShutdown;	// IMP=0x00000000000622df
- (void)_cancelSession;	// IMP=0x000000000006218e
- (void)_sessionEnded;	// IMP=0x0000000000061f96
- (unsigned long long)protocolVersion;	// IMP=0x0000000000061f8b
- (_Bool)isSending;	// IMP=0x0000000000061f83
- (_Bool)isResetSync;	// IMP=0x0000000000061f7b
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x0000000000061e46
- (void)setState:(unsigned int)arg1;	// IMP=0x0000000000061cfc
- (unsigned int)state;	// IMP=0x0000000000061cec
- (id)initWithService:(id)arg1;	// IMP=0x0000000000061bfa

@end

