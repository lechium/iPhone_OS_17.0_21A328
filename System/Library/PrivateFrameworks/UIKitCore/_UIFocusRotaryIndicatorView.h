//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIViewPropertyAnimator, _UIFocusRotaryRingArrowView;

__attribute__((visibility("hidden")))
@interface _UIFocusRotaryIndicatorView : UIView
{
    _Bool _visible;	// 8 = 0x8
    double _wheelPosition;	// 16 = 0x10
    unsigned long long _activeAxis;	// 24 = 0x18
    unsigned long long _failedMovementHeading;	// 32 = 0x20
    UIView *_ringView;	// 40 = 0x28
    UIView *_fingerPositionContainerView;	// 48 = 0x30
    UIView *_fingerPositionView;	// 56 = 0x38
    UIView *_roundPointerView;	// 64 = 0x40
    UIView *_rotaryScrubCenterPunchout;	// 72 = 0x48
    UIViewPropertyAnimator *_rotaryScrubHideAnimator;	// 80 = 0x50
    UIViewPropertyAnimator *_rotaryScrubUnhideAnimator;	// 88 = 0x58
    UIViewPropertyAnimator *_rotaryScrubBackwardsFingerPositionAnimator;	// 96 = 0x60
    _UIFocusRotaryRingArrowView *_upArrow;	// 104 = 0x68
    _UIFocusRotaryRingArrowView *_rightArrow;	// 112 = 0x70
    _UIFocusRotaryRingArrowView *_downArrow;	// 120 = 0x78
    _UIFocusRotaryRingArrowView *_leftArrow;	// 128 = 0x80
}

+ (id)createRotaryIndicatorInView:(id)arg1;	// IMP=0x006000000177a59e
- (void).cxx_destruct;	// IMP=0x000000000177d256
- (unsigned long long)_calculateCurrentRotaryAxis;	// IMP=0x000000000177d194
- (void)_updateArrowsForCurrentFocus;	// IMP=0x000000000177d163
- (struct CGAffineTransform)_transformForWheelPosition:(double)arg1;	// IMP=0x000000000177d13f
- (void)updateWheelPosition:(double)arg1;	// IMP=0x000000000177d056
- (void)toggleVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000177c2c4
- (void)_updateArrowDisplay;	// IMP=0x000000000177c1d5
- (void)showArrowsForAxis:(unsigned long long)arg1;	// IMP=0x000000000177c1b8
- (void)updateFailedMovementHeading:(unsigned long long)arg1;	// IMP=0x000000000177c15f
- (void)layoutSubviews;	// IMP=0x000000000177bf86
- (void)didMoveToWindow;	// IMP=0x000000000177bf45
- (void)dealloc;	// IMP=0x000000000177bec3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000177a961

@end
