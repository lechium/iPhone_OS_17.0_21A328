//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView
{
}

+ (_Bool)_notifyOnExplicitLayout;	// IMP=0x0080000000cb0d49
+ (_Bool)_shouldHitTestInputViewFirst;	// IMP=0x0080000000cb045d
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0080000000cb0455
- (void)_updateSafeAreaInsets;	// IMP=0x0000000000cb0ec3
- (void)layoutIfNeeded;	// IMP=0x0000000000cb0d51
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000cb0cce
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x0000000000cb0bf8
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000cb068b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000cb0465
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000cb03e9

@end
