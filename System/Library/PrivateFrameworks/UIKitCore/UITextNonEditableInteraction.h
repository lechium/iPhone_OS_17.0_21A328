//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

__attribute__((visibility("hidden")))
@interface UITextNonEditableInteraction : UITextInteraction
{
    long long _mode;	// 8 = 0x8
}

- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000001382f19
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 forTouchType:(long long)arg5;	// IMP=0x0000000001382eed
- (void)toggleSelectionCommands;	// IMP=0x0000000001382e15
- (void)doubleTapInUneditable:(id)arg1;	// IMP=0x0000000001382ae3
- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2 canReplaceText:(_Bool)arg3;	// IMP=0x0000000001382822
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2 canReplaceText:(_Bool)arg3 modifierFlags:(long long)arg4;	// IMP=0x00000000013824bb
- (void)oneFingerTapInUneditableAccelerated:(id)arg1;	// IMP=0x00000000013823de
- (void)oneFingerTapInUneditable:(id)arg1;	// IMP=0x00000000013820c4
- (_Bool)_shouldAllowOneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000001381eb8
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000001381de8
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000001381caf

@end
