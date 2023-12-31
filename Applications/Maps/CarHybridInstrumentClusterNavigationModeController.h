//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarGuidanceCardViewController, CarMapTrackingController, CarMapWidgetETACardViewController, ChromeViewController, GEOComposedRoute, GuidanceObserver, NSArray, NSString;

@interface CarHybridInstrumentClusterNavigationModeController : NSObject
{
    _Bool _hasArrived;	// 8 = 0x8
    _Bool _hasETAInfo;	// 9 = 0x9
    ChromeViewController *_chromeViewController;	// 16 = 0x10
    long long _cameraStyle;	// 24 = 0x18
    CarGuidanceCardViewController *_guidanceCardController;	// 32 = 0x20
    CarMapWidgetETACardViewController *_etaCardController;	// 40 = 0x28
    GEOComposedRoute *_currentRoute;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000888269
@property(nonatomic) _Bool hasETAInfo; // @synthesize hasETAInfo=_hasETAInfo;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(retain, nonatomic) GEOComposedRoute *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(retain, nonatomic) CarMapWidgetETACardViewController *etaCardController; // @synthesize etaCardController=_etaCardController;
@property(retain, nonatomic) CarGuidanceCardViewController *guidanceCardController; // @synthesize guidanceCardController=_guidanceCardController;
@property(readonly, nonatomic) long long cameraStyle; // @synthesize cameraStyle=_cameraStyle;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)chromeConfigurationDidUpdateNotification:(id)arg1;	// IMP=0x001000000088815f
@property(readonly, nonatomic) unsigned long long maneuverViewLayoutType;
@property(readonly, nonatomic) struct CGSize availableSize;
@property(readonly, nonatomic) NSString *arrivalSubtitle;
@property(readonly, nonatomic) NSString *arrivalTitle;
- (id)contactSharingSuggestion;	// IMP=0x0010000000887f98
- (id)sharingButtonTitle;	// IMP=0x0010000000887f8b
- (_Bool)isSharingTrip;	// IMP=0x0010000000887f83
- (id)upcomingWaypoints;	// IMP=0x0010000000887ef3
- (void)etaCardSign:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x0010000000887eed
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x0010000000887edb
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000887e7a
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000887e02
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x0010000000887ded
- (id)_mapWidgetChromeViewController;	// IMP=0x0010000000887cc0
- (void)chromeNavigationDisplay:(id)arg1 configurationDidChange:(id)arg2;	// IMP=0x00100000008879f5
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_setupGuidanceDisplays:(_Bool)arg1;	// IMP=0x0010000000887812
@property(readonly, nonatomic) GuidanceObserver *guidanceObserver;
- (void)_updateDisplayETA;	// IMP=0x00000000008873ec
- (_Bool)supportsAlternateRouteSelection;	// IMP=0x00100000008873e4
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000887038
- (id)desiredCards;	// IMP=0x0010000000886e7b
- (id)personalizedItemSources;	// IMP=0x0010000000886d4c
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000886bb2
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000008867f7
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsMapView;
- (_Bool)wantsNavigationDisplay;	// IMP=0x0010000000886749
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x00100000008865f1
- (void)refreshCameraTypeAnimated:(_Bool)arg1;	// IMP=0x0010000000886486
- (void)setCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000008863b7
- (void)setCameraStyle:(long long)arg1;	// IMP=0x00100000008863a3
- (id)mapView;	// IMP=0x0010000000886353
- (void)dealloc;	// IMP=0x00100000008862a1
- (id)init;	// IMP=0x0010000000886129

// Remaining properties
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

