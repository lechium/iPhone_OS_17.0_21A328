//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioInjectionDevice, CSAudioInjectionEngine, CSAudioRecordContext, MISSING_TYPE, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProvider
{
    _Bool _allowZeroInjection;	// 8 = 0x8
    float _didStartDelayInSeconds;	// 12 = 0xc
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSMutableArray *_connectedDevices;	// 40 = 0x28
    CSAudioInjectionDevice *_builtInDevice;	// 48 = 0x30
    CSAudioInjectionDevice *_bundleTvRemote;	// 56 = 0x38
    CSAudioInjectionEngine *_builtInAudioInjectionEngine;	// 64 = 0x40
    NSMutableDictionary *_audioInjectionEngines;	// 72 = 0x48
    unsigned long long _latestPluginStreamId;	// 80 = 0x50
    unsigned long long _activateStartTime;	// 88 = 0x58
    unsigned long long _activateEndTime;	// 96 = 0x60
    unsigned long long _deactivateStartTime;	// 104 = 0x68
    unsigned long long _deactivateEndTime;	// 112 = 0x70
    NSString *_atvRemoteDeviceID;	// 120 = 0x78
    CSAudioRecordContext *_audioRecordContext;	// 128 = 0x80
}

+ (void)createSharedAudioSession;	// IMP=0x00200000000a486f
+ (id)defaultInjectionProvider;	// IMP=0x00100000000a483f
- (void).cxx_destruct;	// IMP=0x00200000000a2dea
@property(nonatomic) _Bool allowZeroInjection; // @synthesize allowZeroInjection=_allowZeroInjection;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *atvRemoteDeviceID; // @synthesize atvRemoteDeviceID=_atvRemoteDeviceID;
@property(nonatomic) unsigned long long deactivateEndTime; // @synthesize deactivateEndTime=_deactivateEndTime;
@property(nonatomic) unsigned long long deactivateStartTime; // @synthesize deactivateStartTime=_deactivateStartTime;
@property(nonatomic) unsigned long long activateEndTime; // @synthesize activateEndTime=_activateEndTime;
@property(nonatomic) unsigned long long activateStartTime; // @synthesize activateStartTime=_activateStartTime;
@property(nonatomic) unsigned long long latestPluginStreamId; // @synthesize latestPluginStreamId=_latestPluginStreamId;
@property(retain, nonatomic) NSMutableDictionary *audioInjectionEngines; // @synthesize audioInjectionEngines=_audioInjectionEngines;
@property(retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine; // @synthesize builtInAudioInjectionEngine=_builtInAudioInjectionEngine;
@property(retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote; // @synthesize bundleTvRemote=_bundleTvRemote;
@property(retain, nonatomic) CSAudioInjectionDevice *builtInDevice; // @synthesize builtInDevice=_builtInDevice;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) float didStartDelayInSeconds; // @synthesize didStartDelayInSeconds=_didStartDelayInSeconds;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000a2af6
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000a2a9c
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(_Bool)arg6;	// IMP=0x00100000000a29c4
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000a291b
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000a2915
- (id)metrics;	// IMP=0x00100000000a26e2
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000a26dc
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a26d4
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000a26cc
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a26c3
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a26ba
- (void)updateMeters;	// IMP=0x00100000000a26b4
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000a26ae
- (unsigned long long)alertStartTime;	// IMP=0x00100000000a26a6
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000a269e
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x00100000000a260b
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000a2603
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x00100000000a25f6
- (_Bool)duckOthersOption;	// IMP=0x00100000000a25ee
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00100000000a25e8
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a25e0
- (MISSING_TYPE *)deactivateAudioSession:error: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a2553
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a24c6
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a2445
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000a23e3
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a23db
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a23c2
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a22c9
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a21dc
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a2118
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a2013
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a1ee7
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a1d2c
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1aac
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1a16
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a1a0e
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1896
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000a1890
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000a17fc
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000a1768
- (void)willDestroy;	// IMP=0x00100000000a1739
- (void)disconnectDevice:(id)arg1;	// IMP=0x00100000000a169b
- (void)connectDevice:(id)arg1;	// IMP=0x00100000000a15fd
- (id)primaryInputDevice;	// IMP=0x00100000000a15c9
- (void)stop;	// IMP=0x00100000000a14ec
- (void)_createSpeechDetectionVADIfNeeded;	// IMP=0x00100000000a13bc
- (void)_tearDownSpeechDetectionVADIfNeeded;	// IMP=0x00100000000a1340
- (void)_connectPluginDevice:(id)arg1;	// IMP=0x00100000000a122a
- (void)start;	// IMP=0x00100000000a11d8
- (void)dealloc;	// IMP=0x00100000000a111e
- (id)init;	// IMP=0x00100000000a0ef7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
