//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COCompanionLinkClientFactory : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSHashTable *_locals;	// 32 = 0x20
    NSMapTable *_clients;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000b1c4
@property(readonly, nonatomic) NSMapTable *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSHashTable *locals; // @synthesize locals=_locals;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)removeClient:(id)arg1;	// IMP=0x000000000000af54
- (void)invalidateCompanionLinkClient:(id)arg1;	// IMP=0x000000000000abdd
- (void)activateCompanionLinkClient:(id)arg1;	// IMP=0x000000000000a537
- (void)didRegisterEventID:(id)arg1 client:(id)arg2;	// IMP=0x000000000000a286
- (void)didRegisterRequestID:(id)arg1 client:(id)arg2;	// IMP=0x0000000000009fd5
- (void)didActivate:(id)arg1 error:(id)arg2;	// IMP=0x0000000000009d18
- (void)didInvalidate:(id)arg1;	// IMP=0x0000000000009a79
- (void)didDisconnect:(id)arg1;	// IMP=0x00000000000097da
- (void)didChangeErrorFlags:(id)arg1;	// IMP=0x0000000000009572
- (void)didUpdateState:(id)arg1;	// IMP=0x000000000000930a
- (void)didInterrupt:(id)arg1;	// IMP=0x00000000000090a2
- (void)didUpdateLocalDevice:(id)arg1;	// IMP=0x0000000000008cae
- (void)didChangeDevice:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000086af
- (void)didLoseDevice:(id)arg1;	// IMP=0x00000000000081ea
- (void)didFindDevice:(id)arg1;	// IMP=0x0000000000007cda
- (id)companionLinkClientForDevice:(id)arg1 withIDSIdentifier:(id)arg2;	// IMP=0x00000000000072a0
- (id)companionLinkClientForCurrentDevice;	// IMP=0x0000000000006443
- (id)_reuseableRapportClientInClientsList:(id)arg1;	// IMP=0x00000000000062b2
- (id)_clientsForRapportClient_unsafe:(id)arg1;	// IMP=0x0000000000005e10
- (_Bool)_isKnownDevice:(id)arg1;	// IMP=0x0000000000005a26
- (id)activeDevices;	// IMP=0x00000000000058e8
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000058aa
- (Class)companionLinkClientClass;	// IMP=0x0000000000005899
- (id)init;	// IMP=0x00000000000057da
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000000005671

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

