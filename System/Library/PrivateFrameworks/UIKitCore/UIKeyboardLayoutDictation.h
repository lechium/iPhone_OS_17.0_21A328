//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardLayout.h"

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;	// 72 = 0x48
    UIKBTree *_keyplane;	// 80 = 0x50
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x0060000000c6b155
+ (_Bool)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2;	// IMP=0x0060000000c6b052
+ (id)activeInstance;	// IMP=0x0060000000c6afbe
- (void).cxx_destruct;	// IMP=0x0000000000c6be86
- (void)_moveWithEvent:(id)arg1;	// IMP=0x0000000000c6be80
- (struct CGRect)dragGestureRectInView:(id)arg1;	// IMP=0x0000000000c6be62
- (_Bool)usesAutoShift;	// IMP=0x0000000000c6be5a
- (id)currentKeyplane;	// IMP=0x0000000000c6be45
- (struct CGSize)splitLeftSize;	// IMP=0x0000000000c6bdf6
- (_Bool)shouldFadeToLayout;	// IMP=0x0000000000c6bdee
- (_Bool)shouldFadeFromLayout;	// IMP=0x0000000000c6bde6
- (void)layoutSubviews;	// IMP=0x0000000000c6bcc2
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000c6bbc7
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;	// IMP=0x0000000000c6b931
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;	// IMP=0x0000000000c6b30f
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000c6b2f6
- (_Bool)visible;	// IMP=0x0000000000c6b2c3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c6afcf

@end

