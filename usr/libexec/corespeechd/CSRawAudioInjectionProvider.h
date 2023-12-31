//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x00400000000db4ae
- (void).cxx_destruct;	// IMP=0x00200000000dafd3
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00100000000daf3c
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000daf36
- (id)metrics;	// IMP=0x00100000000daf2e
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000daf28
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000daf20
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000daf18
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000daf0f
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000daf06
- (void)updateMeters;	// IMP=0x00100000000daf00
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000daefa
- (unsigned long long)alertStartTime;	// IMP=0x00100000000daef2
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000daeea
- (_Bool);	// IMP=0x00100000000dae57
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000dae4f
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x00100000000dae42
- (_Bool)duckOthersOption;	// IMP=0x00100000000dae3a
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00100000000dae34
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000dae2c
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000dae24
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000dada3
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000dad22
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000dad1a
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000dad01
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000dacf4
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000dacec
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000dace4
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000dacd7
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000dac56
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dab8d
- (void)_readAudioBufferAndFeed;	// IMP=0x00100000000da996
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000da8a9
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000da828
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000da783
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da6aa
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000da6a4
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000da610
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000da57c
- (void)dealloc;	// IMP=0x00100000000da4d8
- (id)init;	// IMP=0x00100000000da3ad

@end

