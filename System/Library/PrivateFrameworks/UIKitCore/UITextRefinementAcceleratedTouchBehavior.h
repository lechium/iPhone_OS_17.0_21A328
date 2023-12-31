//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextLoupeSession, UITextRange, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextRefinementAcceleratedTouchBehavior : NSObject
{
    UITextRange *_originalTextRange;	// 8 = 0x8
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 16 = 0x10
    UITextLoupeSession *_loupeSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000015b3800
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x00000000015b2f5d
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000015b2f48
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000015b2f33
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x00000000015b2f1e
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x00000000015b2f16
- (_Bool)usesTouchAlignment;	// IMP=0x00000000015b2f0e
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000015b2e5c
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000015b2e44
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000015b2da7
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x00000000015b2d0f
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x00000000015b2d09
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x00000000015b2cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

