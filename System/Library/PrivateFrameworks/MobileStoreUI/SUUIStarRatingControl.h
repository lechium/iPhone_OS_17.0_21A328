//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SUUIStarRatingControl : UIControl
{
    long long _previousUserRating;	// 8 = 0x8
    UIImageView *_emptyStarsImageView;	// 16 = 0x10
    UIImageView *_filledStarsImageView;	// 24 = 0x18
    long long _userRating;	// 32 = 0x20
    float _starSpacing;	// 40 = 0x28
    float _starWidth;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000002d5b5d
@property(nonatomic) long long userRating; // @synthesize userRating=_userRating;
@property(nonatomic) float starWidth; // @synthesize starWidth=_starWidth;
@property(nonatomic) float starSpacing; // @synthesize starSpacing=_starSpacing;
- (void)_updateUserRatingWithTouch:(id)arg1;	// IMP=0x00000000002d59b4
- (double)_unfilledStarsMinX;	// IMP=0x00000000002d5957
- (double)_unfilledStarsWidth;	// IMP=0x00000000002d58fd
- (unsigned long long)_ratingForUIDirection:(unsigned long long)arg1;	// IMP=0x00000000002d58cf
- (unsigned long long)_firstStar;	// IMP=0x00000000002d58b8
- (unsigned long long)_lastStar;	// IMP=0x00000000002d58a1
- (_Bool)_isRTL;	// IMP=0x00000000002d5887
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002d5822
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002d5794
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002d570e
- (void)layoutSubviews;	// IMP=0x00000000002d557e
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x00000000002d554f
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002d551c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002d5507
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002d54dc
@property(retain, nonatomic) UIImage *filledStarsImage;
@property(retain, nonatomic) UIImage *emptyStarsImage;

@end
