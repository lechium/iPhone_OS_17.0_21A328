//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIBarRatingView : UIView
{
    long long _barRatingStyle;	// 8 = 0x8
    long long _numberOfBars;	// 16 = 0x10
    float _ratingValue;	// 24 = 0x18
}

@property(nonatomic) float ratingValue; // @synthesize ratingValue=_ratingValue;
@property(nonatomic) long long numberOfBars; // @synthesize numberOfBars=_numberOfBars;
@property(nonatomic) long long barRatingStyle; // @synthesize barRatingStyle=_barRatingStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ee4f7
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000ee346
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ee22e

@end

