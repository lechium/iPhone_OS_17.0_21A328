//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController, _UIViewControllerOneToOneTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIAnimationCoordinator : NSObject
{
    NSMutableDictionary *_stash;	// 8 = 0x8
    _UIViewControllerOneToOneTransitionContext *_transitionContext;	// 16 = 0x10
    UIPercentDrivenInteractiveTransition *_interactiveTransition;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    CDUnknownBlockType _preperation;	// 40 = 0x28
    CDUnknownBlockType _animator;	// 48 = 0x30
    CDUnknownBlockType _completion;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    UIViewController *_viewController;	// 72 = 0x48
    struct CGRect _startFrame;	// 80 = 0x50
    struct CGRect _endFrame;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000064d731
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animator; // @synthesize animator=_animator;
@property(copy, nonatomic) CDUnknownBlockType preperation; // @synthesize preperation=_preperation;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x000000000064d67b
- (void)animateTransition:(id)arg1;	// IMP=0x000000000064d376
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000064d36b
- (void)finishInteractiveAnimation;	// IMP=0x000000000064d2d5
- (void)cancelInteractiveAnimation;	// IMP=0x000000000064d23f
- (void)updateInteractiveProgress:(double)arg1;	// IMP=0x000000000064d168
- (void)animateInteractively;	// IMP=0x000000000064d075
- (void)animate;	// IMP=0x000000000064cfe3
- (void)_updateTransitionContext;	// IMP=0x000000000064ceb7
@property(readonly, retain, nonatomic) NSMutableDictionary *stash;
- (void)dealloc;	// IMP=0x000000000064cbe8
@property(readonly, retain, nonatomic) _UIViewControllerOneToOneTransitionContext *transitionContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

