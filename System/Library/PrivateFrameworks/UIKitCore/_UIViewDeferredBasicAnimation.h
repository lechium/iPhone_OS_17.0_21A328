//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIViewAnimationFrame;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredBasicAnimation
{
    _UIViewAnimationFrame *_finalValue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000166a6a2
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;	// IMP=0x000000000166a5e9
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x000000000166a513
- (void)addAnimationFrameForValue:(id)arg1;	// IMP=0x000000000166a469
- (id)_animationFrames;	// IMP=0x000000000166a3f0
- (_Bool)isEmpty;	// IMP=0x000000000166a3db

@end

