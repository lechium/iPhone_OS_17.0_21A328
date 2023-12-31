//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsAppTestRoute
{
    unsigned long long _numWaypointsLoaded;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
}

@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) unsigned long long numWaypointsLoaded; // @synthesize numWaypointsLoaded=_numWaypointsLoaded;
- (void)doAfterSubTestForDisplayingRoutes;	// IMP=0x0010000000199822
- (void)didDisplayRoutes:(id)arg1;	// IMP=0x0010000000199738
- (void)didEndGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;	// IMP=0x0010000000199358
- (void)willBeginGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;	// IMP=0x00100000001992cc
- (void)didEndMapsPPTTest_ComposeWaypoint:(id)arg1;	// IMP=0x00100000001992b3
- (void)willBeginMapsPPTTest_ComposeWaypoint:(id)arg1;	// IMP=0x0010000000199293
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;	// IMP=0x001000000019927a
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;	// IMP=0x001000000019925a
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;	// IMP=0x0010000000199241
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;	// IMP=0x0010000000199221
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;	// IMP=0x0010000000199208
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;	// IMP=0x00100000001991e8
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;	// IMP=0x00100000001991cf
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;	// IMP=0x00100000001991af
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;	// IMP=0x0010000000199196
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;	// IMP=0x0010000000199176
- (void)didEndGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;	// IMP=0x00100000001990d6
- (void)willBeginGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;	// IMP=0x001000000019902f
- (void)didEndGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;	// IMP=0x0010000000198f8f
- (void)willBeginGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;	// IMP=0x0010000000198ee8
- (void)didEndGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1;	// IMP=0x0010000000198ecf
- (void);	// IMP=0x0010000000198eaf
- (void)didEndGEOPPTTest_PlaceRequest:(id)arg1;	// IMP=0x0010000000198e96
- (void)willBeginGEOPPTTest_PlaceRequest:(id)arg1;	// IMP=0x0010000000198e76
- (void)didResolveWaypointsForRouting:(id)arg1;	// IMP=0x0010000000198d78
- (void)willResolveWaypointsForRouting:(id)arg1;	// IMP=0x0010000000198c40
- (void)_showDirectionSearchView:(id)arg1;	// IMP=0x00100000001988e4
- (void)tapOnSearchBar;	// IMP=0x00100000001988d0
- (void)registerGEOSubtestsForRouting;	// IMP=0x0010000000198073
- (void)_requestRouteWithResolvedDestination:(id)arg1;	// IMP=0x0010000000197e94
- (_Bool)runTest;	// IMP=0x0010000000197204

@end

