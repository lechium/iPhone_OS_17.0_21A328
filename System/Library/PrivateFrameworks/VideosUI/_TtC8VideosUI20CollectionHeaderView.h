//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MISSING_TYPE, UIView, VUIButton, VUIImageView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI20CollectionHeaderView : UICollectionReusableView
{
    MISSING_TYPE *viewLayout;	// 8 = 0x8
    MISSING_TYPE *applySafeAreaInsets;	// 16 = 0x10
    MISSING_TYPE *titleView;	// 24 = 0x18
    MISSING_TYPE *subtitleView;	// 32 = 0x20
    MISSING_TYPE *imageView;	// 40 = 0x28
    MISSING_TYPE *buttonView;	// 48 = 0x30
    MISSING_TYPE *supplementaryViewModel;	// 56 = 0x38
    MISSING_TYPE *containerView;	// 72 = 0x48
    MISSING_TYPE *positionAdjustmentTransform;	// 80 = 0x50
    MISSING_TYPE *contentPeekingTransform;	// 208 = 0xd0
    MISSING_TYPE *rendersAsButton;	// 336 = 0x150
}

- (void).cxx_destruct;	// IMP=0x00000000007bfe5d
@property(nonatomic, readonly) VUIImageView *accessibilityImageView;
@property(nonatomic, readonly) VUIButton *accessibilityButtonView;
@property(nonatomic, readonly) UIView *accessibilitySubtitleView;
@property(nonatomic, readonly) UIView *accessibilityTitleView;
- (void)tintColorDidChange;	// IMP=0x00000000007bfd36
- (void)prepareForReuse;	// IMP=0x00000000007bfbd4
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000007bf7fd
- (void)layoutSubviews;	// IMP=0x00000000007bdc7b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000007bdb99
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007bdacd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007bd915

@end

