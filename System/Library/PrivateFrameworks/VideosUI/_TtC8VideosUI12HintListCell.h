//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI12HintListCell : VUIBaseCollectionViewCell
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *shouldShowBottomSeparator;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_accessoryImageView;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_bottomSeparatorView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007f4be9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000007f4bb9
- (void)vui_setHighlighted:(_Bool)arg1;	// IMP=0x00000000007f4b87
- (void)prepareForReuse;	// IMP=0x00000000007f4a57
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000007f4984
- (struct CGSize)vui_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000007f48d6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007f3eb6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007f3df3

@end

