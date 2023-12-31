//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton
{
    NSString *_title;	// 352 = 0x160
    NSString *_pressedTitle;	// 360 = 0x168
    NSSet *_possibleTitles;	// 368 = 0x170
}

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f1c4e
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f19e1
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000001f19a3
- (void)layoutSubviews;	// IMP=0x00000000001f16fb
- (void)_setPressed:(_Bool)arg1;	// IMP=0x00000000001f1645
- (void)dealloc;	// IMP=0x00000000001f15df
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f149c
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;	// IMP=0x00000000001f11c6

@end

