//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYIncomingSyncAllObjectsSession
{
    NSMutableArray *_allObjectsAsData;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    _Bool canRestart;	// 24 = 0x18
    _Bool canRollback;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000004925
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x0000000000004915
- (_Bool)canRollback;	// IMP=0x0000000000004903
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x00000000000048f3
- (_Bool)canRestart;	// IMP=0x00000000000048e1
- (void)_continueProcessing;	// IMP=0x0000000000004009
- (void)_sendEndSessionResponse:(id)arg1;	// IMP=0x0000000000003f9c
- (id)initWithService:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003e48

@end

