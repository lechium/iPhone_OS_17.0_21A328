//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionReusableView.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView
{
    _Bool _shadowFadesToBottom;	// 8 = 0x8
    _Bool _drawsShadow;	// 9 = 0x9
    _Bool _showsInDarkBackground;	// 10 = 0xa
}

+ (id)leftShadowImage;	// IMP=0x0060000000a88e32
+ (double)widthWithShadow:(_Bool)arg1;	// IMP=0x0060000000a88db5
@property(nonatomic) _Bool showsInDarkBackground; // @synthesize showsInDarkBackground=_showsInDarkBackground;
@property(nonatomic) _Bool drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(nonatomic) _Bool shadowFadesToBottom; // @synthesize shadowFadesToBottom=_shadowFadesToBottom;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000a8962a
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000a88f31
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a88ea9

@end

