//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, GEOMapServiceTraits, GEOResumeRouteHandle, NSArray, NSString, WaypointSet;

@interface RouteRequestBuilder : NSObject
{
    _Bool _isResumingMultipointRoute;	// 8 = 0x8
    WaypointSet *_waypointSet;	// 16 = 0x10
    unsigned long long _maximumRouteCount;	// 24 = 0x18
    NSArray *_routeAttributesBuilders;	// 32 = 0x20
    GEOLocation *_currentUserLocation;	// 40 = 0x28
    unsigned long long _initiator;	// 48 = 0x30
    GEOMapServiceTraits *_traits;	// 56 = 0x38
    GEOResumeRouteHandle *_resumeRouteHandle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000004af0bf
@property(readonly, nonatomic) GEOResumeRouteHandle *resumeRouteHandle; // @synthesize resumeRouteHandle=_resumeRouteHandle;
@property(readonly, nonatomic) _Bool isResumingMultipointRoute; // @synthesize isResumingMultipointRoute=_isResumingMultipointRoute;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) unsigned long long initiator; // @synthesize initiator=_initiator;
@property(readonly, copy, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(readonly, copy, nonatomic) NSArray *routeAttributesBuilders; // @synthesize routeAttributesBuilders=_routeAttributesBuilders;
@property(readonly, nonatomic) unsigned long long maximumRouteCount; // @synthesize maximumRouteCount=_maximumRouteCount;
@property(readonly, nonatomic) WaypointSet *waypointSet; // @synthesize waypointSet=_waypointSet;
- (id)appIdentifierForInitiator;	// IMP=0x00100000004af049
- (int)sourceFromInitiator;	// IMP=0x00100000004af01f
- (id)buildDirectionsRequestDetails;	// IMP=0x00100000004ae8c3
- (id)initWithWaypointSet:(id)arg1 maximumRouteCount:(unsigned long long)arg2 routeAttributesBuilders:(id)arg3 currentUserLocation:(id)arg4 initiator:(unsigned long long)arg5 traits:(id)arg6 isResumingMultipointRoute:(_Bool)arg7 resumeRouteHandle:(id)arg8;	// IMP=0x00100000004ae78a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

