//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FlyoverActionCoordinator, FlyoverBannerView, FlyoverStatusView, MKMapItem, NSMutableDictionary, NSString, NSTimer, UILabel, UIView;
@protocol FlyoverContainerViewControllerDelegate;

@interface FlyoverContainerViewController
{
    long long _initialOrientation;	// 8 = 0x8
    _Bool _flyoverIntroCompleted;	// 16 = 0x10
    int _flyoverMode;	// 20 = 0x14
    id <FlyoverContainerViewControllerDelegate> _flyoverDelegate;	// 24 = 0x18
    FlyoverActionCoordinator *_flyoverActionCoordinator;	// 32 = 0x20
    MKMapItem *_mapItem;	// 40 = 0x28
    unsigned long long _sessionInterruptedReason;	// 48 = 0x30
    long long _startViewMode;	// 56 = 0x38
    FlyoverStatusView *;	// 64 = 0x40
    NSTimer *_flyoverIntroTimer;	// 72 = 0x48
    UILabel *_tourLabel;	// 80 = 0x50
    FlyoverBannerView *_flyoverBannerView;	// 88 = 0x58
    NSString *_savedTourLabelText;	// 96 = 0x60
    unsigned long long _currentTrackingState;	// 104 = 0x68
    unsigned long long _currentTrackingStateReason;	// 112 = 0x70
    NSMutableDictionary *_trackingStateAndReasonChangesBegan;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000421f31
@property(retain, nonatomic) NSMutableDictionary *trackingStateAndReasonChangesBegan; // @synthesize trackingStateAndReasonChangesBegan=_trackingStateAndReasonChangesBegan;
@property(nonatomic) unsigned long long currentTrackingStateReason; // @synthesize currentTrackingStateReason=_currentTrackingStateReason;
@property(nonatomic) unsigned long long currentTrackingState; // @synthesize currentTrackingState=_currentTrackingState;
@property(nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property(copy, nonatomic) NSString *savedTourLabelText; // @synthesize savedTourLabelText=_savedTourLabelText;
@property(retain, nonatomic) FlyoverBannerView *flyoverBannerView; // @synthesize flyoverBannerView=_flyoverBannerView;
@property(retain, nonatomic) UILabel *tourLabel; // @synthesize tourLabel=_tourLabel;
@property(retain, nonatomic) NSTimer *flyoverIntroTimer; // @synthesize flyoverIntroTimer=_flyoverIntroTimer;
@property(retain, nonatomic) FlyoverStatusView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) _Bool flyoverIntroCompleted; // @synthesize flyoverIntroCompleted=_flyoverIntroCompleted;
@property(nonatomic) long long startViewMode; // @synthesize startViewMode=_startViewMode;
@property(readonly, nonatomic) unsigned long long sessionInterruptedReason; // @synthesize sessionInterruptedReason=_sessionInterruptedReason;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) FlyoverActionCoordinator *flyoverActionCoordinator; // @synthesize flyoverActionCoordinator=_flyoverActionCoordinator;
@property(nonatomic) __weak id <FlyoverContainerViewControllerDelegate> flyoverDelegate; // @synthesize flyoverDelegate=_flyoverDelegate;
- (void)stopFlyoverRequestedByBanner:(id)arg1;	// IMP=0x0010000000421ba7
@property(readonly, nonatomic) long long initialOrientation;
- (void)_enterFlyover;	// IMP=0x001000000042189a
- (void)_captureTelemetricEventWithOldKey:(int)arg1 newKey:(int)arg2;	// IMP=0x00100000004216f6
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000004212cc
- (id)mapView;	// IMP=0x001000000042127c
@property(readonly, nonatomic) UIView *passThroughView;
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x0010000000421224
- (void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2;	// IMP=0x0010000000420fa3
- (void)mapView:(id)arg1 flyoverModeDidChange:(int)arg2;	// IMP=0x0010000000420e05
- (void)mapView:(id)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;	// IMP=0x0010000000420c68
- (void)mapView:(id)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000420b6c
- (void)mapViewARSessionInterruptionEnded:(id)arg1;	// IMP=0x0010000000420ac7
- (void)mapView:(id)arg1 arSessionWasInterrupted:(unsigned long long)arg2;	// IMP=0x001000000042098e
- (void)mapView:(id)arg1 didEncounterARError:(id)arg2;	// IMP=0x00100000004208ec
- (void)cleanupFlyover;	// IMP=0x0010000000420843
- (void)mapViewDidExitAR:(id)arg1;	// IMP=0x00100000004206e8
- (void)mapViewDidEnterAR:(id)arg1;	// IMP=0x00100000004202fd
- (void)mapViewWillStartFlyoverTour:(id)arg1;	// IMP=0x00100000004201eb
- (void)mapViewWillEnterAR:(id)arg1;	// IMP=0x00100000004200eb
- (unsigned long long)maxLayoutForEdgeInsetsUpdate;	// IMP=0x00100000004200e0
- (void)updateMapEdgeInsets;	// IMP=0x0010000000420045
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x0010000000420033
- (_Bool)prefersStatusBarHidden;	// IMP=0x001000000041ffed
- (long long)preferredStatusBarStyle;	// IMP=0x001000000041ffe2
- (void)hideChrome:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000041fa94
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000041f99b
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x001000000041f94c
- (double)compassDiameter;	// IMP=0x001000000041f8fc
- (void)_setupConstraints;	// IMP=0x001000000041f28d
- (void)_setupViews;	// IMP=0x001000000041eed8
- (long long)preferredUserInterfaceStyle;	// IMP=0x001000000041eecd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000041ee85
- (void)viewDidLoad;	// IMP=0x001000000041edf8
- (void)dealloc;	// IMP=0x001000000041ed76
- (id)initWithMapItem:(id)arg1;	// IMP=0x001000000041ec28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

