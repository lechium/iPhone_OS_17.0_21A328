//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinator, ADSpeechCompressor, ADSpeechLog, ADSpeechPlaybackSimulator, ADVolumeService, AFAudioPowerUpdater, AFClientConfiguration, AFDictationOptions, AFInstanceContext, CSAudioDeviceInfo, CSAudioSessionController, CSSiriAudioPlaybackService, CSSiriSpeechRecorder, CSSiriSpeechRecordingContext, CSSpeechController, CoreEmbeddedSpeechRecognizer, NSArray, NSError, NSString;
@protocol ADSpeechManagerDelegate, ADVolumeServiceProviding, ADVolumeTracking, AFAudioSessionAssertionAcquisitionService, CSSiriRecordingInfoProviding, CSSiriSpeechCapturing, OS_dispatch_queue;

@interface ADSpeechManager : NSObject
{
    CoreEmbeddedSpeechRecognizer *_interactiveLocalSpeechRecognizer;	// 8 = 0x8
    NSString *_localSpeechRecognizerTask;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    AFInstanceContext *_instanceContext;	// 32 = 0x20
    int _speechState;	// 40 = 0x28
    _Bool _shouldTalkToDelegate;	// 44 = 0x2c
    long long _capturingMode;	// 48 = 0x30
    AFClientConfiguration *_clientConfiguration;	// 56 = 0x38
    CSSiriSpeechRecordingContext *_capturingContext;	// 64 = 0x40
    NSError *_recordingError;	// 72 = 0x48
    id <ADSpeechManagerDelegate> _delegate;	// 80 = 0x50
    CDUnknownBlockType _recordStartedCompletion;	// 88 = 0x58
    CDUnknownBlockType _recordStoppedCompletion;	// 96 = 0x60
    _Bool _releasesAudioSessionWhenRecordingStopped;	// 104 = 0x68
    long long _prepareAudioSystemTransactionCount;	// 112 = 0x70
    _Bool _releasesAudioSessionWhenPrepareAudioSystemDone;	// 120 = 0x78
    ADSpeechLog *_speechLog;	// 128 = 0x80
    CSSpeechController *_speechController;	// 136 = 0x88
    CSAudioSessionController *_audioSessionController;	// 144 = 0x90
    id <CSSiriSpeechCapturing> _currentCapturing;	// 152 = 0x98
    CSSiriSpeechRecorder *_speechRecorder;	// 160 = 0xa0
    ADSpeechPlaybackSimulator *_playbackSimulator;	// 168 = 0xa8
    ADSpeechCompressor *_speechCompressor;	// 176 = 0xb0
    ADVolumeService *_volumeService;	// 184 = 0xb8
    CSSiriAudioPlaybackService *_audioPlaybackService;	// 192 = 0xc0
    id _context;	// 200 = 0xc8
    _Bool _isDriving;	// 208 = 0xd0
    _Bool _isAudioSessionLikelyActive;	// 209 = 0xd1
    _Bool _isReleaseAudioSessionRequired;	// 210 = 0xd2
    _Bool _hasPreparedAudioSystemForPlayback;	// 211 = 0xd3
    CSAudioDeviceInfo *_audioDeviceInfo;	// 216 = 0xd8
    NSString *_recordRoute;	// 224 = 0xe0
    NSString *_deviceIdentifier;	// 232 = 0xe8
    _Bool _hasFetchedSmartSiriVolume;	// 240 = 0xf0
    _Bool _hasUpdatedSiriOutputVolume;	// 241 = 0xf1
    unsigned long long _dirtySiriOutputVolumeHostTime;	// 248 = 0xf8
    _Bool _hasReceivedLastAudioBuffer;	// 256 = 0x100
    NSString *_initialDictationLanguage;	// 264 = 0x108
    NSString *_primaryDictationLanguage;	// 272 = 0x110
    NSArray *_dictationLanguages;	// 280 = 0x118
    AFDictationOptions *_dictationOptions;	// 288 = 0x120
    NSArray *_inlineItemList;	// 296 = 0x128
    AFAudioPowerUpdater *_audioPowerUpdater;	// 304 = 0x130
    ADAudioSessionCoordinator *_audioSessionCoordinator;	// 312 = 0x138
}

+ (id)sharedManager;	// IMP=0x00200000002c96ef
+ (id)_speechCodecError;	// IMP=0x00100000002c96c4
+ (id)_badStateError;	// IMP=0x00100000002c9699
+ (id)_ADSpeechManagerLowPriorityDispatchQueue;	// IMP=0x00100000002c9609
- (void).cxx_destruct;	// IMP=0x00200000002c2c1c
@property(readonly, nonatomic) CSSiriAudioPlaybackService *audioPlaybackService; // @synthesize audioPlaybackService=_audioPlaybackService;
@property(readonly, nonatomic) CSAudioSessionController *audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) ADAudioSessionCoordinator *audioSessionCoordinator; // @synthesize audioSessionCoordinator=_audioSessionCoordinator;
@property(readonly, nonatomic) AFAudioPowerUpdater *audioPowerUpdater; // @synthesize audioPowerUpdater=_audioPowerUpdater;
@property(copy, nonatomic) NSArray *inlineItemList; // @synthesize inlineItemList=_inlineItemList;
@property(nonatomic) _Bool isDriving; // @synthesize isDriving=_isDriving;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(copy, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(copy, nonatomic) NSString *primaryDictationLanguage; // @synthesize primaryDictationLanguage=_primaryDictationLanguage;
@property(copy, nonatomic) NSString *initialDictationLanguage; // @synthesize initialDictationLanguage=_initialDictationLanguage;
- (void)asrBridgeReceivedPartialResult:(id)arg1 language:(id)arg2 tokens:(id)arg3;	// IMP=0x00100000002c2a79
- (void)asrBridgeReceivedFinalResult:(id)arg1 speechPackage:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002c2998
- (void)asrBridgeReceivedEagerRecognitionCandidate:(id)arg1 rawRecognitionResult:(id)arg2 duration:(double)arg3 sessionUUID:(id)arg4;	// IMP=0x00100000002c28b7
@property(readonly, nonatomic) id <AFAudioSessionAssertionAcquisitionService> audioSessionAssertionAcquisitionService;
- (void)_getAdjustedSiriOutputVolumeLevelForAudioRoute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c2793
- (void)adjustSiriOutputVolumeForRouteIfNeeded:(id)arg1;	// IMP=0x00100000002c2706
- (void)_updateSiriOutputVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c2572
- (void)_fetchSmartSiriVolumeForType:(unsigned long long)arg1 forceFetch:(_Bool)arg2;	// IMP=0x00100000002c23dc
- (void)_fetchSmartSiriVolume:(_Bool)arg1;	// IMP=0x00100000002c23c3
- (id)_volumeService;	// IMP=0x00100000002c2276
- (_Bool)_supportsVolumeService;	// IMP=0x00100000002c225b
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x00100000002c21ce
- (void)_addRecordStoppedCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c20e7
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x00100000002c2099
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x00100000002c2049
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00100000002c1fbc
@property(readonly, nonatomic) id <CSSiriRecordingInfoProviding> recordingInfoProvider;
@property(readonly, nonatomic) id <ADVolumeServiceProviding> volumeServiceProvider;
@property(readonly, nonatomic) id <ADVolumeTracking> volumeTracker;
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c1f14
- (void)stopFingerprintingForSuccess:(_Bool)arg1;	// IMP=0x00100000002c1ec6
- (void)updateSpeechOptions:(id)arg1;	// IMP=0x00100000002c1def
- (void)playRecordingStartAlert;	// IMP=0x00100000002c1da4
- (void)setSpeechRecognizedContext:(id)arg1;	// IMP=0x00100000002c1d17
- (void)enforcePreviousEndpointHint;	// IMP=0x00100000002c1ccc
- (void)updateEndpointHintForRC:(id)arg1 forceAccept:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002c1c09
- (void)updateOptionsAfterRecognitionForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00100000002c1bb6
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00100000002c1b29
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00100000002c1ad4
- (void)setFingerprintWasRecognized;	// IMP=0x00100000002c1a89
- (void)suppressAudioInterruptionEndedNotificationsAndEndSessionIfIdle:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c19fc
- (_Bool)_endSessionIfIdle;	// IMP=0x00100000002c190c
- (void)_cancelRecordingIfNeededAndEndSessionWhenIdleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c14a0
- (void)endSession:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c12a5
- (void)endSession;	// IMP=0x00100000002c1121
- (void)setSuppressAudioInterruptionEndedNotifications:(_Bool)arg1;	// IMP=0x00100000002c10d3
- (void)_stopSpeechCaptureWithOptions:(id)arg1;	// IMP=0x00100000002c0e17
- (void)stopSpeechCaptureIfFingerprintingOnlyWithOptions:(id)arg1;	// IMP=0x00100000002c0cb8
- (void);	// IMP=0x00100000002c0b38
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00100000002c0a05
- (void)startSpeechCaptureWithURL:(id)arg1 isNarrowBand:(_Bool)arg2 isDictation:(_Bool)arg3 sessionUUID:(id)arg4;	// IMP=0x00100000002c08fc
- (void)addRecordedDictationAudioSampleData:(id)arg1;	// IMP=0x00100000002c086f
- (void)startRecordedDictationCaptureWithSessionUUID:(id)arg1 narrowband:(_Bool)arg2 secureOfflineOnly:(_Bool)arg3;	// IMP=0x00100000002c079e
- (void)_startCaptureForMode:(long long)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x00100000002bfce6
- (id)_startFixedPriorityCaptureForMode:(long long)arg1 options:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002bfb38
- (void)startAcousticIDCaptureWithOptions:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002bfb12
- (id)startSpeechCaptureForDictationWithOptions:(id)arg1 sessionUUID:(id)arg2 secureOfflineOnly:(_Bool)arg3;	// IMP=0x00100000002bf9bb
- (id)startSpeechCaptureForRequestWithOptions:(id)arg1 sessionUUID:(id)arg2 language:(id)arg3;	// IMP=0x00100000002bf8d5
- (_Bool)isStopped;	// IMP=0x00100000002bf847
- (_Bool)isCapturing;	// IMP=0x00100000002bf7b9
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00100000002bf72c
- (void)setDelegate:(id)arg1;	// IMP=0x00100000002bf69f
- (void)_prepareAudioSystemWithContext:(id)arg1 audioSessionAssertion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bed46
- (void)prepareAudioSystemWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bebc9
- (void)preheatRecognizerWithOptions:(id)arg1;	// IMP=0x00100000002beab3
- (void)preheatWithOptions:(id)arg1;	// IMP=0x00100000002be99d
- (void)eagerlyInitializeAudioRecording;	// IMP=0x00100000002be952
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000002be865
- (void)localSpeechRecognizer:(id)arg1 didProduceLoggablePackage:(id)arg2;	// IMP=0x00100000002be7ae
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000002be6f7
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x00100000002be66a
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000002be5ce
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000002be517
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;	// IMP=0x00100000002be4fa
- (id)_recordingInfo;	// IMP=0x00100000002be4aa
- (id)getRecordingInfo;	// IMP=0x00100000002be3f1
- (void)getRecordingInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002be35a
- (void)getVolumeServiceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002be2c3
- (void)setDirtySiriOutputVolumeHostTime:(unsigned long long)arg1;	// IMP=0x00100000002be274
- (void)audioSessionCoordinator:(id)arg1 releaseAudioSessionWithContext:(id)arg2;	// IMP=0x00100000002be136
- (void)audioSessionCoordinator:(id)arg1 prepareAudioSessionWithContext:(id)arg2;	// IMP=0x00100000002bdff8
- (void)speechCapturingDidProvideConfidenceScores:(id)arg1 classification:(unsigned long long)arg2 classifiedUser:(id)arg3 unknownUserScore:(long long)arg4 duration:(long long)arg5 version:(long long)arg6 thresholdingType:(id)arg7 assetVersion:(id)arg8;	// IMP=0x00100000002bdf09
- (void)speechCapturing:(id)arg1 languageDetectorDidFail:(id)arg2;	// IMP=0x00100000002bdead
- (void)speechCapturing:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;	// IMP=0x00100000002bde92
- (void)speechCapturing:(id)arg1 didLoseAudioSessionOwnerOrMediaServices:(id)arg2;	// IMP=0x00100000002bddd4
- (void)speechCapturing:(id)arg1 didInterruptAudioSession:(id)arg2;	// IMP=0x00100000002bdd16
- (void)speechCapturing:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000002bdc1b
- (void)speechCapturing:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000002bdb27
- (void)speechCapturingDidRequestUpdateSiriOutputVolume:(id)arg1;	// IMP=0x00100000002bda48
- (void)speechCapturingDidRequestShutdownUI:(id)arg1;	// IMP=0x00100000002bd9ac
- (void)speechCapturingDidRequestQuickStop:(id)arg1;	// IMP=0x00100000002bd910
- (void)speechCapturing:(id)arg1 performTwoShotPromptWithType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bd8f8
- (void)speechCapturing:(id)arg1 didDetectEndpointAtTime:(double)arg2;	// IMP=0x00100000002bd8e6
- (void)speechCapturing:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000002bd8d4
- (void)speechCapturing:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;	// IMP=0x00100000002bd8bc
- (void)speechCapturingDidDelayEndpointForMusic:(id)arg1;	// IMP=0x00100000002bd8aa
- (void)speechCapturingDidDetectMusic:(id)arg1;	// IMP=0x00100000002bd898
- (void)speechCapturing:(id)arg1 didReceiveFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x00100000002bd883
- (void)speechCapturingDidRecordPCMAudioData:(id)arg1;	// IMP=0x00100000002bd87d
- (void)speechCapturingDidRecordSpeechPackets:(id)arg1 atTimestamp:(double)arg2 totalPacketCount:(long long)arg3;	// IMP=0x00100000002bd72a
- (void)speechCapturingDidStopRecordingWithError:(id)arg1 endpointMode:(long long)arg2 totalPacketCount:(long long)arg3 endpointerMetrics:(id)arg4;	// IMP=0x00100000002bd63f
- (void)speechCapturingWillStopRecordingWithSignpostID:(unsigned long long)arg1;	// IMP=0x00100000002bd62d
- (void)speechCapturingWillStopRecording;	// IMP=0x00100000002bd616
- (void)speechCapturingDidReceiveLastAudioBufferWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x00100000002bd4da
- (void)speechCapturingDidUpdateAudioDeviceInfo:(id)arg1;	// IMP=0x00100000002bd4c8
- (void)speechCapturingDidUpdateRecordingInfo:(id)arg1;	// IMP=0x00100000002bd422
- (void)speechCapturingDidStartRecordingSuccessfully:(_Bool)arg1 error:(id)arg2 withInfo:(id)arg3;	// IMP=0x00100000002bc44d
- (void)_updateCapturingStateWithOptions:(id)arg1;	// IMP=0x00100000002bc360
- (void)_recordingStoppedWithError:(id)arg1 totalPacketCount:(long long)arg2 endpointMode:(long long)arg3 endpointerMetrics:(id)arg4;	// IMP=0x00100000002bc051
- (void)_lastAudioBufferReceivedWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x00100000002bbf06
- (void)_cancelRecordingWithError:(id)arg1 suppressAlert:(_Bool)arg2;	// IMP=0x00100000002bbd88
- (void)_tellDelegateSpeechWillStopRecordingWithSignpostID:(unsigned long long)arg1;	// IMP=0x00100000002bbd43
- (void)_tellDelegateDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00100000002bbcc1
- (void)_tellDelegateDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x00100000002bbc7e
- (void)_tellDelegateWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x00100000002bbc3b
- (void)_tellDelegateShutdownUIWasRequested;	// IMP=0x00100000002bbc01
- (void)_tellDelegateQuickStopWasRequested;	// IMP=0x00100000002bbbc7
- (void)_tellDelegateToPerformTwoShotPromptWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbb62
- (void)_tellDelegateSpeechEndpointWasDetectedAtTime:(double)arg1;	// IMP=0x00100000002bbb16
- (void)_tellDelegateSpeechStartpointWasDetectedAtTime:(double)arg1;	// IMP=0x00100000002bbaca
- (void)_tellDelegateAudioFileDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x00100000002bba48
- (void)_tellDelegateAboutInputAveragePower:(float)arg1 peak:(float)arg2;	// IMP=0x00100000002bb960
- (void)_tellDelegateEndpointWasDelayedForMusic;	// IMP=0x00100000002bb88c
- (void)_tellDelegateMusicWasDetected;	// IMP=0x00100000002bb7b8
- (void)_tellDelegateAboutFingerprint:(id)arg1 duration:(double)arg2;	// IMP=0x00100000002bb6d3
- (void)_tellDelegateAboutSpeechPackets:(id)arg1 atTimestamp:(double)arg2 count:(long long)arg3;	// IMP=0x00100000002bb5e0
- (void)_tellDelegateUpdateAudioInfo:(id)arg1;	// IMP=0x00100000002bb501
- (void)_tellDelegateSpeechStartedWithRecordingInfo:(id)arg1;	// IMP=0x00100000002bb422
- (void)_tellDelegateSpeechWillBeginWithTimestamp:(double)arg1 isFromFile:(_Bool)arg2 isAudioPowerUpdateDisabled:(_Bool)arg3;	// IMP=0x00100000002bb2c0
- (void)_tellDelegateSpeechRecognitionUpdateWillBegin;	// IMP=0x00100000002bb1e8
- (void)_tellDelegateSpeechShouldPreheatWithRecordingInfo:(id)arg1;	// IMP=0x00100000002bb109
- (void)_tellDelegateSpeechFinished;	// IMP=0x00100000002bb012
- (void)_tellDelegateSpeechReceivedLastAudioBufferWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x00100000002baf18
- (void)_tellDelegateSpeechFailedWithError:(id)arg1;	// IMP=0x00100000002bae24
- (void)_tellDelegateSpeechCanceled;	// IMP=0x00100000002bad2d
- (void)_cleanUpDelegateInfo;	// IMP=0x00100000002bac70
- (void)resetLocalRecognizer;	// IMP=0x00100000002bac25
- (void)cancelLocalRecognitionIfActive;	// IMP=0x00100000002babda
- (_Bool)isLocallyRecognizingInSiriMiniMode;	// IMP=0x00100000002bab3c
- (_Bool)isLocallyRecognizingInDictationMode;	// IMP=0x00100000002baaae
- (_Bool)isLocallyRecognizing;	// IMP=0x00100000002baa20
- (void)disableDESWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ba993
- (void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ba8f4
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x00100000002ba7fc
- (void)_fetchAssetsForLanguageOrEnablementNotification:(id)arg1;	// IMP=0x00100000002ba7b1
- (void)dictationSessionDidComplete;	// IMP=0x00100000002ba766
- (_Bool)_releaseSession;	// IMP=0x00100000002ba1b5
- (void)_updateRecordRoute:(id)arg1 andDeviceIdentifier:(id)arg2;	// IMP=0x00100000002b9fce
- (void)_updateAudioDeviceInfo:(id)arg1;	// IMP=0x00100000002b9e5b
- (void)_updateSpeechState:(int)arg1;	// IMP=0x00100000002b9cfd
- (id)_currentSpeechCaptureSource;	// IMP=0x00100000002b9c18
- (id)_speechCompressor;	// IMP=0x00100000002b9a79
- (id)endpointerModelVersion;	// IMP=0x00100000002b9a60
- (void)getSpeechRecorderVTSatScore:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b99d3
- (id)_speechRecorder;	// IMP=0x00100000002b9822
- (void)dealloc;	// IMP=0x00100000002b978c
- (id)_initWithInstanceContext:(id)arg1;	// IMP=0x00100000002b9355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

