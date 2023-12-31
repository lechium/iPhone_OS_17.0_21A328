//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface PersonalizedImageView : UIView
{
    UIImageView *_mainImageView;	// 8 = 0x8
    UIImageView *_userImageView;	// 16 = 0x10
    UIImage *_mainImage;	// 24 = 0x18
    struct CGSize _mainImageSize;	// 32 = 0x20
    struct CGSize _userImageSize;	// 48 = 0x30
    double _userImageExtensionPastMainImage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000046bb38
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000046bb0c
- (void)layoutSubviews;	// IMP=0x001000000046b8cf
- (void)_setupConstraints;	// IMP=0x001000000046b407
- (void)_setupViews;	// IMP=0x001000000046b27c
- (id)initWithMainImage:(id)arg1 mainImageSize:(struct CGSize)arg2 userImageDiameter:(double)arg3 userImageExtensionPastMainImage:(double)arg4;	// IMP=0x001000000046b179

@end

