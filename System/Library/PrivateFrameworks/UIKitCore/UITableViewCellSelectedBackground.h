//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView
{
    UIVisualEffectView *_selectionEffectsView;	// 128 = 0x80
    _Bool _multiselect;	// 136 = 0x88
    long long _selectionStyle;	// 144 = 0x90
    UIColor *_multiselectBackgroundColor;	// 152 = 0x98
    UIColor *_selectionTintColor;	// 160 = 0xa0
    UIColor *_noneStyleBackgroundColor;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000121a83f
@property(retain, nonatomic) UIColor *noneStyleBackgroundColor; // @synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(nonatomic, getter=isMultiselect) _Bool multiselect; // @synthesize multiselect=_multiselect;
@property(retain, nonatomic) UIColor *multiselectBackgroundColor; // @synthesize multiselectBackgroundColor=_multiselectBackgroundColor;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)updateBackgroundColor;	// IMP=0x000000000121a6bb
- (void)tintColorDidChange;	// IMP=0x000000000121a67a
- (void)layoutSubviews;	// IMP=0x000000000121a605
@property(copy, nonatomic) NSArray *selectionEffects;

@end

