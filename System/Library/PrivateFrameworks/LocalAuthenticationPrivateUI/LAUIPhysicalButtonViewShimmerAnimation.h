//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface LAUIPhysicalButtonViewShimmerAnimation
{
    CAGradientLayer *_shimmerGradient;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013515
- (void)_endShimmerAnimation;	// IMP=0x00000000000134d3
- (void)_beginRegularMotionAnimationWithDelay:(double)arg1;	// IMP=0x0000000000012fe0
- (void)_beginReducedMotionAnimationWithDelay:(double)arg1;	// IMP=0x0000000000012ea9
- (_Bool)_isReducedMotionEnabled;	// IMP=0x0000000000012e9f
- (void)endImmediately;	// IMP=0x0000000000012e4d
- (void)beginWithDelay:(double)arg1;	// IMP=0x0000000000012de0
- (double)duration;	// IMP=0x0000000000012db7

@end
