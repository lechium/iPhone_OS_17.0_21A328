//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVValueTiming, NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerTimeController : NSObject
{
    NSObject<OS_dispatch_queue> *_seekQueue;	// 8 = 0x8
    _Bool _pendingSeek;	// 16 = 0x10
    CDStruct_1b6d18a9 _toleranceBefore;	// 20 = 0x14
    CDStruct_1b6d18a9 _toleranceAfter;	// 44 = 0x2c
    _Bool _seekingInternal;	// 68 = 0x44
    AVPlayer *_player;	// 72 = 0x48
    AVValueTiming *_timing;	// 80 = 0x50
    AVValueTiming *_minTiming;	// 88 = 0x58
    AVValueTiming *_maxTiming;	// 96 = 0x60
    AVObservationController *_observationController;	// 104 = 0x68
    CDStruct_1b6d18a9 _seekToTimeInternal;	// 112 = 0x70
}

+ (id)keyPathsForValuesAffectingReadyToPlay;	// IMP=0x00100000000a46d2
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;	// IMP=0x00100000000a46b2
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x00100000000a4686
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x00100000000a4666
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;	// IMP=0x00100000000a4646
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x00100000000a4626
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;	// IMP=0x00100000000a4606
- (void).cxx_destruct;	// IMP=0x00000000000a408b
@property(nonatomic) CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(nonatomic, getter=isSeekingInternal) _Bool seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)_updateMinAndMaxTiming;	// IMP=0x00000000000a3f0b
- (void)_updateTiming;	// IMP=0x00000000000a3d01
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x00000000000a3bdb
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) double seekToTime;
@property(readonly, nonatomic, getter=isSeeking) _Bool seeking;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool hasSeekableLiveStreamingContent;
@property(readonly, getter=isCompletelySeekable) _Bool completelySeekable;
@property(readonly, nonatomic) NSArray *seekableTimeRanges;
@property(readonly, nonatomic) double contentDurationWithinEndTimes;
@property(readonly, nonatomic) double contentDuration;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x00000000000a39e8
@property(readonly, nonatomic) double maxTime;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x00000000000a38dc
@property(readonly, nonatomic) double minTime;
- (void)stopTimingObservation;	// IMP=0x00000000000a381e
- (void)startTimingObservation;	// IMP=0x00000000000a3688
- (void)dealloc;	// IMP=0x00000000000a3646
- (void)_commonInit;	// IMP=0x00000000000a35f7
- (id)initForIFramesWithPlayerItem:(id)arg1;	// IMP=0x00000000000a3547
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000a349a

@end

