//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface QLPUTimedAnimationGroup
{
    _Bool _areAnimationsPaused;	// 8 = 0x8
    double _pausedElapsedTime;	// 16 = 0x10
    double _beginTime;	// 24 = 0x18
}

@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)_update;	// IMP=0x00000000000965eb
- (void)updateAnimations;	// IMP=0x00000000000965e5
@property(readonly, nonatomic) double currentTime;
- (void)resumeAnimations;	// IMP=0x000000000009655e
- (void)pauseAnimations;	// IMP=0x00000000000964e1
- (void)setElapsedTime:(double)arg1;	// IMP=0x00000000000964b4
- (double)elapsedTime;	// IMP=0x000000000009644b
- (id)init;	// IMP=0x00000000000963f3

@end

