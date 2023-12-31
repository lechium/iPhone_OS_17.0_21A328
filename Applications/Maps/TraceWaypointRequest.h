//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, MKMapItem, NSString, Result;

@interface TraceWaypointRequest : NSObject
{
    Result *_waypointResult;	// 8 = 0x8
    NSString *_tracePath;	// 16 = 0x10
    Result *_routesResult;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006f7eff
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) Result *routesResult; // @synthesize routesResult=_routesResult;
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) Result *waypointResult; // @synthesize waypointResult=_waypointResult;
@property(readonly, nonatomic) GEOComposedWaypoint *waypoint;
- (void)recordRAPInformation:(id)arg1;	// IMP=0x00100000006f7ccf
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006f7c30
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x00100000006f7c28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006f7c1d
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000006f7ab9
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000006f7902
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithWaypoint:(id)arg1;	// IMP=0x00100000006f73e8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

