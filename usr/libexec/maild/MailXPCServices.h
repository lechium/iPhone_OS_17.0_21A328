//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MailXPCServices : NSObject
{
    NSObject<OS_xpc_object> *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_services;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    NSLock *_connectionsLock;	// 40 = 0x28
}

+ (id)sharedServer;	// IMP=0x00400000000401b9
+ (id)log;	// IMP=0x00100000000400dc
- (void).cxx_destruct;	// IMP=0x0020000000041c79
- (void)_enumerateServiceClasses:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041af4
- (Class)_serviceClassForName:(id)arg1;	// IMP=0x0010000000041962
- (void)registerServiceClass:(Class)arg1;	// IMP=0x0010000000041756
- (void)_dispatchMessage:(id)arg1 onQueue:(id)arg2 connectionState:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040ccc
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x0010000000040cc4
- (void)_registerConnection:(id)arg1;	// IMP=0x00100000000407a6
- (void)stop;	// IMP=0x001000000004062d
- (void)start;	// IMP=0x001000000004039d
- (void)dealloc;	// IMP=0x0010000000040323
- (id)init;	// IMP=0x001000000004023e

@end

