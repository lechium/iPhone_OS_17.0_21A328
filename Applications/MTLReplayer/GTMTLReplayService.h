//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTObservableService, NSURL;
@protocol GTXPCConnection, OS_xpc_object;

@interface GTMTLReplayService : NSObject
{
    struct GTMTLReplayClient *_clientContext;	// 8 = 0x8
    NSURL *_gputrace;	// 16 = 0x10
    NSObject<OS_xpc_object> *_terminatePath;	// 24 = 0x18
    id <GTXPCConnection> _terminateConnection;	// 32 = 0x20
    GTObservableService *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000034b34
- (id)raytrace:(id)arg1;	// IMP=0x0010000000034a1e
- (id)shaderdebug:(id)arg1;	// IMP=0x001000000003349a
- (id)profile:(id)arg1;	// IMP=0x0010000000033492
- (_Bool)resume:(unsigned long long)arg1;	// IMP=0x001000000003346e
- (_Bool)pause:(unsigned long long)arg1;	// IMP=0x001000000003344a
- (_Bool)cancel:(unsigned long long)arg1;	// IMP=0x001000000003342d
- (id)decode:(id)arg1;	// IMP=0x0010000000032bd3
- (id)update:(id)arg1;	// IMP=0x0010000000031cc0
- (void)display:(id)arg1;	// IMP=0x0010000000031c13
- (id)fetch:(id)arg1;	// IMP=0x001000000003046c
- (id)query:(id)arg1;	// IMP=0x001000000002f602
- (void)notifyError:(id)arg1;	// IMP=0x001000000002f570
- (void)broadcastDisconnect:(id)arg1 path:(id)arg2;	// IMP=0x001000000002f534
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x001000000002f51e
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x001000000002f508
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x001000000002f4f2
- (void)terminateProcess;	// IMP=0x001000000002f4d1
- (_Bool)load:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002f407
- (id)initWithContext:(struct GTMTLReplayClient *)arg1;	// IMP=0x001000000002f3a6

@end

