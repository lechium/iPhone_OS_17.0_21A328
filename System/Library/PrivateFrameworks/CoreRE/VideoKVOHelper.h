//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer;

__attribute__((visibility("hidden")))
@interface VideoKVOHelper : NSObject
{
    AVPlayer *_player;	// 8 = 0x8
    CDUnknownBlockType _playerItemBlock;	// 16 = 0x10
    CDUnknownBlockType _playerBlock;	// 24 = 0x18
    id _timeObserver;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000629210
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic) CDUnknownBlockType playerBlock; // @synthesize playerBlock=_playerBlock;
@property(copy, nonatomic) CDUnknownBlockType playerItemBlock; // @synthesize playerItemBlock=_playerItemBlock;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000628ff1
- (void)dealloc;	// IMP=0x0000000000628e57
- (void)addAVPlayerRateObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000628ded
- (void)addAVPlayerItemObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000628d80
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000000628d03

@end

