//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject
{
    _Bool _receivedMultilingualResultsCommand;	// 8 = 0x8
    _Bool _offlineOnly;	// 9 = 0x9
    _Bool _ignoreSpeechRecognitionResults;	// 10 = 0xa
    _Bool _lowConfidenceAboutLanguageDetection;	// 11 = 0xb
    unsigned int _charBeforeInsertionPointOnDictationStart;	// 12 = 0xc
    unsigned int _charAfterInsertionPointOnDictationStart;	// 16 = 0x10
    id <UIDictationConnectionDelegate> _delegate;	// 24 = 0x18
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;	// 32 = 0x20
    AFDictationOptions *_dictationOptions;	// 40 = 0x28
    AFDictationConnection *_connection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 56 = 0x38
    NSString *_lastUsedPrimaryLanguage;	// 64 = 0x40
    NSString *_lastUsedDetectedLanguage;	// 72 = 0x48
    NSMutableArray *_lastUsedTopLanguages;	// 80 = 0x50
    NSMutableDictionary *_lastReceivedPartials;	// 88 = 0x58
}

+ (_Bool)hasSpeechRecognitionPauseAckPhrases:(id)arg1;	// IMP=0x0010000000c1caf4
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c1c913
+ (void)_updateFromGlobalOptions:(id)arg1;	// IMP=0x0010000000c1932f
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0010000000c19318
+ (_Bool)dictationRestricted;	// IMP=0x0010000000c191f3
+ (void)cacheSupportedDictationLanguages;	// IMP=0x0010000000c18e8a
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c18cb0
+ (_Bool)isDictationAvailable;	// IMP=0x0010000000c18c4f
+ (id)analytics;	// IMP=0x0010000000c1860d
+ (id)_log;	// IMP=0x0010000000c18410
- (void).cxx_destruct;	// IMP=0x0000000000c20f24
@property(retain, nonatomic) NSMutableDictionary *lastReceivedPartials; // @synthesize lastReceivedPartials=_lastReceivedPartials;
@property(nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // @synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart;
@property(nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // @synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(retain, nonatomic) NSMutableArray *lastUsedTopLanguages; // @synthesize lastUsedTopLanguages=_lastUsedTopLanguages;
@property(copy, nonatomic) NSString *lastUsedDetectedLanguage; // @synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage;
@property(copy, nonatomic) NSString *lastUsedPrimaryLanguage; // @synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(nonatomic) _Bool ignoreSpeechRecognitionResults; // @synthesize ignoreSpeechRecognitionResults=_ignoreSpeechRecognitionResults;
@property(nonatomic) _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property(retain, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(nonatomic) _Bool receivedMultilingualResultsCommand; // @synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand;
@property(nonatomic) __weak id <UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;
@property(nonatomic) __weak id <UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dictationConnection:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 nluResult:(id)arg3;	// IMP=0x0000000000c20b3b
- (void)dictationConnection:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x0000000000c20993
- (void)dictationConnectionDidPauseRecognition:(id)arg1;	// IMP=0x0000000000c208d1
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0000000000c20827
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;	// IMP=0x0000000000c207e6
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0000000000c2077b
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;	// IMP=0x0000000000c1f72a
- (void)dictationConnection:(id)arg1 didRecognizePartialPackage:(id)arg2 nluResult:(id)arg3 languageModel:(id)arg4;	// IMP=0x0000000000c1f575
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000c1ef22
- (id)dictationSerializedResultWithPhrases:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000c1eaf1
- (void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x0000000000c1e148
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x0000000000c1d946
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x0000000000c1d8db
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x0000000000c1d89a
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x0000000000c1d5fb
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x0000000000c1d4bd
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;	// IMP=0x0000000000c1d450
- (void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;	// IMP=0x0000000000c1d3e3
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;	// IMP=0x0000000000c1d3a2
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;	// IMP=0x0000000000c1d361
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;	// IMP=0x0000000000c1d317
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;	// IMP=0x0000000000c1cd1c
- (_Bool)isSecureInput;	// IMP=0x0000000000c1caeb
- (void)preheat;	// IMP=0x0000000000c1c8d6
- (void)synthesizeDidRecognizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;	// IMP=0x0000000000c1c833
- (void)synthesizeDidRecognizeTokens:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000c1c7a5
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;	// IMP=0x0000000000c1c3f7
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000c1bd5e
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000c1badf
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000c1b860
- (void)cancelSpeech;	// IMP=0x0000000000c1b522
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(_Bool)arg4;	// IMP=0x0000000000c1b2a6
- (void)_startWithOptions:(id)arg1;	// IMP=0x0000000000c1a6c1
- (id)_initializeWithOptions:(id)arg1;	// IMP=0x0000000000c1a658
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000c1a538
- (void)start;	// IMP=0x0000000000c1a3fa
- (id)_createConnectionOptions;	// IMP=0x0000000000c1a2a2
- (id)_speechOptions:(id)arg1;	// IMP=0x0000000000c1a0be
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;	// IMP=0x0000000000c1a0a4
- (id)_dictationOptions:(id)arg1;	// IMP=0x0000000000c1990b
- (id)languageDetectionUserContext;	// IMP=0x0000000000c19472
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c19157
- (void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x0000000000c190a9
- (void)resumeSpeechRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;	// IMP=0x0000000000c1900c
- (void)pauseSpeechRecognition;	// IMP=0x0000000000c18f1b
- (void)endSession;	// IMP=0x0000000000c18ede
- (float)averagePower;	// IMP=0x0000000000c18c60
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x0000000000c18a96
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000c188d8
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;	// IMP=0x0000000000c18829
- (void)restartDictation;	// IMP=0x0000000000c1878f
- (void)cancelAvailabilityMonitoring;	// IMP=0x0000000000c18752
- (void)beginAvailabilityMonitoring;	// IMP=0x0000000000c18715

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
