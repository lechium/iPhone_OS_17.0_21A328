//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTransitRouteUpdater, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface RouteUpdatingNavigationServiceTask : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    NSSet *_routeIDs;	// 16 = 0x10
    NSSet *_routeUpdateRequests;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 32 = 0x20
    GEOTransitRouteUpdater *_transitRouteUpdater;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000045d3dc
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x001000000045ce29
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x001000000045c86a
- (void)navigationService:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;	// IMP=0x001000000045c864
- (void)navigationService:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x001000000045c833
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x001000000045c821
- (void)_createTransitRouteUpdaterIfNeeded;	// IMP=0x001000000045c65a
- (void)_updateRouteUpdateObservationIfNeededWithRoutes:(id)arg1;	// IMP=0x001000000045c475
- (_Bool)_shouldUseNavigationServiceForRoutes:(id)arg1;	// IMP=0x001000000045c1fa
- (void)_refreshUpdateEnabledForCurrentState;	// IMP=0x001000000045c13f
- (void)_resumeUpdates;	// IMP=0x001000000045bf44
- (void)_pauseUpdates;	// IMP=0x001000000045bd50
- (void)_willEnterForeground;	// IMP=0x001000000045bd3e
- (void)_didEnterBackground;	// IMP=0x001000000045bd2c
- (void)stop;	// IMP=0x001000000045bbed
- (void)startWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000045ba76
- (void)dealloc;	// IMP=0x001000000045b9ba
- (id)initWithRoutes:(id)arg1;	// IMP=0x001000000045b6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

