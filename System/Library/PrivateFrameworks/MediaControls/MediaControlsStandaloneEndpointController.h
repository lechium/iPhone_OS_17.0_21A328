//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVRoutingController, MPMRAVEndpointObserverWrapper, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsStandaloneEndpointController
{
    _Bool _allowsAutomaticResponseLoading;	// 8 = 0x8
    _Bool _endpointDiscovered;	// 9 = 0x9
    NSString *_routeUID;	// 16 = 0x10
    MPAVRoutingController *_routingController;	// 24 = 0x18
    MPMRAVEndpointObserverWrapper *_endpointObserver;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000ce50
@property(retain, nonatomic) MPMRAVEndpointObserverWrapper *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(nonatomic, getter=isEndpointDiscovered) _Bool endpointDiscovered; // @synthesize endpointDiscovered=_endpointDiscovered;
@property(retain, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;	// IMP=0x000000000000ce07
- (id)_routeForEndpoint:(struct __MRAVEndpointRef *)arg1;	// IMP=0x000000000000cd77
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x000000000000cc9b
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x000000000000cc89
- (void)endObserving;	// IMP=0x000000000000cb8d
- (void)beginObserving;	// IMP=0x000000000000ca91
- (id)proxyDelegate;	// IMP=0x000000000000ca88
- (void)updateAllowsAutomaticResponseLoading;	// IMP=0x000000000000c662
- (void)setAllowsAutomaticResponseLoading:(_Bool)arg1;	// IMP=0x000000000000c646
- (void)setRoute:(id)arg1;	// IMP=0x000000000000c5c7
- (void)dealloc;	// IMP=0x000000000000c4aa
- (id)initWithRouteUID:(id)arg1;	// IMP=0x000000000000c493
- (id)initWithEndpoint:(id)arg1;	// IMP=0x000000000000c47c
- (id)initWithRouteUID:(id)arg1 client:(id)arg2 player:(id)arg3;	// IMP=0x000000000000c368
- (id)initWithEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3;	// IMP=0x000000000000c277

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
