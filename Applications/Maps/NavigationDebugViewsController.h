//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MNLocation, MNTrace, MNTraceBookmarkRecorder, MNTracePlayer, NSString, NSTimer, NavigationCameraSnapshotPickerViewController, NavigationDebugSplitViewController, TraceBookmarkSelector, TraceControlView, TraceSliderView, UILongPressGestureRecognizer, UINavigationController, UITapGestureRecognizer, UIView, UIViewController, UIWindow;
@protocol NavigationDebugViewsControllerDelegate;

@interface NavigationDebugViewsController : NSObject
{
    id <NavigationDebugViewsControllerDelegate> _delegate;	// 8 = 0x8
    MNTracePlayer *_tracePlayer;	// 16 = 0x10
    NSTimer *_hideTraceControlTimer;	// 24 = 0x18
    TraceControlView *_traceControlView;	// 32 = 0x20
    TraceSliderView *_traceSliderView;	// 40 = 0x28
    UIView *_debugControlsView;	// 48 = 0x30
    TraceBookmarkSelector *_traceBookmarkSelector;	// 56 = 0x38
    _Bool _shouldResumeTracePlayer;	// 64 = 0x40
    UITapGestureRecognizer *_oldBookmarkGestureRecognizer;	// 72 = 0x48
    UILongPressGestureRecognizer *_bookmarkGestureRecognizer;	// 80 = 0x50
    MKMapView *_mapView;	// 88 = 0x58
    _Bool _traceControlsAreShowing;	// 96 = 0x60
    _Bool _debugViewsWereAdded;	// 97 = 0x61
    _Bool _showTraceControlsForStaleLocations;	// 98 = 0x62
    MNTrace *_trace;	// 104 = 0x68
    MNTraceBookmarkRecorder *_bookmarkRecorder;	// 112 = 0x70
    _Bool _isSimulationPlaying;	// 120 = 0x78
    NavigationCameraSnapshotPickerViewController *_cameraSnapshotPickerVC;	// 128 = 0x80
    NavigationDebugSplitViewController *_splitViewController;	// 136 = 0x88
    UIWindow *_window;	// 144 = 0x90
    UINavigationController *_nonsplitRootViewController;	// 152 = 0x98
    UIViewController *_mainViewController;	// 160 = 0xa0
    UIViewController *_modalPresentingViewController;	// 168 = 0xa8
    _Bool _isPresentingModallyPickerVC;	// 176 = 0xb0
    UINavigationController *_modalCameraSnapshotPickerVC;	// 184 = 0xb8
    _Bool _shouldUpdateLocationPuck;	// 192 = 0xc0
    MNLocation *_puckLocation;	// 200 = 0xc8
    _Bool _automaticallyHideTraceControls;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0020000000cd2026
@property(retain, nonatomic) UIView *debugControlsView; // @synthesize debugControlsView=_debugControlsView;
- (void);	// IMP=0x0010000000cd200c
@property(nonatomic) _Bool showTraceControlsForStaleLocations; // @synthesize showTraceControlsForStaleLocations=_showTraceControlsForStaleLocations;
@property(readonly, nonatomic) _Bool isShowingTraceControls; // @synthesize isShowingTraceControls=_traceControlsAreShowing;
@property(nonatomic) _Bool automaticallyHideTraceControls; // @synthesize automaticallyHideTraceControls=_automaticallyHideTraceControls;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSTimer *hideTraceControlTimer; // @synthesize hideTraceControlTimer=_hideTraceControlTimer;
- (void)navigationService:(id)arg1 didRecordTraceBookmarkWithID:(unsigned long long)arg2;	// IMP=0x0010000000cd1ed8
- (void)navigationService:(id)arg1 didSeekToTracePosition:(double)arg2;	// IMP=0x0010000000cd1da1
- (void)navigationService:(id)arg1 didPlayTracePosition:(double)arg2;	// IMP=0x0010000000cd1d45
- (void)navigationServiceDidResumeTrace:(id)arg1;	// IMP=0x0010000000cd1c62
- (void)navigationServiceDidPauseTrace:(id)arg1;	// IMP=0x0010000000cd1b7f
- (void)navigationService:(id)arg1 didFinishLoadingTrace:(id)arg2;	// IMP=0x0010000000cd1b21
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x0010000000cd1abf
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0010000000cd19b6
- (void)cameraSnapshotPicker:(id)arg1 didSelectCameraSnapshot:(id)arg2;	// IMP=0x0010000000cd1791
@property(readonly, nonatomic) NSString *tracePath;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0010000000cd170e
- (void)_dismissModalCameraSnapshotPickerIfNeededAnimated:(_Bool)arg1;	// IMP=0x0010000000cd162d
- (void)_presentCameraSnapshotPickerModallyIfNeededAnimated:(_Bool)arg1;	// IMP=0x0010000000cd1416
- (void)_done;	// IMP=0x0010000000cd13da
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;	// IMP=0x0010000000cd13c1
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x0010000000cd138c
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;	// IMP=0x0010000000cd136b
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;	// IMP=0x0010000000cd1284
- (void)toggleCameraSnapshotPickerVisibility;	// IMP=0x0010000000cd122d
- (void)traceBookmarkSelector:(id)arg1 choseGuideMeBookmark:(id)arg2;	// IMP=0x0010000000cd1227
- (void)traceSliderViewCancelledEditing:(id)arg1;	// IMP=0x0010000000cd1215
- (void)traceSliderView:(id)arg1 editingEndedAtTime:(double)arg2;	// IMP=0x0010000000cd1046
- (void)_sliderDidEndEditing;	// IMP=0x0010000000cd0fdb
- (void)traceSliderViewEditingDidBegin:(id)arg1;	// IMP=0x0010000000cd0f62
- (void)traceControlViewPressedViewCameraSnapshotsButton:(id)arg1;	// IMP=0x0010000000cd0f50
- (void)traceControlViewPressedSaveCameraSnapshotButton:(id)arg1;	// IMP=0x0010000000cd0247
- (void)traceControlViewPressedEndLoggingButton:(id)arg1;	// IMP=0x0010000000cd0241
- (void)traceControlViewPressedStartLoggingButton:(id)arg1;	// IMP=0x0010000000cd023b
- (void)traceControlViewPressedBookmarksButton:(id)arg1;	// IMP=0x0010000000cd0109
- (void)traceControlView:(id)arg1 setPlaySpeed:(double)arg2;	// IMP=0x0010000000cd003d
- (void)traceControlViewJumpedBack:(id)arg1;	// IMP=0x0010000000ccffdd
- (void)traceControlView:(id)arg1 setPlaying:(_Bool)arg2;	// IMP=0x0010000000ccff34
- (void)tracePlayer:(id)arg1 didRecieveNetworkEvent:(id)arg2;	// IMP=0x0010000000ccff2e
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000ccff28
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000ccff22
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;	// IMP=0x0010000000ccff1c
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x0010000000ccff16
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0010000000ccff10
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000ccff0a
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;	// IMP=0x0010000000ccff04
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x0010000000ccfefe
- (void)tracePlayerDidStayOnRoute:(id)arg1;	// IMP=0x0010000000ccfef8
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 waypoints:(id)arg4;	// IMP=0x0010000000ccfef2
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;	// IMP=0x0010000000ccfe99
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;	// IMP=0x0010000000ccfe93
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;	// IMP=0x0010000000ccfd54
- (void)tracePlayerDidResume:(id)arg1;	// IMP=0x0010000000ccfc2c
- (void)tracePlayerDidPause:(id)arg1;	// IMP=0x0010000000ccfb04
- (void)tracePlayerDidStop:(id)arg1;	// IMP=0x0010000000ccfaea
- (void)tracePlayerDidStart:(id)arg1;	// IMP=0x0010000000ccfad0
- (void)_addTraceBookmark;	// IMP=0x0010000000ccfa3b
- (void)_threeFingerTapBookmarkGesture:(id)arg1;	// IMP=0x0010000000ccfa29
- (void)_longPressBookmarkGesture:(id)arg1;	// IMP=0x0010000000ccf9ed
- (void)didManuallyRemoveDebugViews;	// IMP=0x0010000000ccf863
- (void)removeDebugViewsFromView:(id)arg1;	// IMP=0x0010000000ccf7e3
- (void)_setUpCameraSnapshotPickerVCFromWindow:(id)arg1;	// IMP=0x0010000000ccf561
- (void)setUpCameraSnapshotPickerVCFromViewController:(id)arg1;	// IMP=0x0010000000ccf4ea
- (void)didManuallyAddDebugViews;	// IMP=0x0010000000ccf4de
- (void)addDebugViewsToView:(id)arg1 layoutGuide:(id)arg2 mapView:(id)arg3 modalPresentingViewController:(id)arg4;	// IMP=0x0010000000ccf0ed
@property(readonly, nonatomic) double debugViewHeight;
- (_Bool)_isSimulating;	// IMP=0x0010000000cce8e9
- (void)hideTraceControlsAnimated:(_Bool)arg1;	// IMP=0x0010000000cce80f
- (void)hideTraceControls;	// IMP=0x0010000000cce7fb
- (void)resetHideTraceControlsTimer;	// IMP=0x0010000000cce760
@property(readonly, nonatomic) MNTracePlayer *tracePlayer;
- (void)resetTracePlayer;	// IMP=0x0010000000cce6fb
- (void)showTraceControls;	// IMP=0x0010000000cce5dd
- (void)prepareToRunNavigation;	// IMP=0x0010000000cce59d
- (void)dealloc;	// IMP=0x0010000000cce4e5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000cce3ad
- (id)init;	// IMP=0x0010000000cce399

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

