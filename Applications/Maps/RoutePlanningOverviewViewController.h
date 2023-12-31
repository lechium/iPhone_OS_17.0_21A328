//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, ErrorModeView, LoadingModeView, MKTransitItemReferenceDateUpdater, NSLayoutConstraint, NSString, RideBookingOutlineController, RideBookingRideOptionState, RoutePlanningDataCoordinator, RoutePlanningOutlineRootController, RouteSearchViewController, TransportTypePicker, UIAlertController, UICollectionView, UICollectionViewCompositionalLayout, UIView, VGVirtualGarage;

@interface RoutePlanningOverviewViewController
{
    VGVirtualGarage *_virtualGarage;	// 8 = 0x8
    VGVirtualGarage *_virtualGarageAtLastRouteRequest;	// 16 = 0x10
    _Bool _isViewVisible;	// 24 = 0x18
    unsigned long long _previousLayoutForTransition;	// 32 = 0x20
    unsigned long long _previousStyleForTransition;	// 40 = 0x28
    LoadingModeView *_loadingModeView;	// 48 = 0x30
    ErrorModeView *_errorModeView;	// 56 = 0x38
    _Bool _hasIncrementedDigitalIssuanceCountForRoute;	// 64 = 0x40
    _Bool _isAnimatingHeightForMediumLayout;	// 65 = 0x41
    RoutePlanningDataCoordinator *_dataCoordinator;	// 72 = 0x48
    UIView *_routeOptionsPopoverSourceView;	// 80 = 0x50
    NSString *_originName;	// 88 = 0x58
    long long _digitalIssuanceUpdateFlags;	// 96 = 0x60
    UIAlertController *_simulationPromptAlertController;	// 104 = 0x68
    ContainerHeaderView *_containerHeaderView;	// 112 = 0x70
    TransportTypePicker *_transportTypePicker;	// 120 = 0x78
    UICollectionView *_collectionView;	// 128 = 0x80
    UICollectionViewCompositionalLayout *_collectionViewLayout;	// 136 = 0x88
    NSLayoutConstraint *_collectionViewToBottomConstraint;	// 144 = 0x90
    RoutePlanningOutlineRootController *_rootController;	// 152 = 0x98
    double _routeCellsHeight;	// 160 = 0xa0
    RideBookingOutlineController *_rideBookingSource;	// 168 = 0xa8
    RideBookingRideOptionState *_cachedRideOptionState;	// 176 = 0xb0
    unsigned long long _countOfRideOptionsBooked;	// 184 = 0xb8
    MKTransitItemReferenceDateUpdater *_referenceDateUpdater;	// 192 = 0xc0
}

+ (id)routePlanningOverviewViewControllerWithDataCoordinator:(id)arg1;	// IMP=0x00200000004af1d0
- (void).cxx_destruct;	// IMP=0x00200000004bafce
@property(retain, nonatomic) MKTransitItemReferenceDateUpdater *referenceDateUpdater; // @synthesize referenceDateUpdater=_referenceDateUpdater;
@property(readonly, nonatomic) unsigned long long countOfRideOptionsBooked; // @synthesize countOfRideOptionsBooked=_countOfRideOptionsBooked;
@property(retain, nonatomic) RideBookingRideOptionState *cachedRideOptionState; // @synthesize cachedRideOptionState=_cachedRideOptionState;
@property(retain, nonatomic) RideBookingOutlineController *rideBookingSource; // @synthesize rideBookingSource=_rideBookingSource;
@property(nonatomic) double routeCellsHeight; // @synthesize routeCellsHeight=_routeCellsHeight;
@property(retain, nonatomic) RoutePlanningOutlineRootController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewToBottomConstraint; // @synthesize collectionViewToBottomConstraint=_collectionViewToBottomConstraint;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isAnimatingHeightForMediumLayout; // @synthesize isAnimatingHeightForMediumLayout=_isAnimatingHeightForMediumLayout;
@property(retain, nonatomic) TransportTypePicker *transportTypePicker; // @synthesize transportTypePicker=_transportTypePicker;
@property(retain, nonatomic) ContainerHeaderView *containerHeaderView; // @synthesize containerHeaderView=_containerHeaderView;
@property(retain, nonatomic) UIAlertController *simulationPromptAlertController; // @synthesize simulationPromptAlertController=_simulationPromptAlertController;
@property(nonatomic) long long digitalIssuanceUpdateFlags; // @synthesize digitalIssuanceUpdateFlags=_digitalIssuanceUpdateFlags;
@property(nonatomic) _Bool hasIncrementedDigitalIssuanceCountForRoute; // @synthesize hasIncrementedDigitalIssuanceCountForRoute=_hasIncrementedDigitalIssuanceCountForRoute;
@property(copy, nonatomic) NSString *originName; // @synthesize originName=_originName;
@property(readonly, nonatomic) __weak UIView *routeOptionsPopoverSourceView; // @synthesize routeOptionsPopoverSourceView=_routeOptionsPopoverSourceView;
@property(readonly, nonatomic) __weak RoutePlanningDataCoordinator *dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(retain, nonatomic) ErrorModeView *errorModeView; // @synthesize errorModeView=_errorModeView;
@property(retain, nonatomic) LoadingModeView *loadingModeView; // @synthesize loadingModeView=_loadingModeView;
- (id)evStepInfoForWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004ba558
- (id)chargingInfoForWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004ba2c7
- (_Bool)hasValidEVRoute;	// IMP=0x00100000004ba1f8
- (_Bool)shouldRefreshRoutePlanningWithCurrentGarage:(id)arg1 previousGarage:(id)arg2;	// IMP=0x00100000004b9a90
- (void)_refreshRoutePlanning;	// IMP=0x00100000004b9954
- (void)_refreshSelectedVehicleDisplay;	// IMP=0x00100000004b993f
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00100000004b96c2
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000004b96b7
- (int)currentUITargetForAnalytics;	// IMP=0x00100000004b9662
- (void)pptTestTransitionBetweenFullAndLightGuidance;	// IMP=0x00100000004b951a
- (void)pptTestEndNavigation;	// IMP=0x00100000004b93d2
- (void)pptTestStartNavigation;	// IMP=0x00100000004b928b
- (void)_updateDigitalIssuanceStateWithUpdateFlag:(long long)arg1;	// IMP=0x00100000004b9204
- (double)_maximumMediumCardHeight;	// IMP=0x00100000004b912c
- (double)_minimumMediumCardHeight;	// IMP=0x00100000004b904f
- (double)_fittingHeightForMediumLayout;	// IMP=0x00100000004b89a2
- (double)_calculatedRouteCellsHeight;	// IMP=0x00100000004b8663
- (void)_contentSizeCategoryDidChange;	// IMP=0x00100000004b859e
- (void)_animateUpdatingHeightForSingleTrip;	// IMP=0x00100000004b8220
- (void)_snapToRectOfRowToKeepVisible;	// IMP=0x00100000004b7f15
- (void)_scrollToCellToShowAtMediumLayoutAnimated:(_Bool)arg1;	// IMP=0x00100000004b7adc
- (id)_indexPathOfCellToShowAtMediumLayout;	// IMP=0x00100000004b79b7
- (_Bool)isFittingHeightToRoutes;	// IMP=0x00100000004b796e
@property(readonly, nonatomic) _Bool isDisplayingSingleTrip;
- (void)_updateErrorViewButtonVisibilityWithError:(id)arg1;	// IMP=0x00100000004b6faa
- (void)_setErrorViewVisible:(_Bool)arg1 routePlanningError:(id)arg2;	// IMP=0x00100000004b6deb
- (_Bool)isErrorViewVisible;	// IMP=0x00100000004b6d7c
- (void)_updateLoadingViewBottomInset;	// IMP=0x00100000004b6c59
- (void)_setLoadingViewVisible:(_Bool)arg1;	// IMP=0x00100000004b6b9c
- (_Bool)isLoadingViewVisible;	// IMP=0x00100000004b6b2d
- (void)_setCollectionViewVisible:(_Bool)arg1;	// IMP=0x00100000004b69fa
- (_Bool)isCollectionViewVisible;	// IMP=0x00100000004b69a5
- (void)_forceChangeOrigin;	// IMP=0x00100000004b683c
- (void)_updateForEquivalentRequestState:(long long)arg1;	// IMP=0x00100000004b664d
- (void)_resetCountOfRideOptionsBooked;	// IMP=0x00100000004b65b5
- (void)_incrementCountOfRideOptionsBooked;	// IMP=0x00100000004b6505
- (void)didSelectRideOption:(id)arg1;	// IMP=0x00100000004b6018
- (void)didSelectAppStoreSuggestionWithIdentifier:(id)arg1;	// IMP=0x00100000004b5f53
- (void)didSelectFeedbackWithAppIdentifier:(id)arg1;	// IMP=0x00100000004b5ee2
- (void)_sceneDidBackground:(id)arg1;	// IMP=0x00100000004b5df5
- (void)_sceneWillForeground:(id)arg1;	// IMP=0x00100000004b5d05
- (void)_stopReferenceDateUpdates;	// IMP=0x00100000004b5be3
- (void)_startReferenceDateUpdates;	// IMP=0x00100000004b586d
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;	// IMP=0x00100000004b575a
- (void)didTapRouteOptionsOnRoutePlanningFooterView:(id)arg1;	// IMP=0x00100000004b5748
- (void)didTapReportAProblemButtonOnRoutePlanningFooterView:(id)arg1;	// IMP=0x00100000004b54d9
- (void)_updateToTransportType:(long long)arg1;	// IMP=0x00100000004b5239
- (void)transportTypePicker:(id)arg1 typeSelected:(long long)arg2;	// IMP=0x00100000004b5224
- (_Bool)_supportsTransportTypePicker;	// IMP=0x00100000004b521c
- (void)dataSource:(id)arg1 didSelectRowForRoute:(id)arg2;	// IMP=0x00100000004b4f3a
- (void)didTapAutomaticSharingButtonForRouteOverviewCell:(id)arg1;	// IMP=0x00100000004b4ef8
- (void)didTapDetailsButtonForRouteOverviewCell:(id)arg1;	// IMP=0x00100000004b4caf
- (void)_startNavigationForRouteCollection:(id)arg1 navigationDetailsOptions:(struct NavigationDetailsOptions)arg2;	// IMP=0x00100000004b4c2b
- (void)_promptForSimulationAndStartNavigationForRouteCollection:(id)arg1;	// IMP=0x00100000004b4505
- (void)_doPromptsAndStartNavForRouteCollection:(id)arg1;	// IMP=0x00100000004b41e0
- (void)didTapGoButtonForRouteOverviewCell:(id)arg1;	// IMP=0x00100000004b382b
- (void)dataSource:(id)arg1 requiresDeletionOfIndexSet:(id)arg2 reloadOfIndexSet:(id)arg3 insertionOfIndexSet:(id)arg4;	// IMP=0x00100000004b3467
- (void)dataSource:(id)arg1 requiresReloadOfSection:(unsigned long long)arg2;	// IMP=0x00100000004b30e9
- (void)dataSourceRequiresReload:(id)arg1;	// IMP=0x00100000004b3006
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000004b2ff4
- (void)_presentRouteOptions;	// IMP=0x00100000004b2e92
- (void)_presentEbikeOptions;	// IMP=0x00100000004b2db8
- (_Bool)_shouldPermitAutomaticSharingContacts;	// IMP=0x00100000004b2d6c
- (void)_refreshContactsDisplayForAutomaticTripSharing;	// IMP=0x00100000004b2a8c
- (void)_refreshContentInset;	// IMP=0x00100000004b2a77
- (void)_refreshTimingDisplay;	// IMP=0x00100000004b2a62
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateCyclePreferences:(id)arg2;	// IMP=0x00100000004b2a50
- (void);	// IMP=0x00100000004b2a3e
- (void)_updateDataSourceRouteCollection:(id)arg1;	// IMP=0x00100000004b29a7
- (_Bool)_hasModalViewControllerInTransition;	// IMP=0x00100000004b291b
- (void)_finishLaunchingIntoNavIfPossible:(id)arg1;	// IMP=0x00100000004b2852
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRoutes:(id)arg2;	// IMP=0x00100000004b2669
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000004b2477
- (void)_updateRidesharingAnalytics;	// IMP=0x00100000004b20ee
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRequestState:(long long)arg2;	// IMP=0x00100000004b2091
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRideBookingRideOptionState:(id)arg2;	// IMP=0x00100000004b2028
- (void)_refreshOptionsVisibility;	// IMP=0x00100000004b2013
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTransportType:(long long)arg2;	// IMP=0x00100000004b19aa
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateOriginName:(id)arg2 destinationName:(id)arg3;	// IMP=0x00100000004b1995
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateResolvedWaypointSet:(id)arg2;	// IMP=0x00100000004b15c0
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00100000004b1574
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000004b14b5
- (void)didChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000004b14a3
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000004b1443
- (struct CGRect)_rectOfRowToKeepVisible;	// IMP=0x00100000004b116e
- (double)_cardHeightMinusTableViewHeight;	// IMP=0x00100000004b1104
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000004b0e92
- (_Bool)allowsLongPressToMarkLocation;	// IMP=0x00100000004b0e5e
- (double)_heightForFullLayout;	// IMP=0x00100000004b0e47
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000004b0cdb
- (_Bool)supportTapToHide;	// IMP=0x00100000004b0cd3
- (void)shouldDismissForHorizontalSwipe_nonUIKitCardsOnly;	// IMP=0x00100000004b0c85
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000004b0abd
- (long long)floatingControlsOptions;	// IMP=0x00100000004b0aa0
- (void)_loadGarage;	// IMP=0x00100000004b0843
- (id)_initialConstraints;	// IMP=0x00100000004b063a
- (void)_setupSubviews;	// IMP=0x00100000004afe2a
- (long long)_currentSceneActivationState;	// IMP=0x00100000004afd8d
- (void)updateTheme;	// IMP=0x00100000004afd44
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000004afc1c
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00100000004afbb0
- (struct CGRect)_loadingAndErrorViewFrame;	// IMP=0x00100000004af9c0
- (void)viewDidLayoutSubviews;	// IMP=0x00100000004af8b0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000004af86d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000004af755
- (void)viewDidLoad;	// IMP=0x00100000004af4f3
- (void)replaceOriginWithCurrentLocation;	// IMP=0x00100000004af4ed
- (void)_prepareRideBookingForFirstUse;	// IMP=0x00100000004af400
@property(readonly, nonatomic) RouteSearchViewController *routeSearchViewController;
- (void)dealloc;	// IMP=0x00100000004af32c
- (id)initWithDataCoordinator:(id)arg1;	// IMP=0x00100000004af27d
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000004af1c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

