//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SUUIReviewListTitleView
{
    SUUIAttributedStringView *_titleView;	// 8 = 0x8
    SUUIAttributedStringView *_dateView;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000001f4a89
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000001f4927
+ (id)_textLabelForViewElement:(id)arg1;	// IMP=0x00100000001f490b
+ (id)_dateLabelForViewElement:(id)arg1;	// IMP=0x00100000001f48ef
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001f4073
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001f3e7a
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001f3e64
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001f3e5c
- (void).cxx_destruct;	// IMP=0x00000000001f4c60
@property(retain, nonatomic) SUUIAttributedStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SUUIAttributedStringView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f485d
- (void)layoutSubviews;	// IMP=0x00000000001f450a
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001f4502
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001f44fa
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001f44f2
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001f4145
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f3dfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

