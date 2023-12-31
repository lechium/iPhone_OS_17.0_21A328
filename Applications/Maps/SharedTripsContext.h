//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSharedNavState, MKMapView, MapCameraController, NSArray, NSString, PersonalizedItemManager, RouteAnnotationsController, SearchPinsManager, SharedTripsAnnotationsController;

@interface SharedTripsContext : NSObject
{
    NSString *_selectedTripID;	// 8 = 0x8
    MapCameraController *_cameraController;	// 16 = 0x10
    MKMapView *_mapView;	// 24 = 0x18
    PersonalizedItemManager *_personalizedItemManager;	// 32 = 0x20
    RouteAnnotationsController *_routeAnnotationsController;	// 40 = 0x28
    SharedTripsAnnotationsController *_sharedTripsAnnotationsController;	// 48 = 0x30
    SearchPinsManager *_searchPinsManager;	// 56 = 0x38
    NSArray *_sharedTrips;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000009fec2d
@property(readonly, nonatomic) NSArray *sharedTrips; // @synthesize sharedTrips=_sharedTrips;
@property(readonly, nonatomic) SearchPinsManager *searchPinsManager; // @synthesize searchPinsManager=_searchPinsManager;
@property(readonly, nonatomic) SharedTripsAnnotationsController *sharedTripsAnnotationsController; // @synthesize sharedTripsAnnotationsController=_sharedTripsAnnotationsController;
@property(readonly, nonatomic) RouteAnnotationsController *routeAnnotationsController; // @synthesize routeAnnotationsController=_routeAnnotationsController;
@property(readonly, nonatomic) PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) MapCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;	// IMP=0x00100000009febd5
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;	// IMP=0x00100000009febc3
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;	// IMP=0x00100000009feaf6
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;	// IMP=0x00100000009feae4
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;	// IMP=0x00100000009fead2
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;	// IMP=0x00100000009feac0
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;	// IMP=0x00100000009feaae
- (void)sharedTripServiceDidUpdateReceivingAvailability:(id)arg1;	// IMP=0x00100000009fea9c
- (void)presentErrorForUnsupportedProtocolOrTransportWithTrip:(id)arg1;	// IMP=0x00100000009fea87
- (void)presentErrorForChinaTrip:(id)arg1;	// IMP=0x00100000009fea72
- (void)presentDetailsForSelectedTrip;	// IMP=0x00100000009fea5d
@property(retain, nonatomic) GEOSharedNavState *selectedTrip;
- (void)_updateSharedTrips;	// IMP=0x00100000009fdfcf
- (void)_updateEverything;	// IMP=0x00100000009fdf4b
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000009fdf0c
- (_Bool)usesDefaultTransitions;	// IMP=0x00100000009fdf04
- (void)dismiss;	// IMP=0x00100000009fdefe
- (void)resignCurrent:(_Bool)arg1;	// IMP=0x00100000009fde79
- (void)becomeCurrent:(_Bool)arg1;	// IMP=0x00100000009fdcf4
- (void)recenterOnRouteAnimated:(_Bool)arg1;	// IMP=0x00100000009fdcaa
- (_Bool)shouldShowRoute;	// IMP=0x00100000009fdc37
- (_Bool)showsMapView;	// IMP=0x00100000009fdc2f
- (void)dealloc;	// IMP=0x00100000009fdb7d
- (id)initWithInitialSelectedSharedTrip:(id)arg1;	// IMP=0x00100000009fda54
- (id)init;	// IMP=0x00100000009fd957

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

