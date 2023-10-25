//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class DirectionsElevationGraphView, MNGuidanceLaneInfo, MNGuidanceSignInfo, MUBlurView, MUGradientView, NSLayoutConstraint, NSNumber, NSString, NavSignFooterView, NavigationDebugViewsController, Route, RouteStepListDataSource, RouteStepListMetrics, UICollectionView, UIView;
@protocol NavSignListViewControllerDelegate;

@interface NavSignListViewController : UIViewController
{
    NSNumber *_computedWidth;	// 8 = 0x8
    RouteStepListMetrics *_metrics;	// 16 = 0x10
    _Bool _firstSetupDone;	// 24 = 0x18
    _Bool _isRerouting;	// 25 = 0x19
    MNGuidanceSignInfo *_latestSignGuidance;	// 32 = 0x20
    MNGuidanceLaneInfo *_latestLaneInfo;	// 40 = 0x28
    MUBlurView *_backgroundView;	// 48 = 0x30
    UIView *_graphContainerView;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    MUGradientView *_gradientView;	// 72 = 0x48
    NSLayoutConstraint *_containerViewHeightConstraint;	// 80 = 0x50
    NSLayoutConstraint *_collectionViewTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_gradientViewTopConstraint;	// 96 = 0x60
    NSLayoutConstraint *_gradientViewBottomConstraint;	// 104 = 0x68
    NSLayoutConstraint *_graphTopConstraint;	// 112 = 0x70
    NSLayoutConstraint *_footerHeightConstraint;	// 120 = 0x78
    _Bool _expanded;	// 128 = 0x80
    _Bool _dragging;	// 129 = 0x81
    _Bool _connectedToCarPlay;	// 130 = 0x82
    _Bool _laneGuidanceActive;	// 131 = 0x83
    _Bool _debugViewControllerEnabled;	// 132 = 0x84
    double _layoutProgress;	// 136 = 0x88
    double _activeStepFadeIn;	// 144 = 0x90
    id <NavSignListViewControllerDelegate> _signDelegate;	// 152 = 0x98
    double _cornerRadius;	// 160 = 0xa0
    unsigned long long _cornerMask;	// 168 = 0xa8
    double;	// 176 = 0xb0
    Route *_route;	// 184 = 0xb8
    MUBlurView *_graphBackgroundView;	// 192 = 0xc0
    DirectionsElevationGraphView *_graphView;	// 200 = 0xc8
    UICollectionView *_collectionView;	// 208 = 0xd0
    NavSignFooterView *_footerView;	// 216 = 0xd8
    RouteStepListDataSource *_dataSource;	// 224 = 0xe0
    unsigned long long _activeStepIndex;	// 232 = 0xe8
    unsigned long long _selectedStepIndex;	// 240 = 0xf0
    NavigationDebugViewsController *_debugViewController;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00200000002c3082
@property(nonatomic) _Bool debugViewControllerEnabled; // @synthesize debugViewControllerEnabled=_debugViewControllerEnabled;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewController; // @synthesize debugViewController=_debugViewController;
@property(nonatomic, getter=isLaneGuidanceActive) _Bool laneGuidanceActive; // @synthesize laneGuidanceActive=_laneGuidanceActive;
@property(nonatomic) unsigned long long selectedStepIndex; // @synthesize selectedStepIndex=_selectedStepIndex;
@property(nonatomic) unsigned long long activeStepIndex; // @synthesize activeStepIndex=_activeStepIndex;
@property(retain, nonatomic) RouteStepListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NavSignFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DirectionsElevationGraphView *graphView; // @synthesize graphView=_graphView;
@property(retain, nonatomic) MUBlurView *graphBackgroundView; // @synthesize graphBackgroundView=_graphBackgroundView;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(nonatomic) double cardWidth; // @synthesize cardWidth=_cardWidth;
@property(readonly, nonatomic, getter=isConnectedToCarPlay) _Bool connectedToCarPlay; // @synthesize connectedToCarPlay=_connectedToCarPlay;
@property(nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) __weak id <NavSignListViewControllerDelegate> signDelegate; // @synthesize signDelegate=_signDelegate;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) double activeStepFadeIn; // @synthesize activeStepFadeIn=_activeStepFadeIn;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (_Bool)_shouldShowDebugViewController;	// IMP=0x00100000002c2db0
- (void)_triggerSignListAnalytics;	// IMP=0x00100000002c2892
- (double)_graphTopPosition;	// IMP=0x00100000002c2867
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002c274a
- (void)_toggleExpansionAnimated:(_Bool)arg1;	// IMP=0x00100000002c252a
- (void)_didTap:(id)arg1;	// IMP=0x00100000002c2458
- (void)_didPan:(id)arg1;	// IMP=0x00100000002c20be
- (void)_updateCurrentManeuverBackground;	// IMP=0x00100000002c1eee
- (double)_signContainerAvailableHeight;	// IMP=0x00100000002c1e0c
- (void)_insertGraphView;	// IMP=0x00100000002c1ae5
- (void)_updateGraphContainerTop;	// IMP=0x00100000002c1a74
- (void)_updateGraphViewIfNeeded;	// IMP=0x00100000002c1945
- (void)_updateSelectionBackgrounds;	// IMP=0x00100000002c16b7
- (void)_cleanupStepCountdowns;	// IMP=0x00100000002c132c
- (void)updateHeightConstraints;	// IMP=0x00100000002c10eb
- (void)_updateLaneGuidancePositioning;	// IMP=0x00100000002c0d3a
- (void)_updateLayoutProgressWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c0b0c
- (void)_updateActiveStepIndexAnimated:(_Bool)arg1;	// IMP=0x00100000002c072d
- (void)_updateRoute:(id)arg1;	// IMP=0x00100000002c0467
- (void)_handleNewRoute:(id)arg1;	// IMP=0x00100000002c0419
- (void)_cancelReroute;	// IMP=0x00100000002c033f
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x00100000002c032a
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x00100000002c0315
- (void)navigationService:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;	// IMP=0x00100000002c0303
- (void)navigationServiceDidCancelReroute:(id)arg1;	// IMP=0x00100000002c02f1
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x00100000002c01eb
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00100000002bfe0b
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00100000002bfa44
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00100000002bf8f3
- (void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x00100000002bf502
- (void)_processSignUpdate;	// IMP=0x00100000002bf0e1
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00100000002beb60
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000002be893
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00100000002be88b
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000002be883
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00100000002be6cb
- (unsigned long long)_stateForItemIndex:(unsigned long long)arg1;	// IMP=0x00100000002be67b
- (_Bool)_showsHairlineForItemIndex:(unsigned long long)arg1;	// IMP=0x00100000002be62b
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000002be3a5
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000002be089
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000002be007
- (Class)cellClassForItemType:(unsigned long long)arg1;	// IMP=0x00100000002bdfd9
- (void)_reapplySignCountdown;	// IMP=0x00100000002bde9e
- (void)reloadStepIndices:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00100000002bdd45
- (void)reloadUIForDataSource:(id)arg1;	// IMP=0x00100000002bdc76
- (void)reloadDataSource:(id)arg1;	// IMP=0x00100000002bdae8
- (void)cell:(id)arg1 setPressed:(_Bool)arg2;	// IMP=0x00100000002bd8e4
- (void)_updateCollectionViewBottomInset;	// IMP=0x00100000002bd746
- (void)clearPartialExpansionAnimated:(_Bool)arg1;	// IMP=0x00100000002bd49e
- (void)clearDragState;	// IMP=0x00100000002bd3e7
- (void)clearSelectionAnimated:(_Bool)arg1;	// IMP=0x00100000002bd3a2
- (void)updateFooterConstraints;	// IMP=0x00100000002bd2dd
- (id)_displayIndexPath;	// IMP=0x00100000002bd287
- (unsigned long long)_displayStepIndex;	// IMP=0x00100000002bd24b
@property(readonly, nonatomic) double footerBottomPosition;
- (double)_lastSignHeight;	// IMP=0x00100000002bcff0
@property(readonly, nonatomic) double collapsedHeight;
- (double)_collapsedSignHeight;	// IMP=0x00100000002bce6e
- (void)setConnectedToCarPlay:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002bccb3
- (void)_applyCornerMask;	// IMP=0x00100000002bcbd2
@property(readonly, nonatomic) _Bool hasElevationGraph;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000002bbcfc
- (void)viewDidLayoutSubviews;	// IMP=0x00100000002bbab0
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00100000002bb986
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000002bb934
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000002bb8d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002bb59c
- (void)viewDidLoad;	// IMP=0x00100000002b9b41
- (void)loadView;	// IMP=0x00100000002b9b08
- (void)dealloc;	// IMP=0x00100000002b9a56
- (id)initWithSignDelegate:(id)arg1;	// IMP=0x00100000002b98b2
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002b98aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
