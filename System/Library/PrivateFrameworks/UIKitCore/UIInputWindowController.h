//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIApplicationRotationFollowingControllerNoTouches.h"

@class NSDate, NSLayoutConstraint, NSMutableArray, NSString, SBSAssertion, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIInputWindowControllerHosting, UIKeyboardFloatingTransitionController, UIKeyboardPathEffectView, UIView, _UIKeyboardPasscodeObscuringInteraction;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches
{
    NSMutableArray *_animationStyleStack;	// 416 = 0x1a0
    int _suppressedCallbacks;	// 424 = 0x1a8
    int _suppressedNotifications;	// 428 = 0x1ac
    _Bool _isChangingPlacement;	// 432 = 0x1b0
    _Bool _isChangingInputViews;	// 433 = 0x1b1
    _Bool _isSnapshotting;	// 434 = 0x1b2
    int _hiddenCount;	// 436 = 0x1b4
    _Bool _inhibitingHiding;	// 440 = 0x1b8
    unsigned long long _rotationState;	// 448 = 0x1c0
    _Bool _disablePlacementChanges;	// 456 = 0x1c8
    _Bool _disableInRotating;	// 457 = 0x1c9
    _Bool _suppressUpdateVisibilityConstraints;	// 458 = 0x1ca
    _Bool _suppressUpdateViewConstraints;	// 459 = 0x1cb
    CDUnknownBlockType _pendingTransitionActivity;	// 464 = 0x1d0
    UIInputWindowControllerHosting *_hosting;	// 472 = 0x1d8
    UIView *_preRotationSnapshot;	// 480 = 0x1e0
    struct CGSize _preRotationInputViewSize;	// 488 = 0x1e8
    struct CGSize _preRotationInputAssistantViewSize;	// 504 = 0x1f8
    struct CGSize _preRotationInputAccessoryViewSize;	// 520 = 0x208
    struct CGAffineTransform _preRotationInputViewTransform;	// 536 = 0x218
    struct CGAffineTransform _preRotationInputAssistantViewTransform;	// 584 = 0x248
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;	// 632 = 0x278
    UIInputViewSetNotificationInfo *_rotationInfo;	// 680 = 0x2a8
    struct CGRect _preLayoutHostViewFrame;	// 688 = 0x2b0
    struct CGRect _previousAccessoryViewBounds;	// 720 = 0x2d0
    _Bool _didOverridePreLayoutHostViewFrame;	// 752 = 0x2f0
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;	// 760 = 0x2f8
    _Bool _wasOnScreen;	// 768 = 0x300
    NSString *_lastKeyboardID;	// 776 = 0x308
    NSDate *_keyboardShowTimestamp;	// 784 = 0x310
    _Bool _keyboardWindowSnapshotOn;	// 792 = 0x318
    CDUnknownBlockType _pendingCompleteAnimation;	// 800 = 0x320
    _Bool _supportsDockViewController;	// 808 = 0x328
    UIKeyboardFloatingTransitionController *_floatingTransitionController;	// 816 = 0x330
    _UIKeyboardPasscodeObscuringInteraction *_passcodeObscuringInteraction;	// 824 = 0x338
    UIView *_keyboardSnapshot;	// 832 = 0x340
    SBSAssertion *_fullScreenPresentationAssertion;	// 840 = 0x348
    _Bool _shouldNotifyRemoteKeyboards;	// 848 = 0x350
    _Bool _forceAccessoryViewToBottomOfHostView;	// 849 = 0x351
    _Bool _layoutGuideNeedsUpdate;	// 850 = 0x352
    _Bool _dontDismissKeyboardOnScrolling;	// 851 = 0x353
    _Bool _dontDismissReachability;	// 852 = 0x354
    UIInputViewSet *_inputViewSet;	// 856 = 0x358
    UIInputViewSetPlacement *_placement;	// 864 = 0x360
    UIInputViewController *_inputViewController;	// 872 = 0x368
    UIInputViewController *_inputAssistantViewController;	// 880 = 0x370
    UIInputViewController *_inputAccessoryViewController;	// 888 = 0x378
    UIInputViewSetPlacement *_postRotationPlacement;	// 896 = 0x380
    UIInputViewSet *_postRotationInputViewSet;	// 904 = 0x388
    CDUnknownBlockType _postRotationPendingBlock;	// 912 = 0x390
    UIInputViewSetNotificationInfo *_postRotationInputViewNotificationInfo;	// 920 = 0x398
    UIInputViewSetNotificationInfo *_templateNotificationInfo;	// 928 = 0x3a0
    UIInputViewPlacementTransition *_currentTransition;	// 936 = 0x3a8
    UIKeyboardPathEffectView *_pathEffectView;	// 944 = 0x3b0
    NSLayoutConstraint *_inputViewHeightConstraint;	// 952 = 0x3b8
    NSLayoutConstraint *_assistantViewHeightConstraint;	// 960 = 0x3c0
    NSLayoutConstraint *_accessoryViewHeightConstraint;	// 968 = 0x3c8
    UIInputViewSetNotificationInfo *_notificationInfoWaitingForInputUI;	// 976 = 0x3d0
    UIInputViewSet *_transientInputViewSet;	// 984 = 0x3d8
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0010000000cb2023
- (void).cxx_destruct;	// IMP=0x0000000000ccbc9a
@property(nonatomic) _Bool dontDismissReachability; // @synthesize dontDismissReachability=_dontDismissReachability;
@property(nonatomic) _Bool dontDismissKeyboardOnScrolling; // @synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling;
@property(readonly, nonatomic) _Bool isChangingInputViews; // @synthesize isChangingInputViews=_isChangingInputViews;
@property(nonatomic) _Bool layoutGuideNeedsUpdate; // @synthesize layoutGuideNeedsUpdate=_layoutGuideNeedsUpdate;
@property(retain, nonatomic) UIInputViewSet *transientInputViewSet; // @synthesize transientInputViewSet=_transientInputViewSet;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *notificationInfoWaitingForInputUI; // @synthesize notificationInfoWaitingForInputUI=_notificationInfoWaitingForInputUI;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // @synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(nonatomic) _Bool forceAccessoryViewToBottomOfHostView; // @synthesize forceAccessoryViewToBottomOfHostView=_forceAccessoryViewToBottomOfHostView;
@property(readonly, nonatomic) UIInputWindowControllerHosting *hosting; // @synthesize hosting=_hosting;
@property(nonatomic) _Bool shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // @synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo;
@property(copy, nonatomic) CDUnknownBlockType postRotationPendingBlock; // @synthesize postRotationPendingBlock=_postRotationPendingBlock;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputAssistantViewController; // @synthesize _inputAssistantViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(retain, nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
- (void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000ccb997
@property(readonly, nonatomic) __weak UIInputViewSetPlacement *expectedPlacement;
@property(readonly, nonatomic) _Bool isTransitioningBetweenFloatingStates;
- (void)updateKeyboardSizeClass;	// IMP=0x0000000000ccb716
@property(readonly, nonatomic) _Bool isTransitioningBetweenKeyboardStates;
@property(readonly, nonatomic) _Bool isTransitionStarted;
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)cancelCurrentTransition;	// IMP=0x0000000000ccb471
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000ccb2da
- (_Bool)inhibitRotationAnimation;	// IMP=0x0000000000ccb2ca
- (void)transferPlacementStateToInputWindowController:(id)arg1;	// IMP=0x0000000000ccaeba
- (void)setPlacementChangeDisabled:(_Bool)arg1 withPlacement:(id)arg2;	// IMP=0x0000000000ccacd9
- (_Bool)disablePlacementChanges;	// IMP=0x0000000000ccacc9
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;	// IMP=0x0000000000ccac05
- (void)presentationTransitionDidEnd:(id)arg1;	// IMP=0x0000000000ccabf1
- (void)presentationTransitionWillBegin:(id)arg1;	// IMP=0x0000000000cca79d
- (void)setFullScreenPresentationAssertion:(id)arg1;	// IMP=0x0000000000cca74a
- (void)didEndIndirectSelectionGesture;	// IMP=0x0000000000cca736
- (void)willBeginIndirectSelectionGesture;	// IMP=0x0000000000cca71f
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000cca702
- (void)resetBackdropHeight;	// IMP=0x0000000000cca6e5
- (void)animateAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x0000000000cca562
- (_Bool)isDragging;	// IMP=0x0000000000cca50e
- (_Bool)isSplitting;	// IMP=0x0000000000cca490
- (_Bool)isTranslating;	// IMP=0x0000000000cca412
- (_Bool)isChangingPlacement;	// IMP=0x0000000000cca402
- (_Bool)isOnScreenRotating;	// IMP=0x0000000000cca386
- (_Bool)isRotating;	// IMP=0x0000000000cca353
- (_Bool)isUndocked;	// IMP=0x0000000000cca30f
- (_Bool)hasInputOrAssistantViewsOnScreen;	// IMP=0x0000000000cca1e4
- (_Bool)isOnScreen;	// IMP=0x0000000000cca1a0
- (_Bool)inputViewSetContainsView:(id)arg1;	// IMP=0x0000000000cca132
- (_Bool)sizesWindowToScene;	// IMP=0x0000000000cca0bd
- (struct CGRect)visibleInputViewFrame;	// IMP=0x0000000000cc9fc3
- (struct CGRect)_visibleInputViewFrame;	// IMP=0x0000000000cc9df6
- (struct CGRect)visibleFrame;	// IMP=0x0000000000cc9cfc
- (struct CGRect)_visibleFrame;	// IMP=0x0000000000cc9b30
- (id)screenSnapshotOfView:(id)arg1;	// IMP=0x0000000000cc9840
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(_Bool)arg2;	// IMP=0x0000000000cc967d
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x0000000000cc962a
- (void)setRotationAwarePlacement:(id)arg1;	// IMP=0x0000000000cc95a7
- (void)setPlacement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000cc9590
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cc9361
- (id)currentPresentationPlacement;	// IMP=0x0000000000cc7f88
- (unsigned long long)changeToInputViewSet:(id)arg1;	// IMP=0x0000000000cc6cc4
- (long long)overrideUserInterfaceStyle;	// IMP=0x0000000000cc6c0a
- (void)updateInputAssistantView:(id)arg1;	// IMP=0x0000000000cc665d
- (void)invalidateInputAccessoryView;	// IMP=0x0000000000cc634b
- (void)invalidateInputAssistantView;	// IMP=0x0000000000cc605d
- (void)validateInputView;	// IMP=0x0000000000cc5fc9
- (void)invalidateInputView;	// IMP=0x0000000000cc5d46
- (void)updateKeyboardDockViewVisibility;	// IMP=0x0000000000cc5ce2
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;	// IMP=0x0000000000cc5b73
- (void)generateNotificationsForCompactAssistantFlickGestureCompletion:(id)arg1;	// IMP=0x0000000000cc5919
- (void)generateNotificationsForStart:(_Bool)arg1;	// IMP=0x0000000000cc5638
- (void)postTransitionEndNotification;	// IMP=0x0000000000cc543f
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000cc5376
- (_Bool)isHostingView:(id)arg1;	// IMP=0x0000000000cc51ba
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;	// IMP=0x0000000000cc51b4
- (struct CGSize)sizeForInputViewController:(id)arg1 inputView:(id)arg2;	// IMP=0x0000000000cc5103
- (struct CGSize)sizeForInputViewController:(id)arg1 inputView:(id)arg2 includeAssistantBar:(_Bool)arg3;	// IMP=0x0000000000cc506f
@property(readonly, nonatomic) long long keyboardOrientation;
@property(readonly, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
- (void)clearRotationState;	// IMP=0x0000000000cc4eed
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000cc40e6
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000cc30a9
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000cc1f2a
- (_Bool)_useLiveRotation;	// IMP=0x0000000000cc1ee2
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x0000000000cc1ed1
- (void)updateKeyboardLayoutGuideForRotationOrientation:(long long)arg1;	// IMP=0x0000000000cc1825
- (void)finishSplitTransition;	// IMP=0x0000000000cc17d9
- (void)prepareForSplitTransition;	// IMP=0x0000000000cc178d
@property(nonatomic) int hiddenCount;
- (void)setInputViewsHidden:(_Bool)arg1;	// IMP=0x0000000000cc1454
- (void)setKeyboardWindowSnapshotOn:(_Bool)arg1;	// IMP=0x0000000000cc1404
@property(readonly, nonatomic, getter=isInputViewsHidden) _Bool inputViewsHidden;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;	// IMP=0x0000000000cc10ca
- (struct CGRect)transitioningFrame;	// IMP=0x0000000000cc106e
- (id)transitioningView;	// IMP=0x0000000000cc105c
- (id)viewForTransitionScreenSnapshot;	// IMP=0x0000000000cc0ffc
- (void)syncToExistingAnimations;	// IMP=0x0000000000cc0f3e
- (void)chainPlacementsIfNecessaryFrom:(id)arg1 toPlacement:(id)arg2 transition:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cbfe56
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cbcb92
- (void)updateSizingFromRemoteChange;	// IMP=0x0000000000cbbbd3
- (void)flushPendingActivities;	// IMP=0x0000000000cbbb83
- (void)addPendingActivity:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cbba61
- (_Bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;	// IMP=0x0000000000cbb5ac
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;	// IMP=0x0000000000cbb53e
- (id)nextAnimationStyle;	// IMP=0x0000000000cbb4da
- (void)popAnimationStyle;	// IMP=0x0000000000cbb499
- (void)pushAnimationStyle:(id)arg1;	// IMP=0x0000000000cbb475
- (void)updateForKeyplaneChangeWithContext:(id)arg1;	// IMP=0x0000000000cbb23c
- (void)setDisableUpdateMaskForSecureTextEntry:(_Bool)arg1;	// IMP=0x0000000000cbb0d5
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(_Bool)arg1 layoutSubviews:(_Bool)arg2;	// IMP=0x0000000000cbae97
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000cba1fe
- (struct CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(struct CGRect)arg1;	// IMP=0x0000000000cb9ee0
- (id)_screenCoordinateSpace;	// IMP=0x0000000000cb9e66
- (void)transferActiveNotificationInfoToInfo:(id)arg1;	// IMP=0x0000000000cb9cdc
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000cb9c19
- (_Bool)_allowsSkippingLayout;	// IMP=0x0000000000cb9c11
- (void)setHostingNeedsLayout;	// IMP=0x0000000000cb9bf4
- (void)_forcePreLayoutHostViewFrame;	// IMP=0x0000000000cb9b5e
- (void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb99bd
- (void)updateAppearStatesForPlacement:(id)arg1 start:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000cb9938
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000cb97d3
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(_Bool)arg3;	// IMP=0x0000000000cb9790
- (void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb8a9b
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb8a3c
- (void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb7e9b
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb7e3c
- (_Bool)shouldPostNotification:(unsigned long long)arg1 withInfo:(id)arg2;	// IMP=0x0000000000cb7c61
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000cb7979
- (id)convertUserInfo:(id)arg1;	// IMP=0x0000000000cb72ce
- (_Bool)needsConvertToSceneCoordinates;	// IMP=0x0000000000cb7050
- (_Bool)keyboardControlsNotifications;	// IMP=0x0000000000cb6f97
- (id)initialNotificationInfo;	// IMP=0x0000000000cb6f34
- (void)keyboardMovedToScreenPosition:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cb6440
- (void)keyboardMoveWithInfo:(id)arg1;	// IMP=0x0000000000cb61b6
- (void)updateGuideForOffscreenRotationWithDuration:(double)arg1;	// IMP=0x0000000000cb60bb
- (void)updateOffscreenKeyboardLayoutGuide;	// IMP=0x0000000000cb5fcb
- (void)moveKeyboardLayoutGuideOffscreen;	// IMP=0x0000000000cb5f8d
- (void)keyboardDismissWithInfo:(id)arg1;	// IMP=0x0000000000cb5d60
- (void)keyboardMoveOfType:(unsigned long long)arg1 info:(id)arg2;	// IMP=0x0000000000cb5b66
- (void)updateKeyboardPlacementForGuide:(id)arg1;	// IMP=0x0000000000cb5a6d
- (void)keyboardIsDocking:(_Bool)arg1;	// IMP=0x0000000000cb59ac
- (void)changeGuideAnimationState:(_Bool)arg1;	// IMP=0x0000000000cb58eb
- (void)changeGuideAnimationOptions:(unsigned long long)arg1 duration:(double)arg2;	// IMP=0x0000000000cb5814
- (void)refreshKeyboardLayoutGuide;	// IMP=0x0000000000cb54ff
- (_Bool)currentControllerShouldUpdateKeyboardLayoutGuide;	// IMP=0x0000000000cb5423
@property(readonly, nonatomic) _Bool isSnapshotting;
- (void)didSnapshot;	// IMP=0x0000000000cb53a4
- (void)willSnapshot;	// IMP=0x0000000000cb533a
- (void)clearKeyboardSnapshot;	// IMP=0x0000000000cb5264
- (void)takeKeyboardSnapshotIgnoringSpotlightCheck:(_Bool)arg1;	// IMP=0x0000000000cb4c4c
- (void)hostAppSceneBoundsChanged;	// IMP=0x0000000000cb4783
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;	// IMP=0x0000000000cb4493
- (void)_updateContentOverlayInsetsForSelfAndChildren;	// IMP=0x0000000000cb4452
- (void)updateSupportsDockViewController;	// IMP=0x0000000000cb41bf
- (struct UIEdgeInsets)_inputViewPadding;	// IMP=0x0000000000cb4181
- (void)updateViewConstraints;	// IMP=0x0000000000cb4128
- (void)updateViewSizingConstraints;	// IMP=0x0000000000cb410b
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000cb3fb9
- (_Bool)isViewLandscape;	// IMP=0x0000000000cb3f29
- (struct UIEdgeInsets)_viewSafeAreaInsetsFromScene;	// IMP=0x0000000000cb3e71
- (_Bool)shouldBeginTransitionForController:(id)arg1;	// IMP=0x0000000000cb3db4
- (void)didEndTransitionWithController:(id)arg1;	// IMP=0x0000000000cb3bdf
- (void)willBeginTransitionWithController:(id)arg1;	// IMP=0x0000000000cb3b76
- (id)inputWindowControllerForController:(id)arg1;	// IMP=0x0000000000cb3b6d
- (void)updateGestureRecognizers;	// IMP=0x0000000000cb39e7
- (void)dismissViewController:(id)arg1;	// IMP=0x0000000000cb38f9
- (void)presentViewController:(id)arg1;	// IMP=0x0000000000cb3723
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cb369e
- (struct CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;	// IMP=0x0000000000cb35da
- (struct CGRect)_boundsForOrientation:(long long)arg1;	// IMP=0x0000000000cb3558
- (struct CGPoint)_centerForOrientation:(long long)arg1;	// IMP=0x0000000000cb3444
- (struct CGRect)_defaultInitialViewFrame;	// IMP=0x0000000000cb33e0
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cb31d5
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;	// IMP=0x0000000000cb316f
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cb3144
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cb3120
@property(readonly, nonatomic) UIKeyboardPathEffectView *_pathEffectView; // @synthesize _pathEffectView;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputAssistantView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)hostViewWillenterForeground;	// IMP=0x0000000000cb2d33
- (void)hostViewDidEnterBackground;	// IMP=0x0000000000cb2ca6
- (void)hostViewWillDisappear;	// IMP=0x0000000000cb2baa
- (void)didSuspend:(id)arg1;	// IMP=0x0000000000cb2af0
- (void)willResume:(id)arg1;	// IMP=0x0000000000cb2935
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;	// IMP=0x0000000000cb248a
- (void)prepareForInputAssistant:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cb22fe
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;	// IMP=0x0000000000cb2276
- (void)registerPowerLogEvent:(_Bool)arg1;	// IMP=0x0000000000cb2270
- (void)setExclusiveTouch:(_Bool)arg1;	// IMP=0x0000000000cb20d6
@property(readonly, nonatomic) UIView *bottomEdgeView;
- (_Bool)crescendoEnabled;	// IMP=0x0000000000cb202b
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000cb201b
- (void)viewDidLoad;	// IMP=0x0000000000cb1fab
- (void)loadView;	// IMP=0x0000000000cb1ed4
- (void)_didChangeDeepestActionResponder;	// IMP=0x0000000000cb1ece
- (id)inputSetContainerView;	// IMP=0x0000000000cb1ebc
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000cb1e8d
- (void)_updatePlacementWithPlacement:(id)arg1;	// IMP=0x0000000000cb1b9a
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000cb1ab3
- (_Bool)_isSecure;	// IMP=0x0000000000cb1aab
- (void)dealloc;	// IMP=0x0000000000cb1939
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000cb1705

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
