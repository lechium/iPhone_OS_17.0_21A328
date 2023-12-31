//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIColorScheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIProductPageFeatureView : UIView
{
    UIImageView *_iconView;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    SUUIColorScheme *_colorScheme;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000249f14
@property(retain, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000249e02
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000249d60
- (void)layoutSubviews;	// IMP=0x0000000000249b33
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) UIImage *icon;

@end

