//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC17MediaPlaybackCore23PlaybackHistoryConsumer : NSObject
{
    MISSING_TYPE *playbackEngine;	// 8 = 0x8
    MISSING_TYPE *subscription;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x0010000000034a2f
- (void).cxx_destruct;	// IMP=0x000000000003912c
- (id)init;	// IMP=0x00000000000390f9
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000039096
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000000389e8

@end

