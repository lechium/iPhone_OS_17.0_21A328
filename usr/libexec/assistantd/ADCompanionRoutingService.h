//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ADCompanionRoutingService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_pendingCallResultBlocks;	// 16 = 0x10
    _Bool _isInCall;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a37b2
- (void)_processPendingCallResultBlocks;	// IMP=0x00100000000a35ee
- (void)_callStateDidChange:(id)arg1;	// IMP=0x00100000000a359c
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000000a3284
- (void)_handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a2f30
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a2e15
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000000a2e0d
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000000a29df
- (id)domains;	// IMP=0x00100000000a2905
- (id)handle;	// IMP=0x00100000000a28fc
- (id)init;	// IMP=0x00100000000a27ed

@end

