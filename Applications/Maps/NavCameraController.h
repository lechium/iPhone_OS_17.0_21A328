//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MNTrafficIncidentAlert, NSArray, NSHashTable, NSString, NavCameraCaches, VKNavContext;
@protocol NavCameraNavigationProviding;

@interface NavCameraController : NSObject
{
    VKNavContext *_navContext;	// 8 = 0x8
    _Bool _hasMatchedTiles;	// 16 = 0x10
    unsigned int _currentLineType;	// 20 = 0x14
    int _currentRampType;	// 24 = 0x18
    _Bool _isProcedingToRoute;	// 28 = 0x1c
    NavCameraCaches *_navCameraCaches;	// 32 = 0x20
    double _distanceAlongRoute;	// 40 = 0x28
    unsigned int _laneCount;	// 48 = 0x30
    double _distanceToCurrentTrafficSection;	// 56 = 0x38
    unsigned long long _currentTrafficColor;	// 64 = 0x40
    NSHashTable *_activeCameraInfos;	// 72 = 0x48
    id <NavCameraNavigationProviding> _originalNavigationProvider;	// 80 = 0x50
    _Bool _incidentsDisabled;	// 88 = 0x58
    id <NavCameraNavigationProviding> _overrideNavigationProvider;	// 96 = 0x60
    MKMapView *_mapView;	// 104 = 0x68
    id <NavCameraNavigationProviding> _navigationProvider;	// 112 = 0x70
    MNTrafficIncidentAlert *_trafficIncidentAlert;	// 120 = 0x78
    NSArray *_searchAlongTheRoutePoints;	// 128 = 0x80
    NSArray *_vehiclePositions;	// 136 = 0x88
    NSArray *_vehiclePositionPoints;	// 144 = 0x90
    unsigned long long _navCameraMode;	// 152 = 0x98
    unsigned long long _navigationDestination;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000006a5c90
@property(nonatomic) unsigned long long navigationDestination; // @synthesize navigationDestination=_navigationDestination;
@property(nonatomic) unsigned long long navCameraMode; // @synthesize navCameraMode=_navCameraMode;
@property(retain, nonatomic) NSArray *vehiclePositionPoints; // @synthesize vehiclePositionPoints=_vehiclePositionPoints;
@property(retain, nonatomic) NSArray *vehiclePositions; // @synthesize vehiclePositions=_vehiclePositions;
@property(retain, nonatomic) NSArray *searchAlongTheRoutePoints; // @synthesize searchAlongTheRoutePoints=_searchAlongTheRoutePoints;
@property(retain, nonatomic) MNTrafficIncidentAlert *trafficIncidentAlert; // @synthesize trafficIncidentAlert=_trafficIncidentAlert;
@property(retain, nonatomic) id <NavCameraNavigationProviding> navigationProvider; // @synthesize navigationProvider=_navigationProvider;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) id <NavCameraNavigationProviding> overrideNavigationProvider; // @synthesize overrideNavigationProvider=_overrideNavigationProvider;
- (void)_updateCameraInfoStylesForRoute:(id)arg1 routeCoordinate:(CDStruct_f48a8b00)arg2;	// IMP=0x00100000006a51f7
- (void)_updateForCurrentStepIndex;	// IMP=0x00100000006a4736
- (void)_updateWithNewRoute:(id)arg1;	// IMP=0x00100000006a46e7
- (void)navigationProvider:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;	// IMP=0x00100000006a46d5
- (void)navigationProvider:(id)arg1 didUpdateRoute:(id)arg2 traffic:(id)arg3;	// IMP=0x00100000006a46c0
- (void)navigationProvider:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x00100000006a456a
- (void)navigationProvider:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000006a4558
- (void)navigationProvider:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000006a4546
- (void)navigationProvider:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00100000006a3732
- (void)navigationProvider:(id)arg1 didChangeNavigationDestination:(unsigned long long)arg2;	// IMP=0x00100000006a371d
- (void)navigationProvider:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00100000006a3687
- (void)navigationProvider:(id)arg1 didChangeToNavigating:(_Bool)arg2;	// IMP=0x00100000006a3638
- (void)_restoreStateFromNavigationProvider:(id)arg1;	// IMP=0x00100000006a3468
@property(nonatomic) unsigned long long navigationCameraHeadingOverride;
- (unsigned long long)_incidentTypeForAlert:(id)arg1;	// IMP=0x00100000006a325b
- (void)_updateState;	// IMP=0x00100000006a203b
- (void)filterVehiclePositionsForTripsNotInSet:(id)arg1;	// IMP=0x00100000006a1da8
- (void)frameVehiclePositions:(id)arg1;	// IMP=0x00100000006a1af5
- (void)setIncidentsDisabled:(_Bool)arg1;	// IMP=0x00100000006a19ae
- (void)resetMapViewNavigationState;	// IMP=0x00100000006a1908
- (void)pauseTracking;	// IMP=0x00100000006a18c7
- (void)stopTracking;	// IMP=0x00100000006a1886
- (void)transitionToTrackingInMapMode:(long long)arg1 animated:(_Bool)arg2 startLocation:(id)arg3 startHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006a1770
@property(nonatomic) long long desiredDisplayRate;
- (id)initWithNavigationProvider:(id)arg1;	// IMP=0x00100000006a1266
- (id)init;	// IMP=0x00100000006a1226

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

