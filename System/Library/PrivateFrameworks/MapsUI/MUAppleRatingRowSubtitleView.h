//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStackView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface MUAppleRatingRowSubtitleView : UIStackView
{
    MISSING_TYPE *$__lazy_storage_$_percentLabel;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_rollingLabelsView;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_ratingsLabel;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_lineTwoStackView;	// 32 = 0x20
    MISSING_TYPE *usingTwoLineLayout;	// 40 = 0x28
    MISSING_TYPE *isContentUpdateInProgress;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x000000000004e140
- (void)contentSizeDidChange;	// IMP=0x000000000004e0e0
- (void)setPercentageString:(id)arg1 ratingsValueString:(id)arg2 ratingsValueAnimation:(long long)arg3 ratingsString:(id)arg4;	// IMP=0x000000000004e050
- (void)updateForSizeClassChange;	// IMP=0x000000000004e3b0
- (void)layoutSubviews;	// IMP=0x000000000004dda0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d690
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x000000000004d5f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004d5c0

@end
