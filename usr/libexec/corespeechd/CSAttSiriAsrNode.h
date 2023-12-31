//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriEndpointerNode, CSAttSiriMagusASRNode, CSAttSiriSSRNode, CSAttSiriUresNode, CSAudioProcessWaitingBuffer, CSAudioRecordContext, CSConnectionListener, CSEndpointDelayReporter, CSOSTransaction, CSPlainAudioFileWriter, CSSpeechRecognitionSelfHelper, CSUncompressedAudioLogging, LBLocalSpeechRecognitionSettings, NSArray, NSString, NSUUID;
@protocol CoreEmbeddedSpeechRecognizerProvider, OS_dispatch_queue;

@interface CSAttSiriAsrNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _speechHasAcceptedResultCandidate;	// 9 = 0x9
    _Bool _shouldProcessAudio;	// 10 = 0xa
    _Bool _isFileLoggingEnabled;	// 11 = 0xb
    _Bool _didDetectedEndpoint;	// 12 = 0xc
    _Bool _shouldStopProcessASROnEndpoint;	// 13 = 0xd
    _Bool _disableEndpointer;	// 14 = 0xe
    _Bool _onDeviceDictationSampled;	// 15 = 0xf
    _Bool _onDeviceAssistantSampled;	// 16 = 0x10
    unsigned int _activeChannel;	// 20 = 0x14
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    CSAttSiriController *_attSiriController;	// 40 = 0x28
    NSString *_mhId;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_targetQueue;	// 56 = 0x38
    CSAttSiriEndpointerNode *_endpointerNode;	// 64 = 0x40
    CSAttSiriUresNode *_uresNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_localSpeechRecognizerQueue;	// 88 = 0x58
    id <CoreEmbeddedSpeechRecognizerProvider> _interactiveLocalSpeechRecognizer;	// 96 = 0x60
    id <CoreEmbeddedSpeechRecognizerProvider> _presetLocalSpeechRecognizer;	// 104 = 0x68
    NSString *_localSpeechRecognizerTaskString;	// 112 = 0x70
    unsigned long long _localSpeechRecognizerState;	// 120 = 0x78
    CSAudioProcessWaitingBuffer *_audioWaitingBuffer;	// 128 = 0x80
    double _localSpeechRecognizerDeliverAudioDuration;	// 136 = 0x88
    NSString *_language;	// 144 = 0x90
    NSString *_requestId;	// 152 = 0x98
    unsigned long long _eagerResultId;	// 160 = 0xa0
    LBLocalSpeechRecognitionSettings *_speechRecognitionSettings;	// 168 = 0xa8
    CSAudioRecordContext *_recordContext;	// 176 = 0xb0
    long long _endpointMode;	// 184 = 0xb8
    CSOSTransaction *_asrResultDeliveryTransaction;	// 192 = 0xc0
    CSOSTransaction *_recordingTransaction;	// 200 = 0xc8
    NSString *_siriSessionUUID;	// 208 = 0xd0
    NSUUID *_recordingToken;	// 216 = 0xd8
    unsigned long long _voiceTriggerFireMachTime;	// 224 = 0xe0
    CSPlainAudioFileWriter *_audioFileWriter;	// 232 = 0xe8
    double _endpointStartTimeInSec;	// 240 = 0xf0
    unsigned long long _audioSampleCountToSkip;	// 248 = 0xf8
    double _detectedEndpointTime;	// 256 = 0x100
    double _lastEndpointHintDuration;	// 264 = 0x108
    long long _lastEndpointHintRCId;	// 272 = 0x110
    unsigned long long _lastEndpointEagerResultTime;	// 280 = 0x118
    NSArray *_lastEndpointHintFeatures;	// 288 = 0x120
    CSEndpointDelayReporter *_endpointDelayReporter;	// 296 = 0x128
    unsigned long long _recordingStartTime;	// 304 = 0x130
    unsigned long long _firstPartialResultTime;	// 312 = 0x138
    double _firstWordDuration;	// 320 = 0x140
    double _leadingSilenceDuration;	// 328 = 0x148
    CSUncompressedAudioLogging *_audioLogging;	// 336 = 0x150
    CSSpeechRecognitionSelfHelper *_asrSelfHelper;	// 344 = 0x158
    CSAttSiriMagusASRNode *_magusASR;	// 352 = 0x160
    CSConnectionListener *_localSRBridgeListener;	// 360 = 0x168
}

+ (long long)endpointModeFromEndpointMetrics:(id)arg1;	// IMP=0x00200000000c95d8
- (void).cxx_destruct;	// IMP=0x00200000000c5eb9
@property(retain, nonatomic) CSConnectionListener *localSRBridgeListener; // @synthesize localSRBridgeListener=_localSRBridgeListener;
@property(retain, nonatomic) CSAttSiriMagusASRNode *magusASR; // @synthesize magusASR=_magusASR;
@property(retain, nonatomic) CSSpeechRecognitionSelfHelper *asrSelfHelper; // @synthesize asrSelfHelper=_asrSelfHelper;
@property(nonatomic) _Bool onDeviceAssistantSampled; // @synthesize onDeviceAssistantSampled=_onDeviceAssistantSampled;
@property(nonatomic) _Bool onDeviceDictationSampled; // @synthesize onDeviceDictationSampled=_onDeviceDictationSampled;
@property(retain, nonatomic) CSUncompressedAudioLogging *audioLogging; // @synthesize audioLogging=_audioLogging;
@property(nonatomic) double leadingSilenceDuration; // @synthesize leadingSilenceDuration=_leadingSilenceDuration;
@property(nonatomic) double firstWordDuration; // @synthesize firstWordDuration=_firstWordDuration;
@property(nonatomic) unsigned long long firstPartialResultTime; // @synthesize firstPartialResultTime=_firstPartialResultTime;
@property(nonatomic) unsigned long long recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(retain, nonatomic) CSEndpointDelayReporter *endpointDelayReporter; // @synthesize endpointDelayReporter=_endpointDelayReporter;
@property(nonatomic) _Bool disableEndpointer; // @synthesize disableEndpointer=_disableEndpointer;
@property(retain, nonatomic) NSArray *lastEndpointHintFeatures; // @synthesize lastEndpointHintFeatures=_lastEndpointHintFeatures;
@property(nonatomic) unsigned long long lastEndpointEagerResultTime; // @synthesize lastEndpointEagerResultTime=_lastEndpointEagerResultTime;
@property(nonatomic) long long lastEndpointHintRCId; // @synthesize lastEndpointHintRCId=_lastEndpointHintRCId;
@property(nonatomic) double lastEndpointHintDuration; // @synthesize lastEndpointHintDuration=_lastEndpointHintDuration;
@property(nonatomic) _Bool shouldStopProcessASROnEndpoint; // @synthesize shouldStopProcessASROnEndpoint=_shouldStopProcessASROnEndpoint;
@property(nonatomic) double detectedEndpointTime; // @synthesize detectedEndpointTime=_detectedEndpointTime;
@property(nonatomic) _Bool didDetectedEndpoint; // @synthesize didDetectedEndpoint=_didDetectedEndpoint;
@property(nonatomic) unsigned long long audioSampleCountToSkip; // @synthesize audioSampleCountToSkip=_audioSampleCountToSkip;
@property(nonatomic) double endpointStartTimeInSec; // @synthesize endpointStartTimeInSec=_endpointStartTimeInSec;
@property(nonatomic) _Bool isFileLoggingEnabled; // @synthesize isFileLoggingEnabled=_isFileLoggingEnabled;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(nonatomic) unsigned long long voiceTriggerFireMachTime; // @synthesize voiceTriggerFireMachTime=_voiceTriggerFireMachTime;
@property(retain, nonatomic) NSUUID *recordingToken; // @synthesize recordingToken=_recordingToken;
@property(retain, nonatomic) NSString *siriSessionUUID; // @synthesize siriSessionUUID=_siriSessionUUID;
@property(retain, nonatomic) CSOSTransaction *recordingTransaction; // @synthesize recordingTransaction=_recordingTransaction;
@property(retain, nonatomic) CSOSTransaction *asrResultDeliveryTransaction; // @synthesize asrResultDeliveryTransaction=_asrResultDeliveryTransaction;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) _Bool shouldProcessAudio; // @synthesize shouldProcessAudio=_shouldProcessAudio;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) LBLocalSpeechRecognitionSettings *speechRecognitionSettings; // @synthesize speechRecognitionSettings=_speechRecognitionSettings;
@property(nonatomic) _Bool speechHasAcceptedResultCandidate; // @synthesize speechHasAcceptedResultCandidate=_speechHasAcceptedResultCandidate;
@property(nonatomic) unsigned long long eagerResultId; // @synthesize eagerResultId=_eagerResultId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) double localSpeechRecognizerDeliverAudioDuration; // @synthesize localSpeechRecognizerDeliverAudioDuration=_localSpeechRecognizerDeliverAudioDuration;
// Error: Property attributes should begin with the type ('T') attribute, property name: audioWaitingBuffer
// Property attributes: (null)

@property(nonatomic) unsigned long long localSpeechRecognizerState; // @synthesize localSpeechRecognizerState=_localSpeechRecognizerState;
@property(retain, nonatomic) NSString *localSpeechRecognizerTaskString; // @synthesize localSpeechRecognizerTaskString=_localSpeechRecognizerTaskString;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> presetLocalSpeechRecognizer; // @synthesize presetLocalSpeechRecognizer=_presetLocalSpeechRecognizer;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> interactiveLocalSpeechRecognizer; // @synthesize interactiveLocalSpeechRecognizer=_interactiveLocalSpeechRecognizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *localSpeechRecognizerQueue; // @synthesize localSpeechRecognizerQueue=_localSpeechRecognizerQueue;
@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerUresNode:) __weak CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(nonatomic, setter=registerEndpointerNode:) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)attSiriMagusASRNodeFinalMigitationDecisionMade;	// IMP=0x00100000000c5941
- (void)_setupRecognizerStateForMagusAsrNode;	// IMP=0x00100000000c590e
- (void)_markTimeToFirstWordMetric;	// IMP=0x00100000000c536a
- (id)_fetchRecognizerLanguageWithSiriLanguage:(id)arg1 UILanguage:(id)arg2 taskString:(id)arg3;	// IMP=0x00100000000c522e
- (double)_getFirstTokenDurationFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c50ff
- (double)_getLeadingSilenceDurationFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c4feb
- (double)_getUserSpeakingEndedTimeFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c4ec9
- (id)_sourceStringFromPreheatSource:(unsigned long long)arg1;	// IMP=0x00100000000c4e93
- (id)_stateToString:(unsigned long long)arg1;	// IMP=0x00100000000c4e74
- (void)_setLocalSpeechRecognizerState:(unsigned long long)arg1;	// IMP=0x00100000000c4d56
- (void)_clearAudioProcessWaitingBufferIfNeeded;	// IMP=0x00100000000c4d11
- (id)_getAsrInputoriginFromContext:(id)arg1;	// IMP=0x00100000000c4c5e
- (id)_fetchInputOriginWithRecordContext:(id)arg1;	// IMP=0x00100000000c4b0b
- (unsigned long long)fetchCurrentState;	// IMP=0x00100000000c483d
- (void)localSpeechRecognizer:(id)arg1 didSelectRecognitionModelWithModelProperties:(id)arg2;	// IMP=0x00100000000c46f9
- (void)localSpeechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x00100000000c462c
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000000c453f
- (void)_handleDidRecognizedSpeechPackageForEagerRecognitionCandidate:(id)arg1 requestId:(id)arg2 rcId:(unsigned long long)arg3 metadata:(id)arg4;	// IMP=0x00100000000c41b4
- (void)_handleDidRecognizedFinalSpeechPackage:(id)arg1 requestId:(id)arg2 metadata:(id)arg3;	// IMP=0x00100000000c3f97
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3eb2
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000000c3dfb
- (void)localSpeechRecognizer:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3d16
- (void)localSpeechRecognizer:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x00100000000c3c5f
- (void)_handleShouldAcceptEagerResultWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 duration:(double)arg3 shouldAccept:(_Bool)arg4 featuresToLog:(id)arg5;	// IMP=0x00100000000c3b77
- (void)_queryShouldAcceptEagerResultForDuration:(double)arg1 requestId:(id)arg2 rcId:(unsigned long long)arg3;	// IMP=0x00100000000c38ff
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x00100000000c38f9
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000000c385c
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3777
- (void)localSpeechRecognizer:(id)arg1 didRecognizePartialPackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3692
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000000c35db
- (void)_resetLocalSpeechRecognizerParameters;	// IMP=0x00100000000c35b7
- (void)_invalidateLocalSpeechRecognizer;	// IMP=0x00100000000c356e
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x00100000000c3393
- (void)_releaseRecordingTransactionIfNeededWithToken:(id)arg1;	// IMP=0x00100000000c322d
- (void)_scheduleRecordingTransactionReleaseTimer;	// IMP=0x00100000000c30bc
- (void)_handleStopSpeechRecognitionTaskIfNeeded:(_Bool)arg1;	// IMP=0x00100000000c2e46
- (void)_processAudioChunk:(id)arg1 withReadyTimestamp:(id)arg2;	// IMP=0x00100000000c2b88
- (void)_startLocalSpeechRecognizerIfNeeded;	// IMP=0x00100000000c14ec
- (void)_deliverCachedAsrResults;	// IMP=0x00100000000c12ca
- (_Bool)_shouldDisableLocalSpeechRecognizerWithOption:(id)arg1 audioRecordContext:(id)arg2;	// IMP=0x00100000000c1131
- (void)_stopPreviousRecognitionTaskIfNeededWithNewRequestId:(id)arg1 stopUresProcessing:(_Bool)arg2;	// IMP=0x00100000000c1024
- (void)prepareToStartSpeechRequestWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x00100000000c0f3f
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2;	// IMP=0x00100000000c0dae
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2 shouldDownloadMissingAsset:(_Bool)arg3;	// IMP=0x00100000000c0d24
- (void)preheatWithLanguage:(id)arg1 shouldDownloadMissingAsset:(_Bool)arg2;	// IMP=0x00100000000c0c85
- (void)start;	// IMP=0x00100000000c0bc5
- (void)_clearEndpointHint;	// IMP=0x00100000000c0b95
- (void)_enforceEndpointHintWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 shouldAccept:(_Bool)arg3 featuresToLog:(id)arg4;	// IMP=0x00100000000c08e5
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000c08df
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000c0842
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x00100000000c07f7
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000c076a
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000c071c
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x00100000000c0665
- (oneway void)resetCacheAndCompileAllAssets;	// IMP=0x00100000000c0650
- (oneway void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;	// IMP=0x00100000000c04bf
- (oneway void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000c03db
- (void)_disableLocalSpeechRecognitionForRequestId:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000c0271
- (oneway void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000c01e4
- (oneway void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x00100000000c00af
- (void)_startDeliverLocalSpeechRecognitionResultsWithRequestId:(id)arg1;	// IMP=0x00100000000bfd6a
- (oneway void)startSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x00100000000bfcba
- (oneway void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00100000000bfc1a
- (void)stopASRProcessforMagus;	// IMP=0x00100000000bfbcf
- (void)abortASRResultsForMagus;	// IMP=0x00100000000bfb84
- (void)registerAudioSrcNodeWithNodeType:(unsigned long long)arg1 audioSourceNode:(id)arg2;	// IMP=0x00100000000bfabe
- (void)_startMagusASRNode:(id)arg1 requestId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bf941
- (void)startASRProcessForMagusWithMHUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bf808
- (void)_handleStopDeliverLocalSpeechRecognitionWithStopUresProcessing:(_Bool)arg1;	// IMP=0x00100000000bf758
- (void)_setRecordingStartTimeWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x00100000000bf5f8
- (void)_adjustEndpointStartTimeWithVoiceTriggerEvent:(id)arg1;	// IMP=0x00100000000bf1ac
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000befff
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000beff9
- (void)stopWithReason:(unsigned long long)arg1;	// IMP=0x00100000000bef23
- (void)stop;	// IMP=0x00100000000bef0f
- (void)pause;	// IMP=0x00100000000bef09
- (id)initWithLocalSpeechRecognizer:(id)arg1 isFileLoggingEnabled:(_Bool)arg2;	// IMP=0x00100000000bed48
- (id)init;	// IMP=0x00100000000becdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

