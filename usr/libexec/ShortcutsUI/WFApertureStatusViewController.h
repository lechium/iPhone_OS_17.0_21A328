//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAction, MISSING_TYPE, NSDictionary, NSNumberFormatter, NSProgress, NSSet, NSString, NSTimer, NSURL, UIColor, UILabel, UIView, WFDialogAttribution, WFIcon, WFIconStackAccessoryView, WFProgressAccessoryView, WFWorkflowRunningContext;
@protocol BNPresentableContext, SBUISystemApertureAccessoryView, SBUISystemApertureElement, WFApertureStatusViewControllerDelegate;

@interface WFApertureStatusViewController : UIViewController
{
    _Bool _initialPresentationTransitioning;	// 8 = 0x8
    long long _activeLayoutMode;	// 16 = 0x10
    long long _minimumLayoutMode;	// 24 = 0x18
    WFIconStackAccessoryView *_iconStackView;	// 32 = 0x20
    WFProgressAccessoryView *_progressView;	// 40 = 0x28
    NSNumberFormatter *_percentageFormatter;	// 48 = 0x30
    WFWorkflowRunningContext *_associatedRunningContext;	// 56 = 0x38
    NSProgress *_progress;	// 64 = 0x40
    id <WFApertureStatusViewControllerDelegate> _delegate;	// 72 = 0x48
    WFWorkflowRunningContext *_runningContext;	// 80 = 0x50
    WFDialogAttribution *_attribution;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    UILabel *_subtitleLabel;	// 104 = 0x68
    NSTimer *_collapseTimer;	// 112 = 0x70
    long long _previousLayoutMode;	// 120 = 0x78
    long long _overrideLayoutMode;	// 128 = 0x80
    MISSING_TYPE *_pendingDelayedIcon;	// 136 = 0x88
}

+ (id)requestIdentifierForContext:(id)arg1;	// IMP=0x002000000000b04b
- (void).cxx_destruct;	// IMP=0x002000000000acde
@property(retain, nonatomic) WFIcon *pendingDelayedIcon; // @synthesize pendingDelayedIcon=_pendingDelayedIcon;
@property(nonatomic) _Bool initialPresentationTransitioning; // @synthesize initialPresentationTransitioning=_initialPresentationTransitioning;
@property(nonatomic) long long overrideLayoutMode; // @synthesize overrideLayoutMode=_overrideLayoutMode;
@property(nonatomic) long long previousLayoutMode; // @synthesize previousLayoutMode=_previousLayoutMode;
@property(retain, nonatomic) NSTimer *collapseTimer; // @synthesize collapseTimer=_collapseTimer;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) WFWorkflowRunningContext *runningContext; // @synthesize runningContext=_runningContext;
@property(nonatomic) __weak id <WFApertureStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext; // @synthesize associatedRunningContext=_associatedRunningContext;
@property(readonly, nonatomic) long long minimumLayoutMode; // @synthesize minimumLayoutMode=_minimumLayoutMode;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode=_activeLayoutMode;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x001000000000aaed
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool providesHostedContent;
- (void)systemDismissedBanner;	// IMP=0x001000000000aad6
@property(readonly, nonatomic) unsigned long long presentationBehaviors;
@property(readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) UIColor *keyColor;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property(readonly, nonatomic) long long preferredLayoutMode;
@property(readonly, nonatomic) long long maximumLayoutMode;
@property(readonly, nonatomic) long long contentRole;
@property(readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
- (id)systemApertureElementProvider;	// IMP=0x001000000000a565
@property(readonly, copy, nonatomic) NSString *elementIdentifier;
- (long long)preferredLayoutModeForRunningContext:(id)arg1;	// IMP=0x001000000000a493
- (void)setIcon:(id)arg1;	// IMP=0x001000000000a2ff
- (void)startCollapseTimerIfNecessary;	// IMP=0x001000000000a247
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000a1f3
@property(readonly, nonatomic) NSNumberFormatter *percentageFormatter; // @synthesize percentageFormatter=_percentageFormatter;
- (void)updatePercentageSubtitleWithValue:(double)arg1;	// IMP=0x0010000000009e88
- (struct CGSize)sensorIntersectionSizeForLabelAtCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 visibleGlyphFrame:(struct CGRect)arg3;	// IMP=0x0010000000009c1d
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000008d0b
@property(readonly, nonatomic) WFProgressAccessoryView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) WFIconStackAccessoryView *iconStackView; // @synthesize iconStackView=_iconStackView;
@property(readonly, nonatomic) NSDictionary *postOptions;
- (id)subtitleFont;	// IMP=0x0010000000008ac4
- (id)titleFont;	// IMP=0x0010000000008aa9
- (void)setCompletingSuccessfully:(_Bool)arg1;	// IMP=0x0010000000008a3c
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000008a34
- (void)dealloc;	// IMP=0x00100000000089da
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2 progress:(id)arg3;	// IMP=0x0010000000008527
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2;	// IMP=0x0010000000008512

// Remaining properties
@property(readonly, nonatomic) _Bool attachedMinimalViewRequiresZeroPadding;
@property(readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property(nonatomic) _Bool canRequestAlertingAssertion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BSAction *launchAction;
@property(readonly, copy, nonatomic) NSURL *launchURL;
@property(nonatomic) unsigned long long minimalViewLayoutAxis;
@property(readonly, nonatomic) struct CGSize preferredCustomAspectRatio;
@property(readonly, nonatomic) long long preferredCustomLayout;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic) _Bool preventsAutomaticDismissal;
@property(readonly, nonatomic) _Bool preventsInteractiveDismissal;
@property(readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property(readonly) Class superclass;
@property(readonly, nonatomic) __weak id <SBUISystemApertureElement> systemApertureElement;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end

