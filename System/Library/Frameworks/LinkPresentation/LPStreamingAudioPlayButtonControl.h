//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPAudioPlayerMediaPlayableAdaptor;
@protocol LPAudioPlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingAudioPlayButtonControl
{
    id <LPAudioPlayer> _player;	// 8 = 0x8
    LPAudioPlayerMediaPlayableAdaptor *_playableAdaptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cf4a2
- (id)playable;	// IMP=0x00000000000cf48d
- (void)buttonPressed:(id)arg1;	// IMP=0x00000000000cf41c
- (void)audioPlayerDidFailToPlay:(id)arg1;	// IMP=0x00000000000cf416
- (void)audioPlayer:(id)arg1 didChangeProgress:(float)arg2;	// IMP=0x00000000000cf3d8
- (void)audioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x00000000000cf366
- (void)dealloc;	// IMP=0x00000000000cf2e8
- (id)initWithAudio:(id)arg1 style:(id)arg2 theme:(id)arg3 player:(id)arg4;	// IMP=0x00000000000cf15a

@end

