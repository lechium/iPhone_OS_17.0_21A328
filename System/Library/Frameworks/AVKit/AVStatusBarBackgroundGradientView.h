//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientView : UIView
{
    AVStatusBarBackgroundGradientViewSubview *_gradientView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0060000000052bbb
- (void).cxx_destruct;	// IMP=0x0000000000052ba8
@property(retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView; // @synthesize gradientView=_gradientView;
- (void)layoutSubviews;	// IMP=0x0000000000052ade
- (void)setAlpha:(double)arg1;	// IMP=0x0000000000052915
- (double)alpha;	// IMP=0x00000000000528c5

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end

