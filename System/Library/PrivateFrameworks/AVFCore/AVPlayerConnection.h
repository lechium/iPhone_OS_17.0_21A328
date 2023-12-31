//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSError;

__attribute__((visibility("hidden")))
@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;	// 8 = 0x8
    AVWeakReference *_playerItemReference;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (id)error;	// IMP=0x000000000007ac4e
@property(readonly, nonatomic) long long status;
- (void)removeItemFromPlayQueue;	// IMP=0x000000000007aac0
- (_Bool)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;	// IMP=0x000000000007a868
- (id)playerItem;	// IMP=0x000000000007a852
- (id)player;	// IMP=0x000000000007a83c
- (id)description;	// IMP=0x000000000007a7be
- (void)dealloc;	// IMP=0x000000000007a76d
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;	// IMP=0x000000000007a656

@end

