//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSMapTable, NSString, NSTimer, _UIKeyboardIndirectTextSelectionGestureState, _UIKeyboardTextSelectionGestureController, _UIPanOrFlickGestureRecognizer, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionInteraction : UITextInteraction
{
    _UIKeyboardTextSelectionGestureController *_owner;	// 8 = 0x8
    NSMapTable *_weakMap;	// 16 = 0x10
    id _deallocToken;	// 24 = 0x18
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;	// 32 = 0x20
    NSTimer *_touchPadTimer;	// 40 = 0x28
    CDUnknownBlockType _touchPadTimerCompletion;	// 48 = 0x30
    _UIPanOrFlickGestureRecognizer *_activePress;	// 56 = 0x38
    _UIKeyboardIndirectTextSelectionGestureState *_previousRemoteGestureState;	// 64 = 0x40
}

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;	// IMP=0x0010000000e2a997
- (void).cxx_destruct;	// IMP=0x0000000000e32b45
- (void)removeTemporaryGesture;	// IMP=0x0000000000e32a6d
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000e32011
- (void)_clearTouchPadCallback;	// IMP=0x0000000000e31ff0
- (void)_cancelTouchPadTimer;	// IMP=0x0000000000e31fb8
- (void)_startTouchPadTimerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e31e77
- (void)panningGesture:(id)arg1;	// IMP=0x0000000000e30b41
- (void)panningGestureAddedTouch:(id)arg1;	// IMP=0x0000000000e30a0a
- (void)twoFingerTap:(id)arg1;	// IMP=0x0000000000e30620
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000e2fdbb
- (void)_logTapCounts:(id)arg1;	// IMP=0x0000000000e2fc99
- (void)_longForcePressDetected:(id)arg1;	// IMP=0x0000000000e2fc06
- (void)_beginLongForcePressTimerForGesture:(id)arg1;	// IMP=0x0000000000e2fb06
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 isShiftKeyBeingHeld:(_Bool)arg4;	// IMP=0x0000000000e2f6e6
- (void)handleRemoteIndirectGestureWithState:(id)arg1;	// IMP=0x0000000000e2f33e
- (void)forwardIndirectGestureWithType:(long long)arg1 state:(long long)arg2 translation:(struct CGPoint)arg3 flickDirection:(unsigned long long)arg4 touchCount:(unsigned long long)arg5;	// IMP=0x0000000000e2f188
- (void)cancelLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2f176
- (void)endLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2f164
- (void)finishLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2f0bd
- (void)updateLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2efde
- (void)beginLongPressWithTranslation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000e2edd5
- (void)longPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3;	// IMP=0x0000000000e2eb6c
- (void)disableEnclosingScrollViewScrolling;	// IMP=0x0000000000e2ea15
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;	// IMP=0x0000000000e2e42b
- (void)clearKeyboardTouchesForGesture:(id)arg1;	// IMP=0x0000000000e2e210
- (void)_cancelLongForcePressTimer;	// IMP=0x0000000000e2e198
- (struct CGPoint)cursorLocationForTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000e2e0bc
- (void)beginCursorManipulationFromRect:(struct CGRect)arg1;	// IMP=0x0000000000e2dfc1
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;	// IMP=0x0000000000e2df98
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2df86
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2dd39
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2dc67
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2db48
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint)arg1 isShiftKeyBeingHeld:(_Bool)arg2 executionContext:(id)arg3;	// IMP=0x0000000000e2d678
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2d4af
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000e2d408
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2d27b
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e2d03e
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;	// IMP=0x0000000000e2ce1e
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;	// IMP=0x0000000000e2cb4a
- (_Bool)isPlacedCarefully;	// IMP=0x0000000000e2cadc
- (void)_tidyUpGesture;	// IMP=0x0000000000e2ca38
- (void)_prepareForGesture;	// IMP=0x0000000000e2c992
- (void)_willBeginIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000e2c832
- (struct CGPoint)boundedTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000e2c690
- (_Bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000e2c4b9
- (struct CGPoint)acceleratedTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isActive:(_Bool)arg3;	// IMP=0x0000000000e2c37a
- (void)_didEndIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000e2c29a
- (id)selectionController;	// IMP=0x0000000000e2c24a
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000e2bf92
- (double)additionalPressDurationForTypingCadence:(id)arg1;	// IMP=0x0000000000e2be64
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;	// IMP=0x0000000000e2be17
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000e2bc42
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000e2b6e5
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000e2b41c
- (id)owner;	// IMP=0x0000000000e2b407
- (void)_configureLongPressRecognizer:(id)arg1;	// IMP=0x0000000000e2b320
- (void)_configureLongPressAddedTouchRecognizer:(id)arg1;	// IMP=0x0000000000e2b2d6
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000e2b1ce
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000e2b007
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;	// IMP=0x0000000000e2af17
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;	// IMP=0x0000000000e2aaa8
- (id)gestures;	// IMP=0x0000000000e2a8d6
- (void)registerOwner:(id)arg1;	// IMP=0x0000000000e2a7f6
- (void)dealloc;	// IMP=0x0000000000e2a7a3
- (void)detach;	// IMP=0x0000000000e2a744
- (void)_clearHiding;	// IMP=0x0000000000e2a70c
- (void)hideInsideRecogniser:(id)arg1;	// IMP=0x0000000000e2a4ca
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000e2a3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

