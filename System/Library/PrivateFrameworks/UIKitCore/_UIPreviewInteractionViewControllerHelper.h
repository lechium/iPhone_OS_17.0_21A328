//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, UIWindow, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionViewControllerHelper : NSObject
{
    _UIPreviewInteractionHighlighter *_highlighter;	// 8 = 0x8
    _UIPreviewInteractionViewControllerPresentation *_viewControllerPresentation;	// 16 = 0x10
    UIWindow *_presentingWindow;	// 24 = 0x18
    CDUnknownBlockType _presentationCompletion;	// 32 = 0x20
    CDUnknownBlockType _dismissalCompletion;	// 40 = 0x28
    _Bool _shouldActAsAppearanceAnimationController;	// 48 = 0x30
    _Bool _shouldUseDefaultPresentationController;	// 49 = 0x31
    UIViewController *_previousParentViewController;	// 56 = 0x38
    UIView *_previousSuperview;	// 64 = 0x40
    id <UIViewControllerContextTransitioning> _currentTransitionContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000f3f216
@property(readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation; // @synthesize viewControllerPresentation=_viewControllerPresentation;
- (void)_performDismissalCompletionIfNeeded;	// IMP=0x0000000000f3f1d8
- (void)_finalizeAfterViewControllerPresentation;	// IMP=0x0000000000f3f089
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000f3ebe2
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000f3e846
- (void)_performPresentViewControllerFromViewController:(id)arg1;	// IMP=0x0000000000f3e5f4
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;	// IMP=0x0000000000f3e5e2
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000f3dfe0
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000f3dfd2
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000f3dca0
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000f3dc93
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000f3dc86
- (void)dismissViewController;	// IMP=0x0000000000f3dba9
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f3d9cc
- (id)initWithViewControllerPresentation:(id)arg1;	// IMP=0x0000000000f3d842

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

