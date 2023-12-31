//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface VUIAppCell : UICollectionViewCell
{
    UIImage *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    _Bool _didLayout;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000026686
- (void)updateConstraints;	// IMP=0x000000000002604a
- (void)layoutSubviews;	// IMP=0x0000000000025c78
- (void)setTitle:(id)arg1;	// IMP=0x0000000000025baa
- (void)setImage:(id)arg1;	// IMP=0x0000000000025afe

@end

