//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider
{
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 48 = 0x30
    UIView *_customBackgroundView;	// 56 = 0x38
    UIView *_titleView;	// 64 = 0x40
    NSArray *_leftViews;	// 72 = 0x48
    NSArray *_rightViews;	// 80 = 0x50
    UIImageView *_backIndicatorView;	// 88 = 0x58
    _UINavBarPrompt *_prompt;	// 96 = 0x60
    _UINavigationBarGestureHandler *_gestureHandler;	// 104 = 0x68
    NSMutableArray *_slideTransitionClippingViews;	// 112 = 0x70
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 120 = 0x78
    _UINavigationBarLegacyContentView *_layoutView;	// 128 = 0x80
    UIView *_contentView;	// 136 = 0x88
    UILayoutGuide *_userContentGuide;	// 144 = 0x90
    NSLayoutConstraint *_userContentGuideLeading;	// 152 = 0x98
    NSLayoutConstraint *_userContentGuideTrailing;	// 160 = 0xa0
    UIFocusContainerGuide *_contentFocusContainerGuide;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000023f8a9
- (_Bool)_shim_107516167;	// IMP=0x000000000023f8a1
- (_Bool)_shim_34415965;	// IMP=0x000000000023f899
- (void)_shim_30244716;	// IMP=0x000000000023f873
- (void)_shim_updateBackgroundViewIgnoringFlag;	// IMP=0x000000000023f821
- (_Bool)_shim_throwConstraintExceptions;	// IMP=0x000000000023f80b
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;	// IMP=0x000000000023f7bd
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000023f61a
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000023f561
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000023f3df
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000023f326
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023f2b7
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023ef3a
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023ec2e
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023e986
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023e6f2
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000023e4eb
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;	// IMP=0x000000000023e4db
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;	// IMP=0x000000000023da20
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x000000000023d953
- (id)_shim_backIndicatorView;	// IMP=0x000000000023d93e
- (void)_shim_updateBackIndicator;	// IMP=0x000000000023d92c
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000023d358
- (id)_shim_promptText;	// IMP=0x000000000023d33b
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;	// IMP=0x000000000023d1cc
- (id)_shim_userContentGuide;	// IMP=0x000000000023ce3e
- (long long)_shim_backdropStyle;	// IMP=0x000000000023cd93
- (double)_shim_backgroundHeight;	// IMP=0x000000000023cd56
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;	// IMP=0x000000000023cd1d
- (_Bool)_shim_disableBlurTinting;	// IMP=0x000000000023cd00
- (void)_shim_setUseContentView:(_Bool)arg1;	// IMP=0x000000000023cc09
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x000000000023cbec
- (double)_shim_shadowAlpha;	// IMP=0x000000000023cbcf
- (id)_shim_compatibilityBackgroundView;	// IMP=0x000000000023cba7
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x000000000023cb50
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;	// IMP=0x000000000023c9c1
- (id)_shim_layoutView;	// IMP=0x000000000023c9ac
- (id)_shim_contentView;	// IMP=0x000000000023c997
- (void)_setUpContentFocusContainerGuide;	// IMP=0x000000000023c6b5
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x000000000023c466
- (void)updateBackgroundGroupName;	// IMP=0x000000000023c413
- (void)_updateBackground;	// IMP=0x000000000023ba16
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;	// IMP=0x000000000023b5ae
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;	// IMP=0x000000000023832a
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000237709
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000235729
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000023365c
- (_Bool)_supportsCanvasView;	// IMP=0x000000000023363e
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;	// IMP=0x000000000023359f
- (void)_updateBackIndicatorViewTintColor;	// IMP=0x000000000023333b
- (void)_updateBackIndicatorImage;	// IMP=0x00000000002330a3
- (id)_effectiveBackIndicatorTransitionMaskImage;	// IMP=0x0000000000232fc0
- (id)_effectiveBackIndicatorImage;	// IMP=0x0000000000232edd
- (_Bool)_suppressBackIndicator;	// IMP=0x0000000000232e49
- (double)_backIndicatorClippingMargin;	// IMP=0x0000000000232e24
- (double)_effectiveBackIndicatorLeftMargin;	// IMP=0x0000000000232cb6
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;	// IMP=0x0000000000232596
- (unsigned long long)_subviewIndexAboveBackground;	// IMP=0x00000000002324dd
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;	// IMP=0x000000000023234b
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;	// IMP=0x0000000000231f45
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;	// IMP=0x000000000022d89c
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;	// IMP=0x000000000022d6b8
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;	// IMP=0x000000000022d3a4
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;	// IMP=0x000000000022d307
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;	// IMP=0x000000000022d2ff
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000022cee8
- (void)setupTopNavigationItem;	// IMP=0x000000000022cc68
- (void)updateTopNavigationItemTitleView;	// IMP=0x000000000022cb31
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x000000000022ca89
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c5bd
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c23e
- (void)removeContentForItem:(id)arg1;	// IMP=0x000000000022c212
- (void)prepareForPop;	// IMP=0x000000000022c18f
- (void)prepareForPush;	// IMP=0x000000000022bf89
- (void)layoutSubviews;	// IMP=0x000000000022be70
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;	// IMP=0x000000000022aed3
- (void)_layoutSubviewsFromContentView;	// IMP=0x000000000022add7
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x000000000022ad8c
- (void)barSizeChanged;	// IMP=0x000000000022ad41
- (_Bool)shouldUseHeightRangeFittingWidth;	// IMP=0x000000000022ad39
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022ac2b
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000022aaf1
- (id)hitTest:(struct CGPoint)arg1 defaultViewHit:(id)arg2;	// IMP=0x000000000022aadf
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;	// IMP=0x000000000022a9af
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;	// IMP=0x000000000022a982
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000022a970
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000022a95e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;	// IMP=0x000000000022a889
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x000000000022a7b8
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x000000000022a71f
- (id)preferredFocusedView;	// IMP=0x000000000022a6a2
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000022a605
- (long long)statusBarStyle;	// IMP=0x000000000022a58c
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000022a2a0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000022a22e
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x0000000000229f3f
- (void)changeAppearance;	// IMP=0x0000000000229ecd
- (void)teardown;	// IMP=0x0000000000229e30
- (void)prepare;	// IMP=0x0000000000229cda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

