//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAFilter, UIImage;

__attribute__((visibility("hidden")))
@interface PUHeadroomVariableBlurView : UIView
{
    CAFilter *_blurFilter;	// 8 = 0x8
    UIImage *_currentBlurMaskImage;	// 16 = 0x10
}

+ (Class)layerClass;	// IMP=0x00600000005a3df4
- (void).cxx_destruct;	// IMP=0x00000000005a3c13
@property(retain, nonatomic) UIImage *currentBlurMaskImage; // @synthesize currentBlurMaskImage=_currentBlurMaskImage;
@property(readonly, nonatomic) CAFilter *blurFilter; // @synthesize blurFilter=_blurFilter;
- (void)_updateBlurProperties;	// IMP=0x00000000005a39c6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005a3782
- (id)backdropLayer;	// IMP=0x00000000005a3770

@end
