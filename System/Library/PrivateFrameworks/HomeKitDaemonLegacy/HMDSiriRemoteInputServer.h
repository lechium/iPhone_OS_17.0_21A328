//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface HMDSiriRemoteInputServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcServer;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcConnection;	// 24 = 0x18
    NSHashTable *_siriSessions;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000045db0f
- (void).cxx_destruct;	// IMP=0x000000000045da9f
@property(retain, nonatomic) NSHashTable *siriSessions; // @synthesize siriSessions=_siriSessions;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x000000000045d860
- (void)handleStopStreamMsg:(id)arg1;	// IMP=0x000000000045d7a4
- (void)handleStartStreamMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000000045d6be
- (void)handleCheckInMsg:(id)arg1;	// IMP=0x000000000045d5f7
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000000045d403
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;	// IMP=0x000000000045d2bb
- (void)handleMsg:(id)arg1;	// IMP=0x000000000045d009
- (void)handleConnectionEvent:(id)arg1;	// IMP=0x000000000045ce4b
- (void)handleDisconnection;	// IMP=0x000000000045cc20
- (void)handleConnection:(id)arg1;	// IMP=0x000000000045c849
- (void)handleServerEvent:(id)arg1;	// IMP=0x000000000045c72e
- (void)invalidate;	// IMP=0x000000000045c5a0
- (void)deregisterSiriSession:(id)arg1;	// IMP=0x000000000045c369
- (_Bool)registerSiriSession:(id)arg1;	// IMP=0x000000000045c10f
- (void)dealloc;	// IMP=0x000000000045c00a
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000045bd46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

