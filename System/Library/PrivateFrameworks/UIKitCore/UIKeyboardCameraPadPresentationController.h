//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIDimmingView, UIView;
@protocol UIDimmingViewDelegate, _UIAssertion;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraPadPresentationController
{
    id <_UIAssertion> _keyboardSuppressionAssertion;	// 8 = 0x8
    UIView *_shadowView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    id <UIDimmingViewDelegate> _dimmingViewDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000142789
@property(nonatomic) __weak id <UIDimmingViewDelegate> dimmingViewDelegate; // @synthesize dimmingViewDelegate=_dimmingViewDelegate;
- (void)_animatePresentTransition:(id)arg1;	// IMP=0x00000000001420d8
- (void)_animateDismissTransition:(id)arg1;	// IMP=0x0000000000141f05
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000141ed9
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000141ecb
- (int)overrideTextEffectsVisibilityLevelForTransitionView:(id)arg1;	// IMP=0x0000000000141ec0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000141ac2
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x000000000014199d
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000141984
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000141945
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000014192c
- (void)presentationTransitionWillBegin;	// IMP=0x000000000014189f
- (_Bool)updatesGuideDuringRotation;	// IMP=0x0000000000141897

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

