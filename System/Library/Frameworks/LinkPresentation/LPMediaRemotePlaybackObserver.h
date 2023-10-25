//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelGenericObject, NSHashTable, NSTimer;

__attribute__((visibility("hidden")))
@interface LPMediaRemotePlaybackObserver : NSObject
{
    MPModelGenericObject *_enqueuedItem;	// 8 = 0x8
    MPModelGenericObject *_enqueuedItemContext;	// 16 = 0x10
    double _elapsedTime;	// 24 = 0x18
    double _totalTime;	// 32 = 0x20
    _Bool _isPlaying;	// 40 = 0x28
    _Bool _enqueuedItemIsLive;	// 41 = 0x29
    NSHashTable *_clients;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x00600000000c17b8
- (void).cxx_destruct;	// IMP=0x00000000000c3e78
- (_Bool)playbackInformationMatchesPlayingItem:(id)arg1;	// IMP=0x00000000000c327d
- (_Bool)isPlaying;	// IMP=0x00000000000c3274
- (double)elapsedFractionForPlaybackInformation:(id)arg1;	// IMP=0x00000000000c30c2
- (void)updatePlaybackState;	// IMP=0x00000000000c1c91
- (void)dispatchPlayingItemDidChangeToAllClients;	// IMP=0x00000000000c1b48
- (double)minimumUpdateInterval;	// IMP=0x00000000000c19b2
- (void)removeClient:(id)arg1;	// IMP=0x00000000000c192e
- (void)addClient:(id)arg1;	// IMP=0x00000000000c180d

@end
