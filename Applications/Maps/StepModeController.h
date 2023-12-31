//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSBasedChromeViewController, MKMapCamera, MKMapItem, NSString, NavigationPowerLogger, Route, StatusBarBackgroundViewStyle, StepContainerViewController, UIView;
@protocol MapSelectionManagerDelegate, StatusBarSupplementaryView, StepActionCoordination;

@interface StepModeController : NSObject
{
    long long _previousHeadingIndicatorStyle;	// 8 = 0x8
    _Bool _previousEnabledStatus;	// 16 = 0x10
    NavigationPowerLogger *_powerLogger;	// 24 = 0x18
    _Bool _initializedWithUserTrackingMode;	// 32 = 0x20
    Route *_route;	// 40 = 0x28
    IOSBasedChromeViewController *_chromeViewController;	// 48 = 0x30
    StepContainerViewController *_containerViewController;	// 56 = 0x38
    long long _desiredTrackingMode;	// 64 = 0x40
    MKMapCamera *_desiredInitialCamera;	// 72 = 0x48
    unsigned long long _initialStepIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000c7aaee
@property(nonatomic) unsigned long long initialStepIndex; // @synthesize initialStepIndex=_initialStepIndex;
@property(retain, nonatomic) MKMapCamera *desiredInitialCamera; // @synthesize desiredInitialCamera=_desiredInitialCamera;
@property(nonatomic) _Bool initializedWithUserTrackingMode; // @synthesize initializedWithUserTrackingMode=_initializedWithUserTrackingMode;
@property(nonatomic) long long desiredTrackingMode; // @synthesize desiredTrackingMode=_desiredTrackingMode;
@property(retain, nonatomic) StepContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (_Bool)permitsLookAroundShowing;	// IMP=0x0010000000c7aa60
- (_Bool)wantsLookAroundShowing;	// IMP=0x0010000000c7aa58
- (_Bool)permitsWeatherShowing;	// IMP=0x0010000000c7aa50
- (_Bool)wantsWeatherShowing;	// IMP=0x0010000000c7aa48
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000c7a964
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000c7a920
- (_Bool)wantsStatusBarControl;	// IMP=0x0010000000c7a918
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
- (void)didEndDisplayingInLockScreen;	// IMP=0x0010000000c7a8db
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000c7a89e
- (_Bool)supportsLockscreen;	// IMP=0x0010000000c7a852
- (void)_locationManagerApprovalDidChange:(id)arg1;	// IMP=0x0010000000c7a75b
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c7a51d
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000c7a241
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000c79dbb
- (id)personalizedItemSources;	// IMP=0x0010000000c79c8c
- (id)fullscreenViewController;	// IMP=0x0010000000c79c7a
- (_Bool)wantsCompassLayoutControl;	// IMP=0x0010000000c79c64
@property(readonly, nonatomic) _Bool showsMapView;
- (id)mapViewDelegate;	// IMP=0x0010000000c79c4e
- (id)transitionControllerForPopToMode:(id)arg1;	// IMP=0x0010000000c79c35
- (id)transitionControllerForPushFromMode:(id)arg1;	// IMP=0x0010000000c79c1c
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000c79c14
@property(readonly, nonatomic) id <StepActionCoordination> actionCoordinator;
- (void)updateWithDisplayedStep:(id)arg1;	// IMP=0x0010000000c79a44
- (id)initWithRoute:(id)arg1 initialStepIndex:(unsigned long long)arg2 desiredUserTrackingMode:(id)arg3;	// IMP=0x0010000000c798f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapItem *mapItemForLookAroundButton;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;

@end

