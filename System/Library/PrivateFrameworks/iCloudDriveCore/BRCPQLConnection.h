//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@class NSString, br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;	// 16 = 0x10
    int _changeCount;	// 24 = 0x18
    double _flushInterval;	// 32 = 0x20
    _Bool _flushImmediately;	// 40 = 0x28
    _Bool _autovacuumInProgress;	// 41 = 0x29
    long long _changesOverride;	// 48 = 0x30
    _Bool _isReadonly;	// 56 = 0x38
    unsigned long long _vmStepsExecuted;	// 64 = 0x40
    NSString *_assertionPersonaIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000010d87
@property(retain, nonatomic) NSString *assertionPersonaIdentifier; // @synthesize assertionPersonaIdentifier=_assertionPersonaIdentifier;
@property(readonly, nonatomic) _Bool isReadonly; // @synthesize isReadonly=_isReadonly;
@property(readonly, nonatomic) unsigned long long vmStepsExecuted; // @synthesize vmStepsExecuted=_vmStepsExecuted;
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000010ca6
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0000000000010c05
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000010b85
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x0000000000010ae4
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000010a5a
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x00000000000109bd
- (id)fetch:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000010947
- (id)fetch:(id)arg1;	// IMP=0x00000000000108a3
- (_Bool)executeRaw:(id)arg1;	// IMP=0x0000000000010837
- (_Bool)execute:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x00000000000107c1
- (_Bool)execute:(id)arg1;	// IMP=0x000000000001071d
- (void)assertOnQueue;	// IMP=0x00000000000106dc
- (_Bool)_validateIsRunningWithCorrectPersona;	// IMP=0x00000000000105e3
- (void)autovacuumIfNeeded;	// IMP=0x0000000000010422
- (_Bool)needsAutovacuum;	// IMP=0x000000000001031f
- (long long)sizeInBytes;	// IMP=0x0000000000010284
- (void)brc_close;	// IMP=0x0000000000010151
- (_Bool)brc_closeWithError:(id *)arg1;	// IMP=0x000000000000fff0
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;	// IMP=0x000000000000ff78
- (_Bool)_shouldFlushWithChangeCount:(int)arg1;	// IMP=0x000000000000fd23
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fbf1
- (_Bool)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x000000000000fa42
- (_Bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000f827
- (_Bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000f694
- (id)fetchWithSlowStatementRadar:(id)arg1 objectWithConstructor:(CDUnknownBlockType)arg2 sql:(id)arg3;	// IMP=0x000000000000f453
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;	// IMP=0x000000000000f22e
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000f013
- (void)setProfilingHook:(CDUnknownBlockType)arg1;	// IMP=0x000000000000eecb
- (void)flushWithCheckPoint:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eda8
- (void)flushToMakeEditsVisibleToIPCReaders;	// IMP=0x000000000000ed61
- (_Bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000eb82
@property(nonatomic) _Bool profilingEnabled;
- (long long)changes;	// IMP=0x000000000000e41e
- (_Bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;	// IMP=0x000000000000e33e
- (void)_setLockedHandler;	// IMP=0x000000000000e01c
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db21
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000da18
- (id)init;	// IMP=0x000000000000da02

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;

@end
