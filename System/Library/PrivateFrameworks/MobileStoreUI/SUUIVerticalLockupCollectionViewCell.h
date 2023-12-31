//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSString, SUUIImageView, SUUIVerticalLockupView;

__attribute__((visibility("hidden")))
@interface SUUIVerticalLockupCollectionViewCell : SUUICollectionViewCell
{
    SUUIImageView *_highlightImageView;	// 8 = 0x8
    SUUIVerticalLockupView *_lockupView;	// 16 = 0x10
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001e6b85
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001e6b6c
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001e6b53
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001e6b3a
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000001e6aa9
- (void).cxx_destruct;	// IMP=0x00000000001e72f8
- (void)_reloadHighlightImageView;	// IMP=0x00000000001e6dcd
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001e6d8c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001e6d4b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001e6cd9
- (void)layoutSubviews;	// IMP=0x00000000001e6c2f
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001e6c12
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001e6bf5
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001e6bd8
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001e6bbb
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001e6b9e
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000001e6b1d
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000001e6b00
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000001e6ac2
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001e697e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e687a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

