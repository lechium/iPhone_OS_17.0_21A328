//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPanGestureRecognizer.h"

@class NSString, UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer
{
    UIScrollView *_scrollView;	// 136 = 0x88
    SEL _scrollViewAction;	// 144 = 0x90
    struct CGPoint _reconsideredLockingLocation;	// 152 = 0x98
    unsigned int _lastLockingAxis:2;	// 168 = 0xa8
    unsigned int _lockingAxis:2;	// 168 = 0xa8
    unsigned int _hasParentScrollView:1;	// 168 = 0xa8
    unsigned int _caughtDeceleratingScrollView:1;	// 168 = 0xa8
    unsigned int _directionalLockEnabled:1;	// 168 = 0xa8
    unsigned int _transfersTrackingFromParentScrollView:1;	// 168 = 0xa8
    unsigned int _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered:1;	// 169 = 0xa9
    long long _modifierFlags;	// 176 = 0xb0
    long long _indirectScrollingState;	// 184 = 0xb8
    _Bool _scrollViewCanScrubWithTouch;	// 192 = 0xc0
    _Bool _activeEventIsDiscrete;	// 193 = 0xc1
    double _translationScaleFactor;	// 200 = 0xc8
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;	// 208 = 0xd0
    double _discreteFastScrollMultiplier;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000001628fb2
@property(nonatomic, getter=_discreteFastScrollMultiplier, setter=_setDiscreteFastScrollMultiplier:) double discreteFastScrollMultiplier; // @synthesize discreteFastScrollMultiplier=_discreteFastScrollMultiplier;
@property(nonatomic) __weak UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer; // @synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer;
@property(nonatomic) double translationScaleFactor; // @synthesize translationScaleFactor=_translationScaleFactor;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x0000000001628eff
- (_Bool)_allowsBounce;	// IMP=0x0000000001628ef7
- (long long)_modifierFlags;	// IMP=0x0000000001628ee6
- (id)_asyncDeliveryTargetForScrollEvent:(id)arg1;	// IMP=0x0000000001628e6c
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x0000000001628cd1
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0000000001628bef
@property(readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) _Bool beganCaughtDeceleratingScrollViewAndMoved;
@property(readonly, nonatomic, getter=_caughtDeceleratingScrollView) _Bool caughtDeceleratingScrollView;
@property(nonatomic, getter=isDirectionalLockEnabled) _Bool directionalLockEnabled;
- (double)_hysteresis;	// IMP=0x0000000001628b1d
- (void)_scrollViewDidEndZooming;	// IMP=0x0000000001628a78
- (void)_resetGestureRecognizer;	// IMP=0x00000000016289a6
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0000000001628908
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000016287af
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001628730
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;	// IMP=0x0000000001628164
- (_Bool)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2;	// IMP=0x0000000001628017
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;	// IMP=0x0000000001627f61
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001627e17
- (struct CGPoint)_velocityIncludingDiscreteScrollInView:(id)arg1;	// IMP=0x0000000001627dc9
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x0000000001627d2e
- (struct CGPoint)translationInView:(id)arg1;	// IMP=0x0000000001627cc3
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x0000000001627bbc
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x0000000001627ab5
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 affectingTranslation:(_Bool)arg3;	// IMP=0x000000000162776c
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x0000000001627718
- (void)_beginScroll;	// IMP=0x00000000016275ae
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000016274a1
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000016272d5
- (_Bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;	// IMP=0x00000000016270b2
- (_Bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;	// IMP=0x0000000001626efb
- (_Bool)_canTransferTrackingFromParentPagingScrollView;	// IMP=0x0000000001626c43
- (void)setView:(id)arg1;	// IMP=0x0000000001626b97
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x00000000016269d2
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000162690f
- (void)setDelegate:(id)arg1;	// IMP=0x0000000001626868
- (_Bool)delaysTouchesBegan;	// IMP=0x00000000016267e2
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000001626704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

