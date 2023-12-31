//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class NSString, SKUIEditorialCellLayout;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell
{
    SKUIEditorialCellLayout *_layout;	// 8 = 0x8
    _Bool _layoutNeedsLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000154ed7
@property(readonly, nonatomic) SKUIEditorialCellLayout *layout; // @synthesize layout=_layout;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000154e36
- (void)layoutSubviews;	// IMP=0x0000000000154cc9
- (void)prepareForReuse;	// IMP=0x0000000000154c5b
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000154ba5
- (void)setCellLayoutNeedsLayout;	// IMP=0x0000000000154b88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000154abb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

