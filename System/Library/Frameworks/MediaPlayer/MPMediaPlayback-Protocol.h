//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MPMediaPlayback
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
@end
