//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportIconView : UIView
{
    UIImageView *_mask;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00600000000b46fd
- (void).cxx_destruct;	// IMP=0x00000000000b4a90
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000b4a73
- (void)_updateSymbolConfiguration;	// IMP=0x00000000000b4969
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b4889
- (void)_updateColors;	// IMP=0x00000000000b4761
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000000b4720
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b453c

@end
