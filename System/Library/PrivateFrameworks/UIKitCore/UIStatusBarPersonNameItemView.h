//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView
{
    NSString *_personNameString;	// 8 = 0x8
    double _letterSpacing;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010e1be2
- (id)accessibilityHUDRepresentation;	// IMP=0x00000000010e1b88
- (long long)legibilityStyle;	// IMP=0x00000000010e1b42
- (double)extraRightPadding;	// IMP=0x00000000010e1afc
- (double)addContentOverlap:(double)arg1;	// IMP=0x00000000010e1a80
- (double)resetContentOverlap;	// IMP=0x00000000010e1a1d
- (id)contentsImage;	// IMP=0x00000000010e19e8
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;	// IMP=0x00000000010e1666
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x00000000010e15e7
- (double)standardPadding;	// IMP=0x00000000010e15b0

@end
