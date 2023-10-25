//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface VUISeparatorView
{
    UIColor *_color;	// 8 = 0x8
    UIColor *_darkColor;	// 16 = 0x10
    double _lineHeight;	// 24 = 0x18
    UIView *_line;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000190dab
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)_updateLineColor;	// IMP=0x0000000000190cc4
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000190c2d
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000190c0b
- (id)lineColor;	// IMP=0x0000000000190b22
- (void)initializeVUISeparatorView;	// IMP=0x0000000000190a4e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001908c2

@end
