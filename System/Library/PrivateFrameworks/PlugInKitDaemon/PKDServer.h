//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, PKDUserPrefs;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PKDServer
{
    struct os_unfair_lock_s _holdLock;	// 8 = 0x8
    unsigned int _verbose;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_mainQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_service;	// 32 = 0x20
    PKDUserPrefs *_userPrefs;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigSource;	// 48 = 0x30
    NSMutableArray *_holds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000010c20
@property(retain) NSMutableArray *holds; // @synthesize holds=_holds;
@property(retain) NSObject<OS_dispatch_source> *sigSource; // @synthesize sigSource=_sigSource;
@property(retain) PKDUserPrefs *userPrefs; // @synthesize userPrefs=_userPrefs;
@property(retain) NSObject<OS_xpc_object> *service; // @synthesize service=_service;
@property(retain) NSObject<OS_dispatch_queue> *mainQueue; // @synthesize mainQueue=_mainQueue;
@property(retain) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property unsigned int verbose; // @synthesize verbose=_verbose;
@property(nonatomic) struct os_unfair_lock_s holdLock; // @synthesize holdLock=_holdLock;
- (void)stop;	// IMP=0x0000000000010790
- (void)unholdClient:(id)arg1;	// IMP=0x00000000000104f0
- (void)unholdToken:(id)arg1 silent:(_Bool)arg2;	// IMP=0x00000000000101e0
- (void)addHold:(id)arg1 silent:(_Bool)arg2;	// IMP=0x0000000000010140
- (id)holdOnPlugIn:(id)arg1;	// IMP=0x000000000000fe50
- (void)terminatePlugIns:(id)arg1 synchronously:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f6a0
- (void)removedPlugIns:(id)arg1;	// IMP=0x000000000000f5c0
- (void)run;	// IMP=0x000000000000f500
- (id)initWithConnection:(id)arg1 queue:(id)arg2 database:(id)arg3 proxyFactory:(id)arg4;	// IMP=0x000000000000efb0
- (id)initForService:(const char *)arg1 database:(id)arg2 proxyFactory:(id)arg3;	// IMP=0x000000000000eee0
- (id)init;	// IMP=0x000000000000ee30
- (void)_startSandbox;	// IMP=0x000000000000ee20

@end

