//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSTouchDeliveryPolicy, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryPolicyServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableSet *_assertionConnections;	// 24 = 0x18
    BKSTouchDeliveryPolicy *_policy;	// 32 = 0x20
}

+ (id)sharedServer;	// IMP=0x00200000000a0ed7
- (void).cxx_destruct;	// IMP=0x00200000000a0349
@property(retain, setter=_queue_setPolicy:) BKSTouchDeliveryPolicy *_policy; // @synthesize _policy;
- (_Bool)shouldCancelTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;	// IMP=0x00100000000a026d
- (id)filterDestinations:(id)arg1;	// IMP=0x001000000009fe25
- (void)ipc_addPolicy:(id)arg1;	// IMP=0x001000000009fcaa
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x001000000009fab8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009f95d
- (void)run;	// IMP=0x001000000009f947
- (void)dealloc;	// IMP=0x001000000009f905
- (id)init;	// IMP=0x001000000009f805

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

