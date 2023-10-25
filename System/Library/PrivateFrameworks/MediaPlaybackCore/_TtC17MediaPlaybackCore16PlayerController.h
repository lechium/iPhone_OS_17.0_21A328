//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC17MediaPlaybackCore16PlayerController : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *mode;	// 32 = 0x20
    MISSING_TYPE *userActionTimeout;	// 40 = 0x28
    MISSING_TYPE *currentItemTransition;	// 48 = 0x30
    MISSING_TYPE *playbackCoordinatorObservation;	// 56 = 0x38
    MISSING_TYPE *player;	// 64 = 0x40
    MISSING_TYPE *audioSession;	// 80 = 0x50
    MISSING_TYPE *currentActivationToken;	// 88 = 0x58
    MISSING_TYPE *playerID;	// 96 = 0x60
    MISSING_TYPE *coordinatedPlaybackSuspension;	// 112 = 0x70
    MISSING_TYPE *videoPlayerViewController;	// 120 = 0x78
    MISSING_TYPE *lastAudioSessionMode;	// 128 = 0x80
    MISSING_TYPE *playbackStartSubscription;	// 136 = 0x88
    MISSING_TYPE *queue;	// 144 = 0x90
    MISSING_TYPE *fsm;	// 152 = 0x98
    MISSING_TYPE *playerObserver;	// 200 = 0xc8
    MISSING_TYPE *playerSubscription;	// 208 = 0xd0
    MISSING_TYPE *systemObserver;	// 216 = 0xd8
    MISSING_TYPE *systemSubscription;	// 280 = 0x118
    MISSING_TYPE *didBecomeActiveSubscription;	// 288 = 0x120
    MISSING_TYPE *willResignActiveSubscription;	// 296 = 0x128
    MISSING_TYPE *videoPlayerBehavior;	// 304 = 0x130
    MISSING_TYPE *userEventsMonitor;	// 312 = 0x138
    MISSING_TYPE *reporter;	// 320 = 0x140
    MISSING_TYPE *leaseController;	// 360 = 0x168
    MISSING_TYPE *previousItemID;	// 368 = 0x170
    MISSING_TYPE *isAirPlayRoute;	// 384 = 0x180
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)resetWithReason:(id)arg1;	// IMP=0x0000000000042392
- (void)setRelativeVolume:(float)arg1;	// IMP=0x0000000000043d9d
- (void)setSpatializationFormat:(long long)arg1;	// IMP=0x0000000000043d07

@end
