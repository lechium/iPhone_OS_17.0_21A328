//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHTTPDevice, HMFHTTPClient, HMFNetService, NSString, NSUUID;
@protocol HMDHTTPClientMessageTransportDelegate;

__attribute__((visibility("hidden")))
@interface HMDHTTPClientMessageTransport : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _running;	// 12 = 0xc
    NSUUID *_sessionIdentifier;	// 16 = 0x10
    id <HMDHTTPClientMessageTransportDelegate> _delegate;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    HMFNetService *_netService;	// 40 = 0x28
    HMDHTTPDevice *_remoteDevice;	// 48 = 0x30
    HMFHTTPClient *_client;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000b96572
+ (id)shortDescription;	// IMP=0x0010000000b96560
- (void).cxx_destruct;	// IMP=0x0000000000b95385
@property(readonly, nonatomic) HMFHTTPClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) HMDHTTPDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDHTTPClientMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dumpState;	// IMP=0x0000000000b951dc
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;	// IMP=0x0000000000b95027
- (id)logIdentifier;	// IMP=0x0000000000b94fad
- (void)clientDidBecomeUnreachable:(id)arg1;	// IMP=0x0000000000b94f44
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b94eb6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000b94caf
- (void)sendPingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b94a37
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b945e7
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;	// IMP=0x0000000000b94294
- (void)_receiveMessage;	// IMP=0x0000000000b93fe3
- (void)_stopWithError:(id)arg1;	// IMP=0x0000000000b93e50
- (void)stop;	// IMP=0x0000000000b93e3c
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b93d34
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, copy) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000b93a33
- (id)shortDescription;	// IMP=0x0000000000b93971
- (void)dealloc;	// IMP=0x0000000000b938f7
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;	// IMP=0x0000000000b9353c
- (id)init;	// IMP=0x0000000000b93494

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

