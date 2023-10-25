//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class SKUIGift, SKUIGiftConfiguration, SKUIGiftItemView, SKUIGiftTheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell
{
    SKUIGiftConfiguration *_giftConfiguration;	// 8 = 0x8
    SKUIGift *_gift;	// 16 = 0x10
    UIImageView *_headerImageView;	// 24 = 0x18
    SKUIGiftItemView *_itemView;	// 32 = 0x20
    UILabel *_messageLabel;	// 40 = 0x28
    UILabel *_priceLabel;	// 48 = 0x30
    UILabel *_senderNameLabel;	// 56 = 0x38
    UILabel *_senderNameLabelLabel;	// 64 = 0x40
    SKUIGiftTheme *_theme;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a6032
@property(retain, nonatomic) SKUIGiftTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
- (void)_setSenderName:(id)arg1;	// IMP=0x00000000000a5af4
- (void)_setPrice:(id)arg1;	// IMP=0x00000000000a58c6
- (void)_setMessage:(id)arg1;	// IMP=0x00000000000a5699
- (void)_setHeaderImage:(id)arg1;	// IMP=0x00000000000a5561
- (void)_reloadItemView;	// IMP=0x00000000000a5372
- (id)_itemView;	// IMP=0x00000000000a5289
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000a51eb
- (void)layoutSubviews;	// IMP=0x00000000000a4a1b
@property(retain, nonatomic) UIImage *itemImage;
- (void)reloadThemeHeaderImage;	// IMP=0x00000000000a4342

@end
