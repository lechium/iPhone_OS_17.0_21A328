//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPopoverBackgroundView.h"

__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView
{
}

+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x00000000016cf42c
+ (double)cornerRadius;	// IMP=0x00000000016cf423
+ (double)arrowBase;	// IMP=0x00000000016cf41a
+ (double)arrowHeight;	// IMP=0x00000000016cf411
- (void)layoutSubviews;	// IMP=0x00000000016cf54d
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x00000000016cf547
- (unsigned long long)arrowDirection;	// IMP=0x00000000016cf53f
- (void)setArrowOffset:(double)arg1;	// IMP=0x00000000016cf539
- (double)arrowOffset;	// IMP=0x00000000016cf530
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x00000000016cf4f6
- (struct CGSize)_shadowOffset;	// IMP=0x00000000016cf4ea
- (double)_shadowRadius;	// IMP=0x00000000016cf4e1
- (double)_shadowOpacity;	// IMP=0x00000000016cf4d8
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x00000000016cf4c5
- (struct UIEdgeInsets)_contentViewInsets;	// IMP=0x00000000016cf468

@end

