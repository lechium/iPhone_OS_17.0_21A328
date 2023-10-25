//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXMVisionFeature;

@interface VOTImageExplorerElement : UIAccessibilityElement
{
    _Bool _flippedYAxis;	// 8 = 0x8
    AXMVisionFeature *_feature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000159de
@property(nonatomic) _Bool flippedYAxis; // @synthesize flippedYAxis=_flippedYAxis;
@property(readonly, nonatomic) AXMVisionFeature *feature; // @synthesize feature=_feature;
- (id)_accessibilityScrollStatus;	// IMP=0x0010000000015924
- (struct CGRect)accessibilityFrame;	// IMP=0x00100000000157da
- (_Bool)isAccessibilityElement;	// IMP=0x00100000000157d2
- (_Bool)_accessibilityShouldIncludeRemoteParentCustomActions;	// IMP=0x00100000000157ca
- (unsigned int)_accessibilityMediaAnalysisOptions;	// IMP=0x00100000000157c2
- (id)initWithImageView:(id)arg1 forFeature:(id)arg2 hasFlippedYAxis:(_Bool)arg3;	// IMP=0x001000000001572f

@end
