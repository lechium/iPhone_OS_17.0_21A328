//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface BCSSubjectIndicatorView : UIView
{
    UIImageView *__imageView;	// 8 = 0x8
}

+ (struct CGSize)_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize)arg1;	// IMP=0x0040000000002ae3
- (void).cxx_destruct;	// IMP=0x0020000000002c35
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic, getter=isBouncing) _Bool bouncing;
@property(nonatomic, getter=isPulsing) _Bool pulsing;
- (void)stopScalingWithDuration:(double)arg1;	// IMP=0x00100000000025db
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 timingFunction:(id)arg4;	// IMP=0x00100000000022c1
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;	// IMP=0x00100000000022ad
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000001e2e
- (void)layoutSubviews;	// IMP=0x0010000000001d07
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000001cf5
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000001c22
@property(nonatomic, getter=isInactive) _Bool inactive;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000001a4c

@end
