//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, VUIFavoriteBannerLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerView : UIView
{
    VUIFavoriteBannerLayout *_layout;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    NSArray *_backgroundImageLogos;	// 24 = 0x18
    VUILabel *_titleLabel;	// 32 = 0x20
    VUILabel *_subtitleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e9f03
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *backgroundImageLogos; // @synthesize backgroundImageLogos=_backgroundImageLogos;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) VUIFavoriteBannerLayout *layout; // @synthesize layout=_layout;
- (void)prepareForCellReuse;	// IMP=0x00000000002e9d21
- (id)_generateSiderowImagePointsForSize:(struct CGSize)arg1;	// IMP=0x00000000002e984f
- (id)_generatePlainWeaveImagePointsForSize:(struct CGSize)arg1;	// IMP=0x00000000002e96b8
- (id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 direction:(unsigned long long)arg4;	// IMP=0x00000000002e940f
- (id)_generateSingleRowImagePoints;	// IMP=0x00000000002e92cc
- (struct CGSize)_imageSizeForBannerStyle:(unsigned long long)arg1;	// IMP=0x00000000002e92b8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002e9251
- (struct CGSize)imageSizeForBannerStyle:(unsigned long long)arg1 sizeClass:(long long)arg2;	// IMP=0x00000000002e9066
- (struct CGSize)maxImageSize;	// IMP=0x00000000002e8fc7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002e8f6d
- (void)layoutSubviews;	// IMP=0x00000000002e8f04
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000002e83c1

@end

