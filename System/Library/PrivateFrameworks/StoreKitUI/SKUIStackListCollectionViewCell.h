//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStackListCollectionViewCell
{
    unsigned long long _alignment;	// 8 = 0x8
    NSMapTable *_listViews;	// 16 = 0x10
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000012feb0
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000012fcaf
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000012fc56
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000012fa77
- (void).cxx_destruct;	// IMP=0x00000000001314b3
@property(retain, nonatomic) NSMapTable *listViews; // @synthesize listViews=_listViews;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (_Bool)_isRightAligned;	// IMP=0x0000000000131452
- (_Bool)layoutSubviewsWithFixedWidth:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x0000000000131006
- (_Bool)layoutSubviewsWithFlowLayout:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x00000000001309c7
- (void)layoutSubviews;	// IMP=0x00000000001308ce
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001307ee
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001307e6
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001307de
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001306ab
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000012f6dd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012f606

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

