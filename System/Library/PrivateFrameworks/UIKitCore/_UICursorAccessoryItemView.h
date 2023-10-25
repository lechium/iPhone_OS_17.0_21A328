//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIImageView, UILabel, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UICursorAccessoryItemView : UIControl
{
    UILabel *_labelView;	// 128 = 0x80
    UIImageView *_imageView;	// 136 = 0x88
    _UIShapeView *_backgroundView;	// 144 = 0x90
    _Bool _highlighted;	// 152 = 0x98
    _Bool _collapsed;	// 153 = 0x99
    unsigned long long _style;	// 160 = 0xa0
    unsigned long long _roundedEdges;	// 168 = 0xa8
    CDStruct_c88e181d _content;	// 176 = 0xb0
}

+ (id)_makeImageView;	// IMP=0x00600000009249e6
+ (id)_makeLabelView;	// IMP=0x0060000000924932
- (void).cxx_destruct;	// IMP=0x0000000000925919
@property(nonatomic) CDStruct_c88e181d content; // @synthesize content=_content;
@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) unsigned long long roundedEdges; // @synthesize roundedEdges=_roundedEdges;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000092583a
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009257f7
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000925763
- (void)layoutSubviews;	// IMP=0x000000000092534a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000009251ca
- (void)_recomputeColors;	// IMP=0x0000000000924c01
@property(readonly, nonatomic) double horizontalPadding;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000924a87

@end
