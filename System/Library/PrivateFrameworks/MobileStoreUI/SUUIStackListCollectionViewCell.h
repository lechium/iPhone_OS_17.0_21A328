//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SUUIStackListCollectionViewCell
{
    unsigned long long _alignment;	// 8 = 0x8
    NSMapTable *_listViews;	// 16 = 0x10
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000002d2ea3
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000002d2d07
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000002d2cf1
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002d2b79
- (void).cxx_destruct;	// IMP=0x00000000002d4459
@property(retain, nonatomic) NSMapTable *listViews; // @synthesize listViews=_listViews;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (_Bool)_isRightAligned;	// IMP=0x00000000002d43f8
- (_Bool)layoutSubviewsWithFixedWidth:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x00000000002d3fac
- (_Bool)layoutSubviewsWithFlowLayout:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x00000000002d396d
- (void)layoutSubviews;	// IMP=0x00000000002d3874
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002d3794
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002d378c
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002d3784
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002d3651
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002d27df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002d2757

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
