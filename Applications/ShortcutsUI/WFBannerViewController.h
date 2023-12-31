//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BNBannerSource, NSString, UIView, WFBannerGesture, WFCompactPlatterSashView, WFCompactPlatterView, WFCompactPlatterViewController, WFCompactStatusViewController, WFDispatchSourceTimer, WFPassthroughDimmingView, WFWorkflowRunningContext;
@protocol BNPresentableContext, SBUIPresentableDismissalPreventionAssertion, WFBannerViewControllerDelegate;

@interface WFBannerViewController : UIViewController
{
    _Bool _hinting;	// 8 = 0x8
    _Bool _freezePlatterLayout;	// 9 = 0x9
    _Bool _keyboardIsVisible;	// 10 = 0xa
    id <BNPresentableContext> _presentableContext;	// 16 = 0x10
    id <WFBannerViewControllerDelegate> _delegate;	// 24 = 0x18
    WFWorkflowRunningContext *_associatedRunningContext;	// 32 = 0x20
    WFCompactPlatterViewController *_embeddedPlatter;	// 40 = 0x28
    WFCompactStatusViewController *_queuedStatusPlatter;	// 48 = 0x30
    CDUnknownBlockType _bannerWillDismissHandler;	// 56 = 0x38
    WFCompactPlatterViewController *_platterAwaitingModalPresentation;	// 64 = 0x40
    BNBannerSource *_bannerSource;	// 72 = 0x48
    WFPassthroughDimmingView *_dimmingView;	// 80 = 0x50
    UIViewController *_rootModalViewController;	// 88 = 0x58
    UIView *_containerView;	// 96 = 0x60
    UIView *_materialView;	// 104 = 0x68
    UIView *_contentClippingView;	// 112 = 0x70
    WFCompactPlatterSashView *_sashView;	// 120 = 0x78
    long long _activeEmbeddedPlatterUpdateCount;	// 128 = 0x80
    double _platterCornerRadius;	// 136 = 0x88
    id <SBUIPresentableDismissalPreventionAssertion> _dismissalPreventionAssertion;	// 144 = 0x90
    WFDispatchSourceTimer *_hintingCompletionTimer;	// 152 = 0x98
    WFDispatchSourceTimer *_queuedStatusPlatterTimer;	// 160 = 0xa0
    WFCompactPlatterView *_platterViewAwaitingTransition;	// 168 = 0xa8
    WFBannerGesture *_bannerGesture;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000000133ff
@property(retain, nonatomic) WFBannerGesture *bannerGesture; // @synthesize bannerGesture=_bannerGesture;
@property(nonatomic) __weak WFCompactPlatterView *platterViewAwaitingTransition; // @synthesize platterViewAwaitingTransition=_platterViewAwaitingTransition;
@property(retain, nonatomic) WFDispatchSourceTimer *queuedStatusPlatterTimer; // @synthesize queuedStatusPlatterTimer=_queuedStatusPlatterTimer;
@property(retain, nonatomic) WFDispatchSourceTimer *hintingCompletionTimer; // @synthesize hintingCompletionTimer=_hintingCompletionTimer;
@property(nonatomic) _Bool keyboardIsVisible; // @synthesize keyboardIsVisible=_keyboardIsVisible;
@property(retain, nonatomic) id <SBUIPresentableDismissalPreventionAssertion> dismissalPreventionAssertion; // @synthesize dismissalPreventionAssertion=_dismissalPreventionAssertion;
@property(nonatomic) double platterCornerRadius; // @synthesize platterCornerRadius=_platterCornerRadius;
@property(nonatomic, getter=shouldFreezePlatterLayout) _Bool freezePlatterLayout; // @synthesize freezePlatterLayout=_freezePlatterLayout;
@property(nonatomic) long long activeEmbeddedPlatterUpdateCount; // @synthesize activeEmbeddedPlatterUpdateCount=_activeEmbeddedPlatterUpdateCount;
@property(retain, nonatomic) WFCompactPlatterSashView *sashView; // @synthesize sashView=_sashView;
@property(retain, nonatomic) UIView *contentClippingView; // @synthesize contentClippingView=_contentClippingView;
@property(retain, nonatomic) UIView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIViewController *rootModalViewController; // @synthesize rootModalViewController=_rootModalViewController;
@property(retain, nonatomic) WFPassthroughDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) BNBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) WFCompactPlatterViewController *platterAwaitingModalPresentation; // @synthesize platterAwaitingModalPresentation=_platterAwaitingModalPresentation;
@property(copy, nonatomic) CDUnknownBlockType bannerWillDismissHandler; // @synthesize bannerWillDismissHandler=_bannerWillDismissHandler;
@property(nonatomic, getter=isHinting) _Bool hinting; // @synthesize hinting=_hinting;
@property(retain, nonatomic) WFCompactStatusViewController *queuedStatusPlatter; // @synthesize queuedStatusPlatter=_queuedStatusPlatter;
@property(retain, nonatomic) WFCompactPlatterViewController *embeddedPlatter; // @synthesize embeddedPlatter=_embeddedPlatter;
@property(retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext; // @synthesize associatedRunningContext=_associatedRunningContext;
@property(readonly, nonatomic) __weak id <WFBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext; // @synthesize presentableContext=_presentableContext;
- (id)layoutDescription;	// IMP=0x00100000000130a5
- (id)assertionReason;	// IMP=0x0010000000012fce
- (_Bool)platterShouldOwnHomeGesture:(id)arg1;	// IMP=0x0010000000012f8e
- (id)presentingScreen;	// IMP=0x0010000000012f3e
- (void)bannerGestureDidEndWithDismissal:(_Bool)arg1;	// IMP=0x0010000000012e67
- (void)bannerGestureDidBegin;	// IMP=0x0010000000012e50
- (void)handleTapGesture:(id)arg1;	// IMP=0x0010000000012d7b
- (void)layoutDimmingLayer;	// IMP=0x0010000000012ae5
- (void)updateDimmingLayerVisibility;	// IMP=0x0010000000012907
- (_Bool)shouldShowDimmingLayer;	// IMP=0x00100000000127e3
- (void)dismissModalPlatterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001270d
- (void)presentationTransitionWillOccur:(id)arg1;	// IMP=0x00100000000123ec
- (void)stopObservingForPresentation;	// IMP=0x0010000000012399
- (void)beginObservingForPresentation;	// IMP=0x00100000000122df
- (void)releaseDismissalPreventionAssertionIfNecessary;	// IMP=0x0010000000012252
- (void)acquireDismissalPreventionAssertion;	// IMP=0x00100000000121a9
- (void)homeGestureOwnershipDidChange:(_Bool)arg1;	// IMP=0x00100000000121a3
- (_Bool)homeAffordanceDidCrossThreshold;	// IMP=0x0010000000011ef7
- (void)updateHomeGestureOwnership;	// IMP=0x0010000000011d4b
- (_Bool)shouldCancelSystemDragGestureWithTouches:(id)arg1 event:(id)arg2;	// IMP=0x0010000000011d43
- (void)keyboardDidChange:(id)arg1;	// IMP=0x0010000000011be8
- (void)stopObservingKeyboard;	// IMP=0x0010000000011b6d
- (void)beginObservingKeyboard;	// IMP=0x0010000000011adc
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000011a75
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000000119cb
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x00100000000117e3
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x0010000000011728
- (void)systemDismissedBanner;	// IMP=0x0010000000011635
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool providesHostedContent;
- (struct UIEdgeInsets)bannerContentOutsets;	// IMP=0x0010000000011490
- (id)bannerSizeTransitionAnimationSettings;	// IMP=0x0010000000011474
- (_Bool)isClippingEnabled;	// IMP=0x001000000001146c
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
- (double)maximumExpectedHeightForPlatterPresentation:(id)arg1;	// IMP=0x00100000000112e8
- (void)platterPresentationDidInvalidateSize:(id)arg1;	// IMP=0x00100000000112a8
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x001000000001109b
- (_Bool)shouldDisplaySash;	// IMP=0x001000000001100a
- (double)sashViewHeight;	// IMP=0x0010000000010f8f
- (struct CGSize)platterContentSize;	// IMP=0x0010000000010e83
- (struct CGSize)bannerSize;	// IMP=0x0010000000010da4
- (_Bool)bannerIsFullScreen;	// IMP=0x0010000000010d3f
- (void)pauseDismissalHintingAnimation;	// IMP=0x0010000000010b60
- (void)beginHintingEmbeddedPlatterDismissalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000109af
- (void)setAttributionTitle:(id)arg1 icon:(id)arg2 previouslyHidden:(_Bool)arg3;	// IMP=0x00100000000102c0
- (void)performLayoutUpdate;	// IMP=0x001000000001015e
- (void)layoutEmbeddedPlatter;	// IMP=0x001000000000fedb
- (void)updateContainerViewFrameAnimated:(_Bool)arg1;	// IMP=0x001000000000f1d1
- (void)performBumpAnimation;	// IMP=0x001000000000ef7b
- (void)fluidTransitionFromPlatter:(id)arg1 toPlatter:(id)arg2;	// IMP=0x001000000000ed74
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000e5c7
@property(readonly, copy) NSString *description;
- (void)viewWillLayoutSubviews;	// IMP=0x001000000000e24b
- (void)viewDidLoad;	// IMP=0x001000000000e133
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000de4e
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x001000000000ddf8
- (void)loadView;	// IMP=0x001000000000dd80
- (void)dealloc;	// IMP=0x001000000000dcf4
- (id)initWithDelegate:(id)arg1 associatedRunningContext:(id)arg2;	// IMP=0x001000000000db9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long presentableBehavior;
@property(readonly, nonatomic) long long presentableType;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end

