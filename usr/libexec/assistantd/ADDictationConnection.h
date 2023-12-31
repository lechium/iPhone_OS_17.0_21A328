//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDictationSessionTracker, AFDictationOptions, CoreEmbeddedSpeechRecognizer, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol AFDictationServiceDelegate, OS_dispatch_queue;

@interface ADDictationConnection : NSObject
{
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 8 = 0x8
    _Bool _usingLocalSpeechRecognizer;	// 16 = 0x10
    id <AFDictationServiceDelegate> _serviceDelegate;	// 24 = 0x18
    AFDictationOptions *_dictationOptions;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _waitingForSpeechRecognition;	// 48 = 0x30
    _Bool _waitingForStructuredResultsOrVoiceSearch;	// 49 = 0x31
    _Bool _waitingForAudioFile;	// 50 = 0x32
    _Bool _waitingForKeyboardVisibleCheck;	// 51 = 0x33
    ADDictationSessionTracker *_sessionTracker;	// 56 = 0x38
    NSXPCListener *_pendingSpeechRequestListener;	// 64 = 0x40
    NSXPCConnection *_pendingSpeechRequestConnection;	// 72 = 0x48
    CDUnknownBlockType _pendingSpeechRequestContinue;	// 80 = 0x50
    _Bool _disconnected;	// 88 = 0x58
    CDUnknownBlockType _requestCompletion;	// 96 = 0x60
    _Bool _isDetectingUtterances;	// 104 = 0x68
    _Bool _shouldFinalizeRequestOnNextFinalResult;	// 105 = 0x69
    _Bool _didFinalizeUtteranceDetectionRequest;	// 106 = 0x6a
    NSMutableArray *_audioSessionAssertions;	// 112 = 0x70
    _Bool adSpeechSessionEnded;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000002b6a6d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool adSpeechSessionEnded; // @synthesize adSpeechSessionEnded;
- (void)_continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x00100000002b6931
- (oneway void)continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x00100000002b68e1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002b67e4
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000002b6757
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000002b66ca
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x00100000002b65f6
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000002b65a6
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000002b6519
- (id)_localSpeechRecognizerSupportingBackground:(_Bool)arg1;	// IMP=0x00100000002b63aa
- (id)_updateDictationOptionsForOnDeviceDictation:(id)arg1 language:(id)arg2;	// IMP=0x00100000002b5c49
- (oneway void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x00100000002b5a1b
- (oneway void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002b5824
- (oneway void)resumeRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;	// IMP=0x00100000002b56b5
- (oneway void)pauseRecognition;	// IMP=0x00100000002b5599
- (oneway void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x00100000002b54af
- (oneway void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b5308
- (oneway void)requestOfflineAssistantSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b5161
- (oneway void)getInstalledOfflineLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b50a0
- (oneway void)_sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;	// IMP=0x00100000002b5028
- (oneway void)_startDictationWithURL:(id)arg1 isNarrowBand:(_Bool)arg2 language:(id)arg3 options:(id)arg4;	// IMP=0x00100000002b4d8c
- (oneway void)addRecordedSpeechSampleData:(id)arg1;	// IMP=0x00100000002b4cfc
- (oneway void)startRecordedAudioDictationWithOptions:(id)arg1 language:(id)arg2 narrowband:(_Bool)arg3 forceSampling:(_Bool)arg4;	// IMP=0x00100000002b4531
- (oneway void)recordAWDSuccessMetrics;	// IMP=0x00100000002b44ed
- (oneway void)recordFailureMetricsForError:(id)arg1;	// IMP=0x00100000002b4480
- (oneway void)endSession;	// IMP=0x00100000002b4391
- (oneway void)preheatWithRecordDeviceIdentifier:(id)arg1;	// IMP=0x00100000002b42af
- (oneway void)preheatTestWithLanguage:(id)arg1 options:(id)arg2;	// IMP=0x00100000002b413b
- (oneway void)preheat;	// IMP=0x00100000002b40c6
- (oneway void)preheatForLanguageCode:(id)arg1;	// IMP=0x00100000002b3f42
- (oneway void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;	// IMP=0x00100000002b3e46
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x00100000002b3dba
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2;	// IMP=0x00100000002b3d24
- (oneway void)updateSpeechOptions:(id)arg1;	// IMP=0x00100000002b3bfa
- (oneway void)stopSpeechWithOptions:(id)arg1;	// IMP=0x00100000002b3983
- (oneway void)cancelSpeech;	// IMP=0x00100000002b384e
- (oneway void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;	// IMP=0x00100000002b3401
- (oneway void)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002b30b2
- (void)_invokeRequestCompletion;	// IMP=0x00100000002b2feb
- (oneway void)startRequestActivityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b2f5e
- (void)_startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 xpcconnection:(id)arg4;	// IMP=0x00100000002b2e74
- (id)_dictationWillStartWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 xpcconnection:(id)arg4;	// IMP=0x00100000002b2538
- (void)adSpeechDidPauseRecognition;	// IMP=0x00100000002b24ed
- (void)adSpeechDidBeginLocalRecognitionWithModelInfo:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002b2460
- (void)adSpeechMultilingualSpeechRecognized:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002b23d3
- (void)adSpeechLanguageDetectorFailedWithError:(id)arg1;	// IMP=0x00100000002b2346
- (void)adSpeechRecordingDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00100000002b2283
- (_Bool)adWaitingForAudioFile;	// IMP=0x00100000002b21f5
- (void)adAudioFileFinishedWriting:(id)arg1 error:(id)arg2 context:(id)arg3;	// IMP=0x00100000002b20f2
- (void)adPronunciationRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b200d
- (void)adSpeechLocalRecognitionDidSucceedWithSessionUUID:(id)arg1;	// IMP=0x00100000002b1f02
- (void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002b1dac
- (void)adSpeechRecognizedStructuredResult:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b1ac1
- (void)adSpeechRecordingDidRecognizePhrases:(id)arg1 rawPhrases:(id)arg2 utterances:(id)arg3 rawUtterances:(id)arg4 nluResult:(id)arg5 sessionUUID:(id)arg6 refId:(id)arg7;	// IMP=0x00100000002b19ba
- (void)adSpeechRecordingDidRecognizeVoiceCommandCandidatePackage:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b19a4
- (void)adSpeechRecordingDidRecognizeFinalResultCandidatePackage:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002b198e
- (void)adSpeechRecordingDidRecognizePartialPackage:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b1971
- (void)adSpeechRecordingDidRecognizeTokens:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b1954
- (void)adSpeechDidFindVoiceSearchFinalResult:(id)arg1;	// IMP=0x00100000002b18c7
- (void)adSpeechDidFindVoiceSearchPartialResult:(id)arg1;	// IMP=0x00100000002b183a
- (void)adSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x00100000002b17ad
- (void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002b16c8
- (void)adSpeechRecordingDidFail:(id)arg1 context:(id)arg2;	// IMP=0x00100000002b1570
- (void)adSpeechRecordingDidCancelWithContext:(id)arg1;	// IMP=0x00100000002b144e
- (void)adSpeechRecordingDidEndWithContext:(id)arg1;	// IMP=0x00100000002b1393
- (void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 bluetoothDevice:(id)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x00100000002b138d
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id)arg3 sessionRequestUUID:(id)arg4 dictationOptions:(id)arg5 context:(id)arg6;	// IMP=0x00100000002b125c
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 context:(id)arg2;	// IMP=0x00100000002b1246
- (void)_removeAllAudioSessionAssertionsForReason:(id)arg1;	// IMP=0x00100000002b0fc8
- (void)_addAudioSessionAssertion:(id)arg1;	// IMP=0x00100000002b0f6e
- (void)_speechRecordingDidFinish;	// IMP=0x00100000002b0e2a
- (void)_updateDictationOptions:(id)arg1;	// IMP=0x00100000002b0dfd
- (void)connectionDisconnected;	// IMP=0x00100000002b0d84
- (void)dealloc;	// IMP=0x00100000002b0cb7
- (id)initWithServiceDelegate:(id)arg1;	// IMP=0x00100000002b0b1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

