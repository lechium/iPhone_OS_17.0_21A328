//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, CSReusableBufferPool, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol CSAudioSessionEventProvidingDelegate, OS_dispatch_queue;

@interface CSAudioRecorder : NSObject
{
    AVVoiceController *_voiceController;	// 8 = 0x8
    struct AudioBufferList _interleavedABL;	// 16 = 0x10
    struct AudioBufferList *_pNonInterleavedABL;	// 40 = 0x28
    CSRemoteRecordClient *_remoteRecordClient;	// 48 = 0x30
    NSMutableDictionary *_opusDecoders;	// 56 = 0x38
    CSAudioFileReader *_audioFileReader;	// 64 = 0x40
    unsigned long long _audioFilePathIndex;	// 72 = 0x48
    _Bool _waitingForDidStart;	// 80 = 0x50
    unsigned long long _pendingTwoShotVTToken;	// 88 = 0x58
    CSReusableBufferPool *_audioBufferPool;	// 96 = 0x60
    NSMutableDictionary *_hasSetAlertDictionary;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_voiceControllerCreationQueue;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    id <CSAudioSessionEventProvidingDelegate> _sessionEventDelegate;	// 136 = 0x88
    NSMutableSet *_remoteAccessoryStreamIdSet;	// 144 = 0x90
}

+ (void)resetDuckSettings;	// IMP=0x00200000000757f6
+ (void)createSharedAudioSession;	// IMP=0x0010000000075540
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;	// IMP=0x0010000000075531
- (void).cxx_destruct;	// IMP=0x0020000000073681
@property(retain, nonatomic) NSMutableSet *remoteAccessoryStreamIdSet; // @synthesize remoteAccessoryStreamIdSet=_remoteAccessoryStreamIdSet;
@property(nonatomic) __weak id <CSAudioSessionEventProvidingDelegate> sessionEventDelegate; // @synthesize sessionEventDelegate=_sessionEventDelegate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // @synthesize voiceControllerCreationQueue=_voiceControllerCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_recordModeString:(long long)arg1;	// IMP=0x00100000000735b4
- (id)_fetchRemoteRecordClientWithDeviceId:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000073313
- (id)_getRecordSettingsWithRequest:(id)arg1;	// IMP=0x0010000000072f31
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;	// IMP=0x0010000000072f17
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000072e8a
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;	// IMP=0x0010000000072e19
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;	// IMP=0x0010000000072d57
- (_Bool)_hasLocalPendingTwoShot;	// IMP=0x0010000000072cc9
- (void)remoteRecordConnectionDisconnected:(id)arg1;	// IMP=0x0010000000072c68
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;	// IMP=0x0010000000072c62
- (void)remoteRecordLPCMBufferAvailable:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000072b32
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0010000000072ae3
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0010000000072a43
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;	// IMP=0x001000000007296c
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;	// IMP=0x0010000000072895
- (void)voiceControllerEndRecordInterruption:(id)arg1;	// IMP=0x00100000000727d5
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000726c5
- (void)voiceControllerBeginRecordInterruption:(id)arg1;	// IMP=0x0010000000072605
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00100000000724b4
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;	// IMP=0x0010000000072392
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;	// IMP=0x00100000000722be
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;	// IMP=0x00100000000721e8
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;	// IMP=0x00100000000720d6
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x0010000000071f66
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000071cf7
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;	// IMP=0x0010000000071b6d
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x00100000000719c8
- (id)metrics;	// IMP=0x0010000000071978
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000007196f
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000071966
- (void)updateMeters;	// IMP=0x0010000000071960
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x001000000007195a
- (unsigned long long)alertStartTime;	// IMP=0x0010000000071916
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000717b4
- (_Bool)playAlertSoundForType:(long long)arg1 overrideMode:(long long)arg2;	// IMP=0x00100000000716b5
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x001000000007169e
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x0010000000071530
- (_Bool)_audioIsFromRemoteAccessory:(unsigned long long)arg1;	// IMP=0x00100000000714cb
- (void)_stopTrackingRemoteAccessoryStreamId:(unsigned long long)arg1;	// IMP=0x0010000000071407
- (void)_trackRemoteAccessoryStreamIdIfNeeded:(id)arg1;	// IMP=0x0010000000071243
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(_Bool)arg7 receivedNumChannels:(unsigned int)arg8;	// IMP=0x00100000000710fe
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;	// IMP=0x0010000000070f28
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x00100000000702e0
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 numberOfChannels:(int)arg6;	// IMP=0x0010000000070200
- (_Bool)clearListeningMicIndicatorProperty;	// IMP=0x00100000000701f8
- (_Bool)setListeningMicIndicatorProperty;	// IMP=0x00100000000701f0
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;	// IMP=0x0010000000070197
- (id)_updateLanguageCodeForRemoteVTEIResult:(id)arg1;	// IMP=0x0010000000070037
- (_Bool)isDuckingSupportedOnCurrentRouteWithStreamHandleID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000006feef
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000006fd08
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x001000000006fca7
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x001000000006fb2c
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x001000000006f95d
- (void)setDuckMixWithOthersForStream:(unsigned long long)arg1 duckOthers:(_Bool)arg2 duckToLevelInDB:(id)arg3 mixWithOthers:(_Bool)arg4;	// IMP=0x001000000006f5f7
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x001000000006f35b
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006f17a
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000006efb5
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006ebcb
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006e9bc
- (void)_logResourceNotAvailableErrorIfNeeded:(id)arg1;	// IMP=0x001000000006e8d0
- (_Bool)_shouldLogResourceNotAvailableError;	// IMP=0x001000000006e8a5
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000006e6c4
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006e4d2
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006e473
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006e2c8
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x001000000006deb7
- (id);	// IMP=0x001000000006dba4
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000006da6c
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000006d9c2
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x001000000006d881
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006d400
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006cbbd
- (_Bool)_startAudioStreamForAudioInjectionWithAVVCContext:(id)arg1;	// IMP=0x001000000006c658
- (_Bool)_shouldInjectAudio;	// IMP=0x001000000006c60d
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006bf90
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006bbca
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b73f
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x001000000006b656
- (id)_getVoiceController;	// IMP=0x001000000006b59d
- (id)_createVoiceControllerWithError:(id *)arg1;	// IMP=0x001000000006b3bf
- (void)_destroyVoiceController;	// IMP=0x001000000006b212
- (void)dealloc;	// IMP=0x001000000006b148
- (void)willDestroy;	// IMP=0x001000000006b01f
- (void)userSessionActivateMonitor:(id)arg1 didReceivedUserSessionActiveHasChanged:(_Bool)arg2;	// IMP=0x001000000006afd0
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x001000000006af43
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000006aeb6
- (void)registerObserver:(id)arg1;	// IMP=0x001000000006ae29
- (id)initWithQueue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006a92a
- (id)init;	// IMP=0x001000000006a87f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

