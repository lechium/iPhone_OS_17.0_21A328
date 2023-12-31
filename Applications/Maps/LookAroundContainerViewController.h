//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LookAroundActionCoordinator, LookAroundPIPViewController, LookAroundPuckViewController, LookAroundTTRButtonView, LookAroundTrayContaineeViewController, MKLookAroundEntryPoint, MKLookAroundView, MKMapItem, NSString, UITapGestureRecognizer, UIView;
@protocol LookAroundContainerViewControllerAnimationDelegate, LookAroundPIPDataCoordinator, ShareItemSource;

@interface LookAroundContainerViewController
{
    MKLookAroundEntryPoint *_entryPoint;	// 8 = 0x8
    UIView *_lookAroundViewOriginalSuperview;	// 16 = 0x10
    LookAroundPIPViewController *_pipViewController;	// 24 = 0x18
    LookAroundPuckViewController *_puckViewController;	// 32 = 0x20
    LookAroundTrayContaineeViewController *_trayContaineeViewController;	// 40 = 0x28
    LookAroundTTRButtonView *_ttrButtonView;	// 48 = 0x30
    unsigned long long _displayState;	// 56 = 0x38
    unsigned long long _locationState;	// 64 = 0x40
    UITapGestureRecognizer *_pipViewTapGestureRecognizer;	// 72 = 0x48
    id _chromeDeactivationToken;	// 80 = 0x50
    _Bool _containerIsVisible;	// 88 = 0x58
    _Bool _forceUpdatePIPLayout;	// 89 = 0x59
    _Bool _isRespondingToPanGesture;	// 90 = 0x5a
    _Bool _showsFullScreen;	// 91 = 0x5b
    _Bool _showsLabels;	// 92 = 0x5c
    _Bool _modeIsCurrent;	// 93 = 0x5d
    _Bool _modeTransition;	// 94 = 0x5e
    _Bool _selectingLabelMarker;	// 95 = 0x5f
    double _currentDragRatio;	// 96 = 0x60
    double _currentDragScale;	// 104 = 0x68
    struct CGSize _viewWillTransitionToSize;	// 112 = 0x70
    id <LookAroundContainerViewControllerAnimationDelegate> _animationDelegate;	// 128 = 0x80
    LookAroundActionCoordinator *_actionCoordinator;	// 136 = 0x88
    MKLookAroundView *_lookAroundView;	// 144 = 0x90
    struct CGRect _lookAroundButtonFrame;	// 152 = 0x98
    struct CGRect _originFrame;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000072091b
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) struct CGRect lookAroundButtonFrame; // @synthesize lookAroundButtonFrame=_lookAroundButtonFrame;
@property(readonly, nonatomic) MKLookAroundView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
@property(readonly, nonatomic) LookAroundActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) __weak id <LookAroundContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (id)createActivityViewControllerForCurrentContext;	// IMP=0x00100000007207ab
@property(readonly, nonatomic) id <ShareItemSource> currentShareItemSource;
- (int)_targetForAnalytics;	// IMP=0x00100000007204ed
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;	// IMP=0x001000000072031a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000007202fd
- (void)_updateTTRButtonState;	// IMP=0x0010000000720289
- (void)_setModeDidResignCurrent;	// IMP=0x001000000072025d
- (void)_setModeDidBecomeCurrent;	// IMP=0x00100000007201ce
- (void)_removePuckViewFromMapView;	// IMP=0x0010000000720149
- (void)_insertPuckViewIntoMapView:(id)arg1;	// IMP=0x001000000071fea6
- (_Bool)_shouldTakeSidebarIntoAccount;	// IMP=0x001000000071fdda
- (_Bool)_shouldTakePIPViewHeightIntoAccount;	// IMP=0x001000000071fbe2
- (void)_shareCurrentLocation:(id)arg1;	// IMP=0x001000000071fa2d
- (struct CGRect)_sanitizedOriginFrame;	// IMP=0x001000000071f803
- (void)_reportAnIssue;	// IMP=0x001000000071f72c
- (void)_toggleShowingLabels:(_Bool)arg1;	// IMP=0x001000000071f68c
- (void)_captureActivityCardAnalyticsForUserAction:(int)arg1 onTarget:(int)arg2;	// IMP=0x001000000071f420
- (id)titleForMapActivity:(id)arg1;	// IMP=0x001000000071f377
- (id)urlForMapActivity:(id)arg1;	// IMP=0x001000000071f35a
- (void)lookAroundViewWillChangeLocationInfo:(id)arg1;	// IMP=0x001000000071f2d8
- (void)lookAroundView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x001000000071f036
- (void)lookAroundView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x001000000071ed1c
- (void)lookAroundView:(id)arg1 didChangeLocationInfo:(id)arg2;	// IMP=0x001000000071ec90
- (void)lookAroundView:(id)arg1 didChangeCameraFrame:(id)arg2;	// IMP=0x001000000071ec18
- (void)lookAroundViewDidPan:(id)arg1;	// IMP=0x001000000071ebe0
- (void)lookAroundView:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;	// IMP=0x001000000071eb8f
- (void)lookAroundView:(id)arg1 didTapAtPoint:(struct CGPoint)arg2 areaAvailable:(_Bool)arg3;	// IMP=0x001000000071ea42
- (void)lookAroundView:(id)arg1 didTapLabelMarker:(id)arg2;	// IMP=0x001000000071ea0a
- (void)lookAroundViewDidStopUserInteraction:(id)arg1;	// IMP=0x001000000071e992
- (void)lookAroundViewDidStartUserInteraction:(id)arg1;	// IMP=0x001000000071e91a
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x001000000071e914
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x001000000071e90e
@property(readonly, nonatomic) UIView *passThroughView;
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapReportAnIssueButton:(id)arg2;	// IMP=0x001000000071e870
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapShareButton:(id)arg2;	// IMP=0x001000000071e85b
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapToggleLabelsButton:(id)arg2;	// IMP=0x001000000071e807
- (void)lookAroundTTRButtonView:(id)arg1 didTapTTRButton:(id)arg2;	// IMP=0x001000000071e797
- (void)mapView:(id)arg1 didChangeLookAroundAvailability:(long long)arg2;	// IMP=0x001000000071e71a
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x001000000071e643
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000071e5cb
- (void)mapView:(id)arg1 willSelectLabelMarker:(id)arg2;	// IMP=0x001000000071e516
- (void)mapViewDidStopUserInteraction:(id)arg1;	// IMP=0x001000000071e494
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x001000000071e41c
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;	// IMP=0x001000000071e36b
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x001000000071e2cf
- (void)lookAroundPIPDataCoordinatorDidEndMovingLookAroundView:(id)arg1;	// IMP=0x001000000071e1e7
- (void)lookAroundPIPDataCoordinatorDidStartPanningMapView:(id)arg1;	// IMP=0x001000000071e0e0
- (long long)preferredUserInterfaceStyle;	// IMP=0x001000000071e014
- (void)updateMapEdgeInsets;	// IMP=0x001000000071dc00
- (double)sidebarWidthIfNeeded;	// IMP=0x001000000071da44
- (double)pipViewWidthIfNeeded;	// IMP=0x001000000071d80d
- (double)topEdgeInset;	// IMP=0x001000000071d60b
- (_Bool)_pipHugsLeading;	// IMP=0x001000000071d502
- (void)resumePropagatingEdgeInsets;	// IMP=0x001000000071d4fc
- (void)suspendPropagatingEdgeInsets;	// IMP=0x001000000071d4f6
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x001000000071d2f7
- (void)popLastViewControllerAnimated:(_Bool)arg1;	// IMP=0x001000000071d1ee
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x001000000071d13d
- (_Bool)useBackdrop;	// IMP=0x001000000071d135
- (void)snapToLayout:(unsigned long long)arg1;	// IMP=0x001000000071d0f4
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x001000000071d0a9
- (void)animateTransitionToFullScreen:(_Bool)arg1;	// IMP=0x001000000071c995
- (void)prepareForExit;	// IMP=0x001000000071c981
- (void)prepareForExitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000071c8b0
- (void)_showPuckAnimated;	// IMP=0x001000000071c7be
- (void)didCompleteModeTransition;	// IMP=0x001000000071c7a1
- (void)animateToModeTransition:(id)arg1;	// IMP=0x001000000071bfc8
- (void)animateFromModeTransition:(id)arg1;	// IMP=0x001000000071b7de
- (void)_showTTRButton:(_Bool)arg1;	// IMP=0x001000000071b3dd
- (void)_setupForPIP;	// IMP=0x001000000071b070
- (void)_setupForFullScreen;	// IMP=0x001000000071ad8d
- (void)_handlePIPViewTap:(id)arg1;	// IMP=0x001000000071ad71
- (_Bool)_getRatioControls:(double *)arg1 scale:(double *)arg2 forContentHeightValue:(double)arg3;	// IMP=0x001000000071ac08
- (void)_updateLayoutWithCurrentValue;	// IMP=0x001000000071ab12
- (void)_updateLayoutWithValue:(double)arg1;	// IMP=0x001000000071aa08
- (struct CGAffineTransform)transformForPIPView:(struct CGRect)arg1;	// IMP=0x001000000071a8a6
- (unsigned long long)_pipLayout;	// IMP=0x001000000071a6ac
- (struct CGRect)frameForPIPView;	// IMP=0x0010000000719ea2
- (void)_updatePIPLayout;	// IMP=0x0010000000719a97
- (void)_updateCompassLayout;	// IMP=0x00100000007198e3
- (struct UIEdgeInsets)compassInsets;	// IMP=0x0010000000719666
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000719493
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000071927f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000007191c6
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000007190d1
- (void)viewDidLoad;	// IMP=0x0010000000718ff5
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000718f9f
- (id)pipViewController;	// IMP=0x0010000000718dc5
- (id)puckViewController;	// IMP=0x0010000000718d07
@property(readonly, nonatomic) id <LookAroundPIPDataCoordinator> dataCoordinator;
@property(readonly, nonatomic) MKMapItem *currentMapItem;
@property(readonly, nonatomic) _Bool isDisplayingLookAroundPIP;
@property(readonly, nonatomic) _Bool isDisplayingLookAroundFullScreen;
- (void)dealloc;	// IMP=0x0010000000718be1
- (id)initWithEntryPoint:(id)arg1 lookAroundView:(id)arg2 showsFullScreen:(_Bool)arg3;	// IMP=0x0010000000718924
- (id)_createOrReuseLookAroundView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000071882e
- (void)_commonInit;	// IMP=0x00100000007186f8
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000007186f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

