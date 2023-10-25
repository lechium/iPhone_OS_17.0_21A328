//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLDisplayLink, NSArray, NSMutableSet, NSString;
@protocol CRLMediaPlayerControllerDelegate, OS_dispatch_source;

@interface CRLAnimatedGIFController : NSObject
{
    id <CRLMediaPlayerControllerDelegate> _delegate;	// 8 = 0x8
    struct CGImageSource *_imageSource;	// 16 = 0x10
    NSArray *_frames;	// 24 = 0x18
    NSMutableSet *_layers;	// 32 = 0x20
    float _rateBeforeScrubbing;	// 40 = 0x28
    unsigned long long _scrubbingCount;	// 48 = 0x30
    struct os_unfair_lock_s _timebaseLock;	// 56 = 0x38
    struct OpaqueCMTimebase *_timebase;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_timebaseTimerSource;	// 72 = 0x48
    CDStruct_1b6d18a9 _timebaseStartTime;	// 80 = 0x50
    CDStruct_1b6d18a9 _timebaseEndTime;	// 104 = 0x68
    long long _timebaseRepeatMode;	// 128 = 0x80
    NSMutableSet *_observationTokens;	// 136 = 0x88
    CRLDisplayLink *_displayLink;	// 144 = 0x90
    unsigned long long _displayLinkCounter;	// 152 = 0x98
    _Bool _playing;	// 160 = 0xa0
    _Bool _fastForwarding;	// 161 = 0xa1
    _Bool _fastReversing;	// 162 = 0xa2
    float _volume;	// 164 = 0xa4
    double _startTime;	// 168 = 0xa8
    double _endTime;	// 176 = 0xb0
    long long _repeatMode;	// 184 = 0xb8
}

+ (double)delayTimeForImageProperties:(struct __CFDictionary *)arg1;	// IMP=0x00400000006072d6
+ (_Bool)canInitWithDataType:(id)arg1;	// IMP=0x001000000060444b
- (void).cxx_destruct;	// IMP=0x0010000000609275
- (void)setFastReversing:(_Bool)arg1;	// IMP=0x0010000000609269
- (_Bool)isFastReversing;	// IMP=0x001000000060925d
- (void)setFastForwarding:(_Bool)arg1;	// IMP=0x0010000000609251
- (_Bool)isFastForwarding;	// IMP=0x0010000000609245
- (void)setVolume:(float)arg1;	// IMP=0x0010000000609237
- (float)volume;	// IMP=0x0010000000609229
- (long long)repeatMode;	// IMP=0x001000000060921c
- (double)startTime;	// IMP=0x001000000060920e
- (_Bool)isPlaying;	// IMP=0x0010000000609202
- (id)delegate;	// IMP=0x00100000006091ec
- (void)setVolume:(float)arg1 rampDuration:(double)arg2;	// IMP=0x00100000006091e6
- (void)p_updateLayers;	// IMP=0x0010000000608efb
- (void)p_displayLinkDidTrigger;	// IMP=0x0010000000608d0b
- (void)p_disableDisplayLink;	// IMP=0x0010000000608af9
- (void)p_enableDisplayLink;	// IMP=0x0010000000608814
- (void)p_updateDisplayLink;	// IMP=0x00100000006087af
- (void)p_timebaseTimeDidChangeToStartOrEndTime;	// IMP=0x0010000000608068
- (void)p_updateTimebaseTimerSourceNextFireTime;	// IMP=0x0010000000607c65
- (CDStruct_1b6d18a9)p_timebaseTimeForHostTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 updatedRate:(out double *)arg3 anchorTime:(out CDStruct_1b6d18a9 *)arg4;	// IMP=0x0010000000607491
- (void)p_prepareFrames;	// IMP=0x0010000000606d6d
- (id)newLayer;	// IMP=0x0010000000606d39
- (void)removeLayer:(id)arg1;	// IMP=0x0010000000606d07
- (void)addLayer:(id)arg1;	// IMP=0x0010000000606cd5
- (void)removeObservationToken:(id)arg1;	// IMP=0x0010000000606cbc
- (void)addObservationToken:(id)arg1;	// IMP=0x0010000000606ca3
- (void)removePeriodicTimeObserver:(id)arg1;	// IMP=0x0010000000606c96
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000606bad
- (id)p_frameAtTime:(double)arg1 fromIndex:(unsigned long long)arg2 frameIndex:(out unsigned long long *)arg3;	// IMP=0x0010000000606a47
@property(readonly, nonatomic) struct CGImage *imageForCurrentTime;
- (struct CGImage *)imageForTime:(double)arg1;	// IMP=0x00100000006069d1
- (_Bool)hasNewImageForTime:(double)arg1 sinceTime:(double)arg2;	// IMP=0x0010000000606936
- (double)timeForHostTime:(double)arg1;	// IMP=0x001000000060688d
- (void)updatePlayingToMatchPlayer;	// IMP=0x0010000000606887
- (void)seekToEnd;	// IMP=0x0010000000606859
- (void)seekToBeginning;	// IMP=0x001000000060682b
- (void)seekForwardByOneFrame;	// IMP=0x0010000000606825
- (void)seekBackwardByOneFrame;	// IMP=0x001000000060681f
- (_Bool)canFastForward;	// IMP=0x0010000000606817
- (_Bool)canFastReverse;	// IMP=0x001000000060680f
- (void)endScrubbing;	// IMP=0x0010000000606569
- (void)cancelPendingSeeks;	// IMP=0x0010000000606563
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006062a2
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;	// IMP=0x001000000060628e
- (_Bool)isScrubbing;	// IMP=0x0010000000606280
- (void)beginScrubbing;	// IMP=0x0010000000606196
- (void)setRepeatMode:(long long)arg1;	// IMP=0x001000000060610b
- (void)setEndTime:(double)arg1;	// IMP=0x0010000000606089
- (double)endTime;	// IMP=0x0010000000606061
- (void)setStartTime:(double)arg1;	// IMP=0x0010000000605fdf
- (double)duration;	// IMP=0x0010000000605f5f
- (double)absoluteDuration;	// IMP=0x0010000000605f0b
- (double)remainingTime;	// IMP=0x0010000000605ec4
- (double)absoluteCurrentTime;	// IMP=0x0010000000605e1d
- (void)p_setAbsoluteCurrentTime:(double)arg1;	// IMP=0x0010000000605db6
- (double)currentTime;	// IMP=0x0010000000605d50
- (_Bool)hasCurrentTime;	// IMP=0x0010000000605d48
- (void)stopSynchronously;	// IMP=0x0010000000605d34
- (void)p_setRate:(float)arg1;	// IMP=0x0010000000605b3d
- (void)setRate:(float)arg1;	// IMP=0x0010000000605af9
- (float)rate;	// IMP=0x0010000000605ab7
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00100000006059e4
- (_Bool)canPlay;	// IMP=0x00100000006059dc
- (void)teardown;	// IMP=0x0010000000605653
- (void)dealloc;	// IMP=0x0010000000605295
- (id)initWithData:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000060521d
- (id)initWithImageSource:(struct CGImageSource *)arg1 delegate:(id)arg2;	// IMP=0x00100000006044bd
- (id)newRenderable;	// IMP=0x001000000005e3f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
