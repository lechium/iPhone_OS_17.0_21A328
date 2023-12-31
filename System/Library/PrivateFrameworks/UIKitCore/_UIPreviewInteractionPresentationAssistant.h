//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIPortalView, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationAssistant : NSObject
{
    id <UIViewControllerContextTransitioning> _currentContext;	// 8 = 0x8
    _Bool _isAppearing;	// 16 = 0x10
    UIViewPropertyAnimator *_presentationAnimator;	// 24 = 0x18
    _UIPreviewInteractionHighlighter *_highlighter;	// 32 = 0x20
    _UIPreviewInteractionViewControllerPresentation *_presentation;	// 40 = 0x28
    _UIPortalView *_presentationSourcePortalView;	// 48 = 0x30
    UITargetedPreview *_sourcePreview;	// 56 = 0x38
    UIViewController *_stashedParentViewController;	// 64 = 0x40
    UIView *_stashedSuperView;	// 72 = 0x48
    CDUnknownBlockType _dismissalCompletion;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000015adbfa
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property(retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation; // @synthesize presentation=_presentation;
@property(retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
- (void)_createpresentationAnimatorIfNecessary:(id)arg1;	// IMP=0x00000000015ada71
- (void)_postInteractionCleanup;	// IMP=0x00000000015ad8d0
- (void)animateTransition:(id)arg1;	// IMP=0x00000000015acb44
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000015acb1b
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000015acaf9
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000015acad4
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000015ac481
- (id)_sourcePreviewPortal;	// IMP=0x00000000015ac2e1
- (void)_applyStashedParentViewControllerIfNecessary;	// IMP=0x00000000015abfc5
- (void)_stashParentViewControllerIfNecessary;	// IMP=0x00000000015abe8e
- (void)dismissViewController;	// IMP=0x00000000015abb6b
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000015aba49
- (id)initWithViewControllerPresentation:(id)arg1;	// IMP=0x00000000015ab9e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

