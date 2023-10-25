//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUITableViewCell.h"

@class NSString, SUUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIProductPageInAppPurchaseTableCell : SUUITableViewCell
{
    SUUIColorScheme *_colorScheme;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
    UILabel *_indexLabel;	// 48 = 0x30
    UILabel *_nameLabel;	// 56 = 0x38
    UILabel *_priceLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000229578
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000229523
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000022951d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000022947b
- (void)layoutSubviews;	// IMP=0x000000000022911b
@property(copy, nonatomic) NSString *productName;
@property(copy, nonatomic) NSString *priceString;
@property(copy, nonatomic) NSString *indexString;

@end
