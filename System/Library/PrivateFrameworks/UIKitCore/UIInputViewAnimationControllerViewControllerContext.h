//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIInputViewSet, UIKBViewTreeSnapshotter, UIView, _UIViewControllerTransitionContext;
@protocol UIInputViewAnimationHost, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewControllerContext : NSObject
{
    _UIViewControllerTransitionContext *_context;	// 8 = 0x8
    id <UIInputViewAnimationHost> _host;	// 16 = 0x10
    UIView *_from;	// 24 = 0x18
    UIView *_to;	// 32 = 0x20
    struct CGRect _fromRect;	// 40 = 0x28
    struct CGRect _toRect;	// 72 = 0x48
    UIKBViewTreeSnapshotter *_kbSnapshotter;	// 104 = 0x68
    UIInputViewSet *_preservedInputViewSet;	// 112 = 0x70
}

+ (id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;	// IMP=0x001000000066271d
- (void).cxx_destruct;	// IMP=0x0000000000662823
@property(readonly, nonatomic) struct CGRect toKeyboardFrame;
@property(readonly, nonatomic) UIView *toKeyboard;
@property(readonly, nonatomic) struct CGRect fromKeyboardFrame;
@property(readonly, nonatomic) UIView *fromKeyboard;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> mainContext;
- (void)dealloc;	// IMP=0x0000000000662622
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000661a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

