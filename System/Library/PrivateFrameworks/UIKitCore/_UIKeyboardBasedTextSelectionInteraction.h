//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction
{
    UITextGestureTuning *_gestureTuning;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000e36b9d
@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000e3615a
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000e34c9f
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;	// IMP=0x0000000000e34c2c
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e34ba7
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000e349f8
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;	// IMP=0x0000000000e343ea
- (_Bool)enclosingScrollViewIsScrolling;	// IMP=0x0000000000e342da
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000e342c0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000e34226
- (id)owner;	// IMP=0x0000000000e341e8
- (void)_processGestureForCustomHighlighter:(id)arg1;	// IMP=0x0000000000e33cb4
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000e33c3e
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000e33b03
- (void)dealloc;	// IMP=0x0000000000e33ab9

@end

