//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDMediaNode
{
    PDAnimationTarget *mTarget;	// 168 = 0xa8
    _Bool mIsMuted;	// 176 = 0xb0
    _Bool mIsShowWhenStopped;	// 177 = 0xb1
    long long mNumberOfSlides;	// 184 = 0xb8
    long long mVolume;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000043de3c
- (void)setVolume:(long long)arg1;	// IMP=0x000000000023a9b8
- (long long)volume;	// IMP=0x000000000043de2b
- (void)setNumberOfSlides:(long long)arg1;	// IMP=0x000000000023a9a7
- (long long)numberOfSlides;	// IMP=0x000000000043de1a
- (void)setIsShowWhenStopped:(_Bool)arg1;	// IMP=0x000000000023a997
- (_Bool)isShowWhenStopped;	// IMP=0x000000000043de0a
- (void)setIsMuted:(_Bool)arg1;	// IMP=0x000000000023a987
- (_Bool)isMuted;	// IMP=0x000000000043ddfa
- (void)setTarget:(id)arg1;	// IMP=0x000000000023a973
- (id)target;	// IMP=0x000000000043dde5
- (id)init;	// IMP=0x000000000023a652

@end

