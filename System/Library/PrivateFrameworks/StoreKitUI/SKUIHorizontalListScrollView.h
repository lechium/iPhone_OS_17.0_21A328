//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalListScrollView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSMapTable *_viewElementViews;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 24 = 0x18
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000024c77c
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x001000000024c642
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000024c57f
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000024c48e
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000024b17c
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000024aef2
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000024ae99
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000024ad03
- (void).cxx_destruct;	// IMP=0x000000000024c867
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000024c3bd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000024c134
- (void)layoutSubviews;	// IMP=0x000000000024bddb
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000024bbb1
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000024bba9
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000024b8d7
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000024b8ba
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000024b400
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000024ab59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

