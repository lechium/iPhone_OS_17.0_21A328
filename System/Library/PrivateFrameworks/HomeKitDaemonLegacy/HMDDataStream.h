//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSecuritySessionEncryption, HMDDataStreamControlProtocol, HMFTimer, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStream : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _firstMessageReceived;	// 9 = 0x9
    id <HMDDataStreamDelegate> _delegate;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    id <HMDDataStreamTransport> _transport;	// 32 = 0x20
    HAPSecuritySessionEncryption *_sessionEncryption;	// 40 = 0x28
    NSMapTable *_protocols;	// 48 = 0x30
    HMDDataStreamControlProtocol *_controlProtocol;	// 56 = 0x38
    HMFTimer *_connectionTimer;	// 64 = 0x40
    HMFTimer *_helloMessageResponseTimer;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    unsigned long long _nextRequestIdentifier;	// 88 = 0x58
    NSMutableSet *_pendingRequests;	// 96 = 0x60
    NSMutableArray *_pendingEvents;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x001000000031aafb
- (void).cxx_destruct;	// IMP=0x0000000000319b5a
@property(readonly, nonatomic) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long nextRequestIdentifier; // @synthesize nextRequestIdentifier=_nextRequestIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *helloMessageResponseTimer; // @synthesize helloMessageResponseTimer=_helloMessageResponseTimer;
@property(retain, nonatomic) HMFTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(nonatomic) _Bool firstMessageReceived; // @synthesize firstMessageReceived=_firstMessageReceived;
@property(retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol; // @synthesize controlProtocol=_controlProtocol;
@property(retain, nonatomic) NSMapTable *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(retain, nonatomic) id <HMDDataStreamTransport> transport; // @synthesize transport=_transport;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) __weak id <HMDDataStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000319858
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;	// IMP=0x00000000003180ab
- (void)transportDidOpen:(id)arg1;	// IMP=0x0000000000317cf9
- (void)transportDidClose:(id)arg1;	// IMP=0x0000000000317a2b
- (void)transport:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000031772a
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x000000000031761c
- (void)protocolDidUpdateActiveStatus:(id)arg1;	// IMP=0x0000000000317612
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003172fb
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000003171ff
- (void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000317166
- (void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000316f9a
- (id)protocolDelegateHandle;	// IMP=0x0000000000316f91
- (id)protocolWithName:(id)arg1;	// IMP=0x0000000000316ee8
- (void)addProtocol:(id)arg1 name:(id)arg2;	// IMP=0x0000000000316e57
- (void)close;	// IMP=0x0000000000316c3d
- (void)connect;	// IMP=0x0000000000316a7f
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 connectionTimer:(id)arg5 helloMessageResponseTimer:(id)arg6;	// IMP=0x0000000000316757
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000316637

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

