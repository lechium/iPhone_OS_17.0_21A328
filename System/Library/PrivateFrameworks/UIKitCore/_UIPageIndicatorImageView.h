//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class _UIPageIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorImageView : UIImageView
{
    struct CGSize _cachedSize;	// 8 = 0x8
    _UIPageIndicatorView *_indicatorView;	// 24 = 0x18
}

@property(nonatomic) _UIPageIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)_updateSymbolConfiguration;	// IMP=0x000000000080aeff
- (struct CGSize)sizeForImage:(id)arg1 traits:(id)arg2;	// IMP=0x000000000080ab88
- (void)prepare;	// IMP=0x000000000080aa50
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000080aa0f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000080a9a9
- (void)setImage:(id)arg1;	// IMP=0x000000000080a76c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000080a720
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000080a6c3

@end

