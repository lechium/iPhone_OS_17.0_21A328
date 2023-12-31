//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CAGradientLayer;

__attribute__((visibility("hidden")))
@interface ABShadowView : UIView
{
    CAGradientLayer *_topGradientLayer;	// 8 = 0x8
    CAGradientLayer *_bottomGradientLayer;	// 16 = 0x10
    CABackdropLayer *_bottomVariableBlurLayer;	// 24 = 0x18
    double _topShadowRatio;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008f8c
- (struct CGImage *)_renderBottomVariableBlurMaskWithSize:(struct CGSize)arg1;	// IMP=0x0000000000008cb1
- (void)layoutSubviews;	// IMP=0x0000000000008a8e
- (void)_setupGradient;	// IMP=0x0000000000008206
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000008194

@end

