//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVEndpointRoute, MPAVRoutingController, MPMediaControlsConfiguration, MediaControlsHomeObserver, NSArray, NSMutableDictionary, NSString;
@protocol MediaControlsEndpointsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsEndpointsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_endpointControllersMap;	// 16 = 0x10
    _Bool _didLoadHomeUIDsOnce;	// 24 = 0x18
    _Bool _isRequestingActiveRoute;	// 25 = 0x19
    _Bool _isUpdatingRoutes;	// 26 = 0x1a
    NSArray *_pendingRoutesToUpdate;	// 32 = 0x20
    MPMediaControlsConfiguration *_configuration;	// 40 = 0x28
    long long _discoveryMode;	// 48 = 0x30
    NSArray *_routes;	// 56 = 0x38
    id <MediaControlsEndpointsManagerDelegate> _delegate;	// 64 = 0x40
    MediaControlsHomeObserver *_homeObserver;	// 72 = 0x48
    MPAVRoutingController *_routingController;	// 80 = 0x50
    NSString *_activeSystemRouteUID;	// 88 = 0x58
    NSString *_pendingActiveSystemRouteUID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001046b4
@property(readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID; // @synthesize pendingActiveSystemRouteUID=_pendingActiveSystemRouteUID;
@property(readonly, copy, nonatomic) NSString *activeSystemRouteUID; // @synthesize activeSystemRouteUID=_activeSystemRouteUID;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) MediaControlsHomeObserver *homeObserver; // @synthesize homeObserver=_homeObserver;
@property(nonatomic) __weak id <MediaControlsEndpointsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_createSectionedCollectionFromRoutes:(id)arg1;	// IMP=0x00000000001045d9
- (void)_updateWithRoutes:(id)arg1;	// IMP=0x0000000000103559
- (void)_updateActiveRouteWithReason:(id)arg1;	// IMP=0x00000000001032c6
- (void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2;	// IMP=0x00000000001028b6
- (_Bool)_homeHasRoute:(id)arg1;	// IMP=0x0000000000102861
- (id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id *)arg2;	// IMP=0x00000000001024be
- (long long)_indexOfRouteWithUID:(id)arg1;	// IMP=0x00000000001023af
- (void)_activeSystemRouteDidChange:(id)arg1;	// IMP=0x0000000000102301
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;	// IMP=0x000000000010225d
- (void)getOutputDeviceIsPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000101caa
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000101bf2
- (void)prewarm;	// IMP=0x0000000000101bd9
@property(readonly, nonatomic) _Bool isActiveSystemEndpointEqualToLocalEndpoint;
- (id)endpointControllerForRoute:(id)arg1;	// IMP=0x0000000000101afc
@property(readonly, nonatomic) MPAVEndpointRoute *resolvedActiveSystemRoute;
@property(readonly, nonatomic) MPAVEndpointRoute *activeSystemRoute;
- (void)setActiveSystemRoute:(id)arg1 requestDetails:(id)arg2;	// IMP=0x00000000001014bf
- (void)setActiveSystemRoute:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000101421
- (void)dealloc;	// IMP=0x00000000001013c2
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000001010b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

