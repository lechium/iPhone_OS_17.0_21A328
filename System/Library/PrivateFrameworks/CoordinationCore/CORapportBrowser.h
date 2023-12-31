//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COBrowserObserverSet, CORapportTransport, NSString;
@protocol COCompanionLinkClientFactoryProtocol, COCompanionLinkClientProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CORapportBrowser : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _started;	// 12 = 0xc
    _Bool _activated;	// 13 = 0xd
    unsigned short _listeningPort;	// 14 = 0xe
    CORapportTransport *_sourceTransport;	// 16 = 0x10
    COBrowserObserverSet *_observerSet;	// 24 = 0x18
    id <COCompanionLinkClientProtocol> _listener;	// 32 = 0x20
    CDUnknownBlockType _startCallback;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <COCompanionLinkClientFactoryProtocol> _companionLinkClientFactory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005b5c3
@property(retain, nonatomic) id <COCompanionLinkClientFactoryProtocol> companionLinkClientFactory; // @synthesize companionLinkClientFactory=_companionLinkClientFactory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType startCallback; // @synthesize startCallback=_startCallback;
@property(readonly, nonatomic) unsigned short listeningPort; // @synthesize listeningPort=_listeningPort;
@property(readonly, nonatomic) id <COCompanionLinkClientProtocol> listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) COBrowserObserverSet *observerSet; // @synthesize observerSet=_observerSet;
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b518
- (void)_onqueue_informObserversOfLostRecord:(id)arg1;	// IMP=0x000000000005b31d
- (void)_onqueue_informObserversOfDiscoveredRecord:(id)arg1;	// IMP=0x000000000005b10b
- (void)_onqueue_handleLostDevice:(id)arg1;	// IMP=0x000000000005aeeb
- (void)_onqueue_handleFoundDevice:(id)arg1;	// IMP=0x000000000005a9fd
- (void)_onqueue_handleActivation:(id)arg1;	// IMP=0x000000000005a7d3
- (void)_onqueue_updateListeningPort:(id)arg1;	// IMP=0x000000000005a79d
- (id)_rapportDeviceWithCompanionLinkDevice:(id)arg1;	// IMP=0x000000000005a522
@property(nonatomic) __weak CORapportTransport *sourceTransport; // @synthesize sourceTransport=_sourceTransport;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000005a140
- (id)addObserverUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059fca
- (id)registeredObservers;	// IMP=0x0000000000059e4d
- (void)stop;	// IMP=0x0000000000059ccc
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059737
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000596bb
- (id)init;	// IMP=0x000000000005959b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

