//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, SKUIColorScheme, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableExpandableHeaderView : UIControl
{
    UILabel *_actionLabel;	// 8 = 0x8
    UIView *_bottomBorderView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_topBorderView;	// 32 = 0x20
    SKUIColorScheme *_colorScheme;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001fb38f
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001fb31b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001fb251
- (void)layoutSubviews;	// IMP=0x00000000001faedf
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) UIColor *bottomBorderColor;
@property(copy, nonatomic) NSString *actionString;

@end
