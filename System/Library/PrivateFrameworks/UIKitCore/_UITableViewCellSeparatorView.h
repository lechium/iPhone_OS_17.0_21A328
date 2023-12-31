//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellSeparatorView : UIView
{
    UIView *_backgroundView;	// 128 = 0x80
    UIView *_overlayView;	// 136 = 0x88
    UIVisualEffect *_separatorEffect;	// 144 = 0x90
    UIVisualEffectView *_effectView;	// 152 = 0x98
    _Bool _drawsWithVibrantLightMode;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000121b6dc
@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(nonatomic) _Bool drawsWithVibrantLightMode; // @synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode;
- (void)layoutSubviews;	// IMP=0x000000000121b302
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000121af39

@end

