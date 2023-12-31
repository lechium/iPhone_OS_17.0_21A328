//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SKUIAttributedStringView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUITomatoRatingView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    SKUIAttributedStringView *_labelView;	// 16 = 0x10
}

+ (id)_tomatoImageForFreshness:(long long)arg1;	// IMP=0x001000000037fa77
+ (id)_attributedStringForRating:(id)arg1 context:(id)arg2;	// IMP=0x001000000037f90c
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000037f164
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000037f061
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000037f008
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000037efbd
- (void).cxx_destruct;	// IMP=0x000000000037fb32
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000037f88d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000037f7ff
- (void)layoutSubviews;	// IMP=0x000000000037f632
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000037f5e7
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000037f59c
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000037f551
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000037f54b
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000037f2d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

