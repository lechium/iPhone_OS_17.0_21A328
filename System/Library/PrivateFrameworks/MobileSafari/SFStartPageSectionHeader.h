//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSLayoutConstraint, SFBannerCell, SFStartPageSectionHeaderTitleView, UIStackView, UIVisualEffectView, WBSStartPageBanner;

__attribute__((visibility("hidden")))
@interface SFStartPageSectionHeader : UICollectionReusableView
{
    SFBannerCell *_bannerView;	// 8 = 0x8
    NSLayoutConstraint *_bannerViewBottomConstraint;	// 16 = 0x10
    UIStackView *_buttonStackView;	// 24 = 0x18
    NSLayoutConstraint *_titleBottomConstraint;	// 32 = 0x20
    SFStartPageSectionHeaderTitleView *_titleView;	// 40 = 0x28
    UIVisualEffectView *_separatorView;	// 48 = 0x30
    NSLayoutConstraint *_stackLeadingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_stackCenterXConstraint;	// 64 = 0x40
    NSArray *_actions;	// 72 = 0x48
    WBSStartPageBanner *_banner;	// 80 = 0x50
}

+ (id)reuseIdentifier;	// IMP=0x0040000000095851
- (void).cxx_destruct;	// IMP=0x0000000000097868
@property(retain, nonatomic) WBSStartPageBanner *banner; // @synthesize banner=_banner;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)_createSeparatorViewIfNeeded;	// IMP=0x00000000000974e5
@property(nonatomic) double bottomGap;
- (void)setActions:(id)arg1 expandsModally:(_Bool)arg2 withSize:(long long)arg3;	// IMP=0x0000000000096677
- (void)configureUsingSection:(id)arg1 visualStyleProvider:(id)arg2 resolvingActionsUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000962b1
- (void)updateViewsDependingOnCustomTraits;	// IMP=0x00000000000961ee
- (id)_disclosureButtonForLayout;	// IMP=0x000000000009615f
- (void)layoutSubviews;	// IMP=0x0000000000095ffe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000095fcf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009585e

@end

