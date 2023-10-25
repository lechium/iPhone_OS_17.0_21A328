//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning, UITextLoupeSession, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;	// 8 = 0x8
    struct CGPoint _lastTapLocation;	// 16 = 0x10
    UITextGestureTuning *_gestureTuning;	// 32 = 0x20
    _Bool _indirectSelectionType;	// 40 = 0x28
    _Bool _viewConformsToTextInput;	// 41 = 0x29
    struct CGRect _originalCaretRect;	// 48 = 0x30
    _Bool _wasOriginallyFirstResponder;	// 80 = 0x50
    long long _granularityToHandOff;	// 88 = 0x58
    UITextLoupeSession *_activeLoupeSession;	// 96 = 0x60
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 104 = 0x68
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000138806f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000001387f2d
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000001387e53
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000001387c3b
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000001387a5a
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000013878be
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000013877b4
- (void)twoFingerRangedSelectGesture:(id)arg1;	// IMP=0x00000000013874da
- (void)tapAndAHalf:(id)arg1;	// IMP=0x0000000001386b28
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000001386a00
- (void)confirmMarkedText:(id)arg1;	// IMP=0x000000000138699f
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;	// IMP=0x0000000001386919
- (void)didUpdateSelectionWithGesture:(id)arg1;	// IMP=0x0000000001386342
- (void)willUpdateSelectionWithGesture:(id)arg1;	// IMP=0x00000000013862e4
- (void)_handleMultiTapGesture:(id)arg1;	// IMP=0x0000000001385d4a
- (void)oneFingerTapSelectsAll:(id)arg1;	// IMP=0x0000000001385bdc
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000001385af8
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000001385781
- (_Bool)_hasMarkedTextAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000013853fa
- (_Bool)_hasTextAlternativesAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000013852e5
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000001385239
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000001384ce8
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1;	// IMP=0x0000000001384ca4
- (long long)handOffGranularity;	// IMP=0x0000000001384c8b
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000001384b43
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;	// IMP=0x0000000001384ab6
- (_Bool)_isNowWithinRepeatedTapTime;	// IMP=0x0000000001384aa2
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;	// IMP=0x0000000001384a57
- (_Bool)_usesPencilSelectionBehaviorForGesture:(id)arg1;	// IMP=0x0000000001384914
- (_Bool)_usesIndirectSelectionBehavior;	// IMP=0x0000000001384904
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;	// IMP=0x0000000001384849
- (void)toggleSelectionCommands;	// IMP=0x0000000001384771
- (void)_applyTransientState:(id)arg1;	// IMP=0x0000000001384693
- (id)_transientState;	// IMP=0x0000000001384585
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000013844e9
- (void)finishSetup;	// IMP=0x000000000138422d
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000001384200
- (id)initWithMode:(long long)arg1 indirect:(_Bool)arg2;	// IMP=0x0000000001383f9c
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000001383f88

@end
