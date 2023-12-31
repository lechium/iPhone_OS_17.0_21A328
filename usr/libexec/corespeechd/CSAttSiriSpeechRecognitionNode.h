//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriEndpointerNode, CSAttSiriSSRNode, CSAudioProcessWaitingBuffer, CSAudioRecordContext, CSEndpointDelayReporter, CSOSTransaction, CSPlainAudioFileWriter, CSSpeechRecognitionSelfHelper, CSUncompressedAudioLogging, LBLocalSpeechRecognitionSettings, NSArray, NSHashTable, NSMutableArray, NSString, NSUUID;
@protocol CoreEmbeddedSpeechRecognizerProvider, OS_dispatch_queue;

@interface CSAttSiriSpeechRecognitionNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _shouldProcessAudio;	// 9 = 0x9
    _Bool _isFileLoggingEnabled;	// 10 = 0xa
    _Bool _didDetectedEndpoint;	// 11 = 0xb
    _Bool _disableEndpointer;	// 12 = 0xc
    _Bool _onDeviceDictationSampled;	// 13 = 0xd
    _Bool _onDeviceAssistantSampled;	// 14 = 0xe
    unsigned int _activeChannel;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAttSiriEndpointerNode *_endpointerNode;	// 48 = 0x30
    CSAttSiriSSRNode *_ssrNode;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_localSpeechRecognizerQueue;	// 64 = 0x40
    NSHashTable *_endpointFeatureReceivers;	// 72 = 0x48
    NSHashTable *_resultCandidateReceivers;	// 80 = 0x50
    NSHashTable *_speechRecognitionReceivers;	// 88 = 0x58
    NSHashTable *_recognitionTaskCompletionReceivers;	// 96 = 0x60
    id <CoreEmbeddedSpeechRecognizerProvider> _interactiveLocalSpeechRecognizer;	// 104 = 0x68
    id <CoreEmbeddedSpeechRecognizerProvider> _presetLocalSpeechRecognizer;	// 112 = 0x70
    NSString *_localSpeechRecognizerTaskString;	// 120 = 0x78
    unsigned long long _localSpeechRecognizerState;	// 128 = 0x80
    CSAudioProcessWaitingBuffer *_audioWaitingBuffer;	// 136 = 0x88
    double _localSpeechRecognizerDeliverAudioDuration;	// 144 = 0x90
    NSString *_language;	// 152 = 0x98
    NSString *_requestId;	// 160 = 0xa0
    unsigned long long _eagerResultId;	// 168 = 0xa8
    LBLocalSpeechRecognitionSettings *_speechRecognitionSettings;	// 176 = 0xb0
    CSAudioRecordContext *_recordContext;	// 184 = 0xb8
    long long _endpointMode;	// 192 = 0xc0
    CSOSTransaction *_asrResultDeliveryTransaction;	// 200 = 0xc8
    CSOSTransaction *_recordingTransaction;	// 208 = 0xd0
    NSString *_siriSessionUUID;	// 216 = 0xd8
    NSUUID *_recordingToken;	// 224 = 0xe0
    unsigned long long _voiceTriggerFireMachTime;	// 232 = 0xe8
    CSPlainAudioFileWriter *_audioFileWriter;	// 240 = 0xf0
    double _endpointStartTimeInSec;	// 248 = 0xf8
    unsigned long long _audioSampleCountToSkip;	// 256 = 0x100
    NSMutableArray *_detectedEndpointTimes;	// 264 = 0x108
    unsigned long long _lastEndpointEagerResultTime;	// 272 = 0x110
    CSEndpointDelayReporter *_endpointDelayReporter;	// 280 = 0x118
    unsigned long long _recordingStartTime;	// 288 = 0x120
    unsigned long long _firstPartialResultTime;	// 296 = 0x128
    double _timeToSpeakFirstWord;	// 304 = 0x130
    unsigned long long _speechRecognitionMode;	// 312 = 0x138
    CSUncompressedAudioLogging *_audioLogging;	// 320 = 0x140
    CSSpeechRecognitionSelfHelper *_asrSelfHelper;	// 328 = 0x148
}

+ (long long)endpointModeFromEndpointMetrics:(id)arg1;	// IMP=0x0020000000084b3c
- (void).cxx_destruct;	// IMP=0x0020000000081570
@property(retain, nonatomic) CSSpeechRecognitionSelfHelper *asrSelfHelper; // @synthesize asrSelfHelper=_asrSelfHelper;
@property(nonatomic) _Bool onDeviceAssistantSampled; // @synthesize onDeviceAssistantSampled=_onDeviceAssistantSampled;
@property(nonatomic) _Bool onDeviceDictationSampled; // @synthesize onDeviceDictationSampled=_onDeviceDictationSampled;
@property(retain, nonatomic) CSUncompressedAudioLogging *audioLogging; // @synthesize audioLogging=_audioLogging;
@property(nonatomic) unsigned long long speechRecognitionMode; // @synthesize speechRecognitionMode=_speechRecognitionMode;
@property(nonatomic) double timeToSpeakFirstWord; // @synthesize timeToSpeakFirstWord=_timeToSpeakFirstWord;
@property(nonatomic) unsigned long long firstPartialResultTime; // @synthesize firstPartialResultTime=_firstPartialResultTime;
@property(nonatomic) unsigned long long recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(retain, nonatomic) CSEndpointDelayReporter *endpointDelayReporter; // @synthesize endpointDelayReporter=_endpointDelayReporter;
@property(nonatomic) _Bool disableEndpointer; // @synthesize disableEndpointer=_disableEndpointer;
@property(nonatomic) unsigned long long lastEndpointEagerResultTime; // @synthesize lastEndpointEagerResultTime=_lastEndpointEagerResultTime;
@property(retain, nonatomic) NSMutableArray *detectedEndpointTimes; // @synthesize detectedEndpointTimes=_detectedEndpointTimes;
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
@property(nonatomic) unsigned long long eagerResultId; // @synthesize eagerResultId=_eagerResultId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) double localSpeechRecognizerDeliverAudioDuration; // @synthesize localSpeechRecognizerDeliverAudioDuration=_localSpeechRecognizerDeliverAudioDuration;
@property(retain, nonatomic) CSAudioProcessWaitingBuffer *audioWaitingBuffer; // @synthesize audioWaitingBuffer=_audioWaitingBuffer;
@property(nonatomic) unsigned long long localSpeechRecognizerState; // @synthesize localSpeechRecognizerState=_localSpeechRecognizerState;
@property(retain, nonatomic) NSString *localSpeechRecognizerTaskString; // @synthesize localSpeechRecognizerTaskString=_localSpeechRecognizerTaskString;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> presetLocalSpeechRecognizer; // @synthesize presetLocalSpeechRecognizer=_presetLocalSpeechRecognizer;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> interactiveLocalSpeechRecognizer; // @synthesize interactiveLocalSpeechRecognizer=_interactiveLocalSpeechRecognizer;
@property(retain, nonatomic) NSHashTable *recognitionTaskCompletionReceivers; // @synthesize recognitionTaskCompletionReceivers=_recognitionTaskCompletionReceivers;
@property(retain, nonatomic) NSHashTable *speechRecognitionReceivers; // @synthesize speechRecognitionReceivers=_speechRecognitionReceivers;
@property(retain, nonatomic) NSHashTable *resultCandidateReceivers; // @synthesize resultCandidateReceivers=_resultCandidateReceivers;
@property(retain, nonatomic) NSHashTable *endpointFeatureReceivers; // @synthesize endpointFeatureReceivers=_endpointFeatureReceivers;
// Error: Property attributes should begin with the type ('T') attribute, property name: localSpeechRecognizerQueue
// Property attributes: (null)

@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerEndpointerNode:) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_markTimeToFirstWordMetric;	// IMP=0x0010000000080e41
- (id)_fetchRecognizerLanguageWithSiriLanguage:(id)arg1 UILanguage:(id)arg2 taskString:(id)arg3;	// IMP=0x0010000000080d05
- (double)_getFirstTokenSilenceStartTimeFromSpeechPackage:(id)arg1;	// IMP=0x0010000000080bf1
- (double)_getUserSpeakingEndedTimeFromSpeechPackage:(id)arg1;	// IMP=0x0010000000080acf
- (id)_sourceStringFromPreheatSource:(unsigned long long)arg1;	// IMP=0x0010000000080a99
- (id)_stateToString:(unsigned long long)arg1;	// IMP=0x0010000000080a7a
- (void)_setLocalSpeechRecognizerState:(unsigned long long)arg1;	// IMP=0x0010000000080956
- (void)_clearAudioProcessWaitingBufferIfNeeded;	// IMP=0x0010000000080911
- (id)_getAsrInputoriginFromContext:(id)arg1;	// IMP=0x001000000008085e
- (id)_fetchInputOriginWithRecordContext:(id)arg1;	// IMP=0x001000000008070b
- (unsigned long long)fetchCurrentState;	// IMP=0x001000000008055b
- (void)localSpeechRecognizer:(id)arg1 didSelectRecognitionModelWithModelProperties:(id)arg2;	// IMP=0x00100000000802db
- (void)localSpeechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x001000000008020e
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x0010000000080121
- (void)_handleDidRecognizedSpeechPackageForEagerRecognitionCandidate:(id)arg1 requestId:(id)arg2 rcId:(unsigned long long)arg3 metadata:(id)arg4;	// IMP=0x001000000007fcb1
- (void);	// IMP=0x001000000007f98f
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x001000000007f8aa
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x001000000007f7f3
- (void)localSpeechRecognizer:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x001000000007f73c
- (void)localSpeechRecognizer:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x001000000007f657
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x001000000007f651
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x001000000007f5b4
- (void)localSpeechRecognizer:(id)arg1 didRecognizePartialPackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x001000000007f4cf
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2 withMetadata:(id)arg3;	// IMP=0x001000000007f3ea
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x001000000007f333
- (void)_resetLocalSpeechRecognizerParameters;	// IMP=0x001000000007f318
- (void)_invalidateLocalSpeechRecognizer;	// IMP=0x001000000007f24d
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x001000000007f072
- (void)_releaseRecordingTransactionIfNeededWithToken:(id)arg1;	// IMP=0x001000000007ef0c
- (void)_scheduleRecordingTransactionReleaseTimer;	// IMP=0x001000000007ed9b
- (void)_handleStopSpeechRecognitionTaskIfNeeded:(_Bool)arg1;	// IMP=0x001000000007eb22
- (void)_processAudioChunk:(id)arg1 withReadyTimestamp:(id)arg2;	// IMP=0x001000000007e7fa
- (_Bool)_shouldTriggerEagerResultForInterval:(double)arg1;	// IMP=0x001000000007e6a0
- (void)_startLocalSpeechRecognizerIfNeeded;	// IMP=0x001000000007d036
- (_Bool)_shouldDisableLocalSpeechRecognizerWithOption:(id)arg1 audioRecordContext:(id)arg2;	// IMP=0x001000000007ce9d
- (void)_stopPreviousRecognitionTaskIfNeededWithNewRequestId:(id)arg1;	// IMP=0x001000000007cda2
- (void)prepareToStartSpeechRequestWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x001000000007ccbd
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2;	// IMP=0x001000000007cb2c
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2 shouldDownloadMissingAsset:(_Bool)arg3;	// IMP=0x001000000007caa2
- (void)preheatWithLanguage:(id)arg1 source:(unsigned long long)arg2 shouldDownloadMissingAsset:(_Bool)arg3;	// IMP=0x001000000007ca00
- (void)start;	// IMP=0x001000000007c940
- (void)attSiriNode:(id)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(id)arg4 useEndpointerSignal:(_Bool)arg5;	// IMP=0x001000000007c7f7
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000007c7f1
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x001000000007c751
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000007c706
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000007c679
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000007c62b
- (void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x001000000007c574
- (void)resetCacheAndCompileAllAssets;	// IMP=0x001000000007c55f
- (void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;	// IMP=0x001000000007c3ce
- (void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x001000000007c2ea
- (void)_disableLocalSpeechRecognitionForRequestId:(id)arg1 force:(_Bool)arg2;	// IMP=0x001000000007c180
- (void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x001000000007c0f3
- (void)_stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x001000000007bee2
- (void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x001000000007bdbf
- (void)_startDeliverLocalSpeechRecognitionResultsWithRequestId:(id)arg1;	// IMP=0x001000000007bade
- (void)startSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x001000000007ba1f
- (void)_handleStopDeliverLocalSpeechRecognitionWithRequestId:(id)arg1;	// IMP=0x001000000007b855
- (void)_setRecordingStartTimeWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x001000000007b6f5
- (void)_adjustEndpointStartTimeWithVoiceTriggerEvent:(id)arg1;	// IMP=0x001000000007b2a9
- (void)addRecognitionTaskCompletionReceiver:(id)arg1;	// IMP=0x001000000007b0d7
- (void)addSpeechRecognitionReceiver:(id)arg1;	// IMP=0x001000000007b01f
- (void)addEndpointFeatureReceiver:(id)arg1;	// IMP=0x001000000007af67
- (void)addResultCandidateReceiver:(id)arg1;	// IMP=0x001000000007aeaf
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000007aea9
- (void)addReceiver:(id)arg1;	// IMP=0x001000000007aea3
- (void)stopWithReason:(unsigned long long)arg1 stopStreamOption:(id)arg2;	// IMP=0x001000000007ad3a
- (void)stop;	// IMP=0x001000000007ad24
- (void)pause;	// IMP=0x001000000007ad1e
- (id)initWithLocalSpeechRecognizer:(id)arg1 isFileLoggingEnabled:(_Bool)arg2;	// IMP=0x001000000007ab2d
- (id)init;	// IMP=0x001000000007aac4

// Remaining properties
@property(nonatomic) __weak CSAttSiriController *attSiriController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

