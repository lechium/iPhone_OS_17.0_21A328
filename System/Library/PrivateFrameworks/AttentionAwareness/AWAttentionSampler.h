//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _nextDeadline;	// 16 = 0x10
    _Bool _lastFaceMetadataValid;	// 24 = 0x18
    _Bool _unitTestSampling;	// 25 = 0x19
    int _currentState;	// 28 = 0x1c
    AWSampleLogger *_sampleLogger;	// 32 = 0x20
    CDUnknownBlockType _stateChangedCallback;	// 40 = 0x28
    unsigned long long _samplingSuppressedMask;	// 48 = 0x30
    unsigned long long _lastTriggerTime;	// 56 = 0x38
    unsigned long long _lastPositiveDetectTime;	// 64 = 0x40
    unsigned long long _lastPollTimeoutTime;	// 72 = 0x48
    double _lastPitch;	// 80 = 0x50
    double _lastYaw;	// 88 = 0x58
    double _lastRoll;	// 96 = 0x60
    unsigned long long _lastOrientation;	// 104 = 0x68
    double _lastDistance;	// 112 = 0x70
    unsigned long long _lastFaceState;	// 120 = 0x78
    double _lastFrameNumber;	// 128 = 0x80
    unsigned long long _lastMetadataType;	// 136 = 0x88
    NSMutableArray *_lastMotionData;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000018c17
@property(retain, nonatomic) NSMutableArray *lastMotionData; // @synthesize lastMotionData=_lastMotionData;
@property(readonly, nonatomic) _Bool unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;
@property(nonatomic) unsigned long long lastMetadataType; // @synthesize lastMetadataType=_lastMetadataType;
@property(nonatomic) double lastFrameNumber; // @synthesize lastFrameNumber=_lastFrameNumber;
@property(nonatomic) unsigned long long lastFaceState; // @synthesize lastFaceState=_lastFaceState;
@property(nonatomic) double lastDistance; // @synthesize lastDistance=_lastDistance;
@property(nonatomic) unsigned long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) double lastRoll; // @synthesize lastRoll=_lastRoll;
@property(nonatomic) double lastYaw; // @synthesize lastYaw=_lastYaw;
@property(nonatomic) double lastPitch; // @synthesize lastPitch=_lastPitch;
@property(nonatomic) _Bool lastFaceMetadataValid; // @synthesize lastFaceMetadataValid=_lastFaceMetadataValid;
@property(nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000189a5
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x000000000001899c
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(CDStruct_3d581f42)arg3;	// IMP=0x0000000000018993
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;	// IMP=0x000000000001898a
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ignoreDisplayState:(_Bool)arg2;	// IMP=0x0000000000018981
- (void)finishDeadlineComputationWithOptions:(CDStruct_3d581f42)arg1;	// IMP=0x0000000000018924
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x00000000000188c0
- (void)startDeadlineComputation;	// IMP=0x000000000001888f
- (void)setUnitTestMode;	// IMP=0x0000000000018869
- (id)description;	// IMP=0x00000000000187d2
- (id)init;	// IMP=0x000000000001872d

@end

