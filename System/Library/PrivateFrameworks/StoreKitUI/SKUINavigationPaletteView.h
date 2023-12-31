//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteView
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    NSMutableArray *_segmentedControls;	// 56 = 0x38
    NSMutableArray *_stretchViews;	// 64 = 0x40
    long long _verticalAlignment;	// 72 = 0x48
    NSMapTable *_viewElementViews;	// 80 = 0x50
    NSMapTable *_viewSpacings;	// 88 = 0x58
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000000ea645
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00100000000ea50b
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000000ea448
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00100000000ea357
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000000e86a7
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000000e843f
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000000e83e6
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000000e81f5
- (void).cxx_destruct;	// IMP=0x00000000000ea7bd
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000000ea286
- (void)layoutSubviews;	// IMP=0x00000000000e98ee
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000000e965d
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e9655
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000e91fd
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000e91df
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000e8882
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e8071

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

