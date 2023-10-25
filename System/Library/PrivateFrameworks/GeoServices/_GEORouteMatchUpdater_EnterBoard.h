//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_EnterBoard
{
    GEOPBTransitStop *_transitStop;	// 56 = 0x38
    GEOPBTransitStation *_transitStation;	// 64 = 0x40
    CDStruct_2c43369c _entranceCoordinate;	// 72 = 0x48
    struct PolylineCoordinate _routeCoordinateApproaching;	// 88 = 0x58
    struct PolylineCoordinate _routeCoordinateAtStation;	// 96 = 0x60
    GEOComposedRouteStep *_enterStationStep;	// 104 = 0x68
    GEOComposedRouteStep *_boardVehicleStep;	// 112 = 0x70
    GEOComposedTransitTripRouteStep *_rideStep;	// 120 = 0x78
    _Bool _hasEnteredStation;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x0000000001229d28
- (void).cxx_destruct;	// IMP=0x0000000001229cc4
- (_Bool)_isLocationNearAccessPoint:(id)arg1;	// IMP=0x0000000001229944
- (_Bool)_isLocationNearTransitNode:(id)arg1;	// IMP=0x00000000012297f6
- (_Bool)_isLocationNearEndOfWalkingSegment:(id)arg1;	// IMP=0x0000000001229704
- (_Bool)_hasLocationExitedStation:(id)arg1;	// IMP=0x000000000122969c
- (_Bool)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2;	// IMP=0x0000000001229555
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x0000000001229205
- (id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2;	// IMP=0x0000000001228dd0

@end
