//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class SFStartPageViewController, UIColor, UIFont, UINavigationController, UITraitCollection, UIVisualEffect;

@protocol SFStartPageVisualStyleProviding <NSObject>
@property(readonly, nonatomic) UIFont *sectionHeaderLargeTitleFont;
@property(readonly, nonatomic) double sectionHeaderBottomGap;
@property(readonly, nonatomic) double defaultRowSpacing;
- (UIVisualEffect *)backgroundEffectForSupplementaryActions;
- (UIColor *)tintColorForSupplementaryActions;
- (long long)numberOfColumnsForSectionItemType:(long long)arg1 sectionWidth:(double)arg2 traitCollection:(UITraitCollection *)arg3;
- (struct UIEdgeInsets)collectionViewContentInsetsWithNavigationBarPosition:(long long)arg1;
- (struct NSDirectionalEdgeInsets)sectionContentInsetsWithViewLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (double)rowSpacingForSectionItemType:(long long)arg1 containerSize:(struct CGSize)arg2;
- (double)siteIconSizeForContainerSize:(struct CGSize)arg1;

@optional
- (void)prepareNavigationController:(UINavigationController *)arg1 forStartPageViewController:(SFStartPageViewController *)arg2;
@end

