//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class NSString, SKUICounterView, SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUICounterCollectionViewCell : SKUICollectionViewCell
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    SKUICounterView *_counterView;	// 40 = 0x28
    SKUIImageView *_highlightImageView;	// 48 = 0x30
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000036e28d
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000036e257
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000036e1c4
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000036e1ab
- (void).cxx_destruct;	// IMP=0x000000000036e9e6
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_reloadHighlightImageView;	// IMP=0x000000000036e49b
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000036e45a
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000036e419
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000036e3a7
- (void)layoutSubviews;	// IMP=0x000000000036e2fd
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000036e2e0
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000036e2c3
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000036e2a6
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000036e270
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000036e10b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036df92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
