//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CyclePreferences, DirectionItem, DrivePreferences, GEORouteDisplayHints, NSArray, NSDate, NSHashTable, NSString, NSUUID, NavigationSession, PlatformController, RideBookingPlanningSession, RideBookingRideOptionStateObserverProxy, Route, RouteCollection, RoutePlanningError, RoutePlanningSession, RoutePlanningTiming, RoutePlanningWaypointRequest, TransitPreferences, VGVirtualGarage, WalkPreferences, WaypointSet;
@protocol RoutePlanningDataCoordinatorPresentationDelegate;

@interface RoutePlanningDataCoordinator : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _disableNotReachableError;	// 9 = 0x9
    RoutePlanningTiming *_timing;	// 16 = 0x10
    VGVirtualGarage *_virtualGarage;	// 24 = 0x18
    PlatformController *_platformController;	// 32 = 0x20
    id <RoutePlanningDataCoordinatorPresentationDelegate> _delegate;	// 40 = 0x28
    RoutePlanningSession *_routePlanningSession;	// 48 = 0x30
    RideBookingPlanningSession *_rideBookingPlanningSession;	// 56 = 0x38
    NavigationSession *_navigationSession;	// 64 = 0x40
    RoutePlanningSession *_stashedRoutePlanningSession;	// 72 = 0x48
    long long _desiredTransportType;	// 80 = 0x50
    NSHashTable *_observers;	// 88 = 0x58
    NSDate *_routesLastLoadedDate;	// 96 = 0x60
    CDStruct_02837cd9 _currentRouteDisplayedMapRect;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000b12d7b
@property(nonatomic) _Bool disableNotReachableError; // @synthesize disableNotReachableError=_disableNotReachableError;
@property(retain, nonatomic) NSDate *routesLastLoadedDate; // @synthesize routesLastLoadedDate=_routesLastLoadedDate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) CDStruct_02837cd9 currentRouteDisplayedMapRect; // @synthesize currentRouteDisplayedMapRect=_currentRouteDisplayedMapRect;
@property(nonatomic) long long desiredTransportType; // @synthesize desiredTransportType=_desiredTransportType;
@property(retain, nonatomic) RoutePlanningSession *stashedRoutePlanningSession; // @synthesize stashedRoutePlanningSession=_stashedRoutePlanningSession;
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(retain, nonatomic) RideBookingPlanningSession *rideBookingPlanningSession; // @synthesize rideBookingPlanningSession=_rideBookingPlanningSession;
@property(retain, nonatomic) RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
@property(nonatomic) __weak id <RoutePlanningDataCoordinatorPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) VGVirtualGarage *virtualGarage; // @synthesize virtualGarage=_virtualGarage;
@property(readonly, nonatomic) RoutePlanningTiming *timing; // @synthesize timing=_timing;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x0010000000b12be6
- (void)_applicationWillEnterForeground;	// IMP=0x0010000000b12bad
- (void)_notifyDidUpdateAutomaticSharingContacts:(id)arg1;	// IMP=0x0010000000b129fc
- (void)_notifyResultRouteCollectionChangeForCurrentTransportType;	// IMP=0x0010000000b1296a
- (void)_notifyDidUpdateOriginDestinationNames;	// IMP=0x0010000000b1274d
- (void)_notifyDidUpdateTiming;	// IMP=0x0010000000b12580
- (void)_notifyDidUpdateWaypointSet;	// IMP=0x0010000000b12116
- (void)_notifyDidUpdateOriginDestinationWaypointRequest;	// IMP=0x0010000000b11f00
- (void)_notifyDidUpdateRequestState:(long long)arg1;	// IMP=0x0010000000b11d88
- (void)_notifyDidUpdateVirtualGarage;	// IMP=0x0010000000b11bbb
- (void)_notifyDidUpdateCyclePreferences:(id)arg1;	// IMP=0x0010000000b11a26
- (void)_notifyDidUpdateTransitPreferences:(id)arg1;	// IMP=0x0010000000b11891
- (void)_notifyDidUpdateWalkPreferences:(id)arg1;	// IMP=0x0010000000b116fc
- (void)_notifyDidUpdateDrivePreferences:(id)arg1;	// IMP=0x0010000000b11569
- (void)_notifyDidUpdateTransportType;	// IMP=0x0010000000b113a0
- (void)_notifyDidUpdateCurrentRouteDisplayedMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x0010000000b1121f
- (void)_notifyDidUpdateRoutes:(id)arg1;	// IMP=0x0010000000b1108a
- (void)_notifyDidUpdateRouteCollection:(id)arg1;	// IMP=0x0010000000b10ef7
- (void)_notifyDidUpdateEnabled;	// IMP=0x0010000000b10d52
- (void)stop;	// IMP=0x0010000000b10ade
- (void)resume;	// IMP=0x0010000000b10a4f
- (void)suspend;	// IMP=0x0010000000b1095e
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)refreshVirtualGarage;	// IMP=0x0010000000b10654
- (void)refreshRidesharingOptionsIfVisible;	// IMP=0x0010000000b10481
@property(readonly, nonatomic) DirectionItem *directionItemForCurrentSession;
@property(readonly, nonatomic) _Bool canAddStop;
- (void)startWithDirectionItem:(id)arg1 traits:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000b10096
@property(readonly, nonatomic) NSArray *automaticSharingContacts;
@property(readonly, nonatomic) NSUUID *originalHistoryEntryIdentifier;
- (void)_reloadUsingNewTransitPreferences:(id)arg1;	// IMP=0x0010000000b0fc78
- (void)_reloadUsingNewCyclePreferences:(id)arg1;	// IMP=0x0010000000b0f841
- (void)updateCyclePreferences:(id)arg1;	// IMP=0x0010000000b0f5cf
- (void)updateVirtualGarage:(id)arg1;	// IMP=0x0010000000b0f3c7
- (void)updateTransitPreferences:(id)arg1;	// IMP=0x0010000000b0f2db
- (void)_reloadUsingNewWalkPreferences:(id)arg1;	// IMP=0x0010000000b0eea4
- (void)_reloadUsingNewDrivePreferences:(id)arg1;	// IMP=0x0010000000b0ea6d
- (void)updateWalkPreferences:(id)arg1;	// IMP=0x0010000000b0e7fb
- (void)updateDrivePreferences:(id)arg1;	// IMP=0x0010000000b0e589
- (_Bool)updateTiming:(id)arg1;	// IMP=0x0010000000b0e3e2
- (void)updateTransportType:(long long)arg1;	// IMP=0x0010000000b0dacb
- (void)updateCurrentRouteDisplayedMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x0010000000b0da3b
- (void)updateCurrentRouteIndex:(unsigned long long)arg1;	// IMP=0x0010000000b0d5a4
- (void)updateCurrentRoute:(id)arg1;	// IMP=0x0010000000b0d519
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) NSString *originName;
@property(readonly, nonatomic) RideBookingRideOptionStateObserverProxy *rideOptionStateObserver;
@property(readonly, nonatomic) WaypointSet *resolvedWaypointSet;
@property(readonly, nonatomic) RoutePlanningWaypointRequest *destinationWaypointRequest;
@property(readonly, nonatomic) RoutePlanningWaypointRequest *originWaypointRequest;
@property(readonly, nonatomic) NSArray *waypointRequests;
@property(readonly, nonatomic) RoutePlanningError *routePlanningError;
@property(readonly, nonatomic) long long requestState;
@property(readonly, nonatomic) long long transportType;
@property(readonly, nonatomic) CyclePreferences *cyclePreferences;
@property(readonly, nonatomic) GEORouteDisplayHints *displayHints;
@property(readonly, nonatomic) TransitPreferences *transitPreferences;
@property(readonly, nonatomic) WalkPreferences *walkPreferences;
@property(readonly, nonatomic) DrivePreferences *drivePreferences;
@property(readonly, nonatomic) Route *currentRoute;
@property(readonly, nonatomic) RouteCollection *routeCollection;
- (void)setupDataForCurrentObservers;	// IMP=0x0010000000b0c506
- (void)setupDataForObserver:(id)arg1;	// IMP=0x0010000000b0bf71
- (_Bool)_shouldNotifyObservers;	// IMP=0x0010000000b0bf5f
@property(readonly, nonatomic) NSHashTable *observersIfEnabled;
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000b0be8a
- (void)addObserver:(id)arg1;	// IMP=0x0010000000b0be11
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000b0b95b
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x0010000000b0b955
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x0010000000b0b94f
- (void)RideBookingPlanningSession:(id)arg1 rideOptionStateDidChange:(id)arg2;	// IMP=0x0010000000b0b761
- (void)RideBookingPlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000b0b6bd
- (void)routePlanningSession:(id)arg1 didUpdateAutomaticSharingContacts:(id)arg2;	// IMP=0x0010000000b0b6a8
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000b0b696
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000b0b621
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000b0b5e9
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000b0b545
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000b0b507
- (void)_updateIsEnabled;	// IMP=0x0010000000b0b3f8
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000b0aa0e
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000b0aa08
- (void)dealloc;	// IMP=0x0010000000b0a7df
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000b0a396

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
