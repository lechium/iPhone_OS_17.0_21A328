//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSString, SUUIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface SUUIContentUnavailableCollectionViewCell : SUUICollectionViewCell
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    SUUIContentUnavailableView *_contentUnavailableView;	// 40 = 0x28
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000337a29
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000337a10
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000003379f7
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000003379de
- (void).cxx_destruct;	// IMP=0x0000000000337d21
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000337caf
- (void)layoutSubviews;	// IMP=0x0000000000337bae
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000337b0e
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000337af1
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000337ad4
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000337ab7
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000337a5f
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000337a42
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000337926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

