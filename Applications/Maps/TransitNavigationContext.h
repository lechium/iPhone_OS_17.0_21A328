//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeViewController, GEOComposedRouteStep, GEOTransitVehicleUpdater, NSString, Route, TransitSteppingCameraFramer;

@interface TransitNavigationContext : NSObject
{
    Route *_route;	// 8 = 0x8
    GEOComposedRouteStep *_activeStep;	// 16 = 0x10
    GEOComposedRouteStep *_displayedStep;	// 24 = 0x18
    TransitSteppingCameraFramer *_manualSteppingFramer;	// 32 = 0x20
    GEOComposedRouteStep *_temporarilyFramedStep;	// 40 = 0x28
    _Bool _requestingRealtimeUpdates;	// 48 = 0x30
    GEOTransitVehicleUpdater *_transitVehicleUpdater;	// 56 = 0x38
    _Bool _forceManualFraming;	// 64 = 0x40
    ChromeViewController *_chromeViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000095ef46
@property(readonly, nonatomic) _Bool forceManualFraming; // @synthesize forceManualFraming=_forceManualFraming;
@property(retain, nonatomic) GEOComposedRouteStep *displayedStep; // @synthesize displayedStep=_displayedStep;
@property(retain, nonatomic) GEOComposedRouteStep *activeStep; // @synthesize activeStep=_activeStep;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x001000000095ee3f
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x001000000095ee39
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x001000000095ee33
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x001000000095ee2d
- (int)currentMapViewTargetForAnalytics;	// IMP=0x001000000095ee22
- (int)currentUITargetForAnalytics;	// IMP=0x001000000095ee17
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapIncidentsCell:(id)arg2 withAdvisory:(id)arg3;	// IMP=0x001000000095ee11
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;	// IMP=0x001000000095ee0b
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateActiveGuidanceStep:(id)arg2;	// IMP=0x001000000095ebe8
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateDisplayedGuidanceStep:(id)arg2;	// IMP=0x001000000095ea13
- (void)didReselectDisplayedStep;	// IMP=0x001000000095ea0d
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapRowForItem:(id)arg2;	// IMP=0x001000000095e778
- (_Bool)_sceneInBackground;	// IMP=0x001000000095e6a5
- (void)_pauseOrResumeRealtimeUpdatesIfNeeded;	// IMP=0x001000000095e4f4
- (void)stopRequestingRealtimeUpdates;	// IMP=0x001000000095e4dc
- (void)startRequestingRealtimeUpdates;	// IMP=0x001000000095e4c1
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000095e3bd
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x001000000095e2b9
- (_Bool)_shouldFrameVehiclePositions;	// IMP=0x001000000095e1f2
- (void)updateTransitVehicleUpdaterIfNeeded;	// IMP=0x001000000095dea1
- (id)_stepForTransitVehicleUpdater;	// IMP=0x001000000095de93
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;	// IMP=0x001000000095dc96
- (id)transitVehicleUpdater:(id)arg1 shouldUpdateVehiclePositionsForTripIDs:(id)arg2;	// IMP=0x001000000095d9b6
- (void)willManuallyFrameStep;	// IMP=0x001000000095d9b0
- (void)canRecenterDidChange;	// IMP=0x001000000095d9aa
- (void)recenterOnActiveStep;	// IMP=0x001000000095d7a1
- (_Bool)shouldShowRecenterButton;	// IMP=0x001000000095d75e
- (void)_updateNavigationDisplayConfigurationForDisplayedStep:(id)arg1;	// IMP=0x001000000095d579
- (void)updateFramingForCurrentStep;	// IMP=0x001000000095d31a
- (void)_checkRouteProximityForManualFraming:(id)arg1;	// IMP=0x001000000095cf9f
- (void)_manuallyFrameStep:(id)arg1;	// IMP=0x001000000095cbbf
- (void)temporarilyFrameStep:(id)arg1;	// IMP=0x001000000095cac2
- (void)manuallyFrameCurrentStep;	// IMP=0x001000000095c9a6
- (_Bool)_shouldUseManualFraming;	// IMP=0x001000000095c974
- (_Bool)isNavigationCameraTracking;	// IMP=0x001000000095c902
- (id)_navCameraController;	// IMP=0x001000000095c888
- (_Bool)wantsMapSelectionControl;	// IMP=0x001000000095c880
- (_Bool)isDisplayingManuallySelectedStep;	// IMP=0x001000000095c868
- (void)_updateAnnotationsForCurrentRoute;	// IMP=0x001000000095c675
- (void)_updateCurrentRouteIfNeeded;	// IMP=0x001000000095c4e0
- (id)fetchCurrentRoute;	// IMP=0x001000000095c4c8
- (_Bool)_isAuthorizedForPreciseLocation;	// IMP=0x001000000095c461
- (void)_restoreMapView:(id)arg1;	// IMP=0x001000000095c394
- (void)_setupMapView:(id)arg1;	// IMP=0x001000000095c2e5
- (void)leaveStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000095c2df
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000095c0d7
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000095beb4
- (void)enterStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000095bdd7
- (id)personalizedItemSources;	// IMP=0x001000000095bca8
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x000000000095bc96
- (_Bool)wantsNavigationDisplay;	// IMP=0x001000000095bc8e
@property(readonly, nonatomic) _Bool showsMapView;
- (id)init;	// IMP=0x001000000095bb9d
- (void)dealloc;	// IMP=0x001000000095bb47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;

@end

