//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSSimpleAssertion, UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport
{
    UIScrollView *_scrollViewForTransition;	// 32 = 0x20
    _Bool _scrollViewShowsHorizontalScrollIndicator;	// 40 = 0x28
    _Bool _scrollViewTransitionFinishing;	// 41 = 0x29
    BSSimpleAssertion *_interfaceAutorotationDisabledAssertion;	// 48 = 0x30
    struct CGPoint _scrollViewTransitionPreviousPoint;	// 56 = 0x38
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d9fe79
- (void)_updateKeyboardLayoutGuideForScrollTransitionWithSize:(struct CGSize)arg1 hostFrame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000d9fa8f
- (struct CGRect)addPaddingToFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0000000000d9f9f0
- (id)_infoForMatchMove;	// IMP=0x0000000000d9f64d
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x0000000000d9f1b7
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x0000000000d9e7e0
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;	// IMP=0x0000000000d9e458
- (id)cancelNotificationsForMode:(unsigned long long)arg1;	// IMP=0x0000000000d9e3ea
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x0000000000d9e25b
- (void)finishScrollViewTransitionForController:(id)arg1;	// IMP=0x0000000000d9e241
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;	// IMP=0x0000000000d9de99
- (void)finishScrollViewTransition;	// IMP=0x0000000000d9de21
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000d9dd99
- (void)updateScrollViewContentInsetBottom:(double)arg1;	// IMP=0x0000000000d9dcf7

@end

