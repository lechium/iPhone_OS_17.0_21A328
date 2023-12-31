//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DIVerificationSessionContext, NSMutableSet, NSString, NSXPCConnection;
@protocol DIVerificationServerSideProtocol;

__attribute__((visibility("hidden")))
@interface DIVClient : NSObject
{
    unsigned long long _state;	// 8 = 0x8
    NSXPCConnection *_serverConnection;	// 16 = 0x10
    DIVerificationSessionContext *_context;	// 24 = 0x18
    id <DIVerificationServerSideProtocol> _remoteObjectProxy;	// 32 = 0x20
    NSMutableSet *_disconnectionCallbacks;	// 40 = 0x28
    _Bool _isDisconnected;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000680e
- (id)createDaemonDisconnectedError;	// IMP=0x0000000000006796
- (void)confirmVerificationCompletedWithFeedback:(id)arg1;	// IMP=0x00000000000066a2
- (void)concludeVerification:(id)arg1;	// IMP=0x0000000000006627
- (void)invalidate;	// IMP=0x00000000000065d3
- (void)getVerificationResultWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000610a
- (void)shareVerificationResultWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005cfb
- (void)performVerificationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000058dc
- (void)configure:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005374
- (void)dealloc;	// IMP=0x000000000000529f
- (id)init;	// IMP=0x0000000000004a37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

