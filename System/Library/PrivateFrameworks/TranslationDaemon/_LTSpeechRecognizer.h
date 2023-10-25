//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSString, NSURL, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognitionResultPackage, _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTSpeechRecognizer : NSObject
{
    _EARSpeechRecognizer *_recognizer;	// 8 = 0x8
    _EARSpeechRecognitionAudioBuffer *_buffer;	// 16 = 0x10
    _Bool _detectedSpeechEndpoint;	// 24 = 0x18
    _EARSpeechRecognitionResultPackage *_finalResult;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_recognitionQueue;	// 40 = 0x28
    NSURL *_modelURL;	// 48 = 0x30
    NSString *_modelVersion;	// 56 = 0x38
    NSLocale *_language;	// 64 = 0x40
    CDUnknownBlockType _recognitionHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005b993
@property(copy, nonatomic) CDUnknownBlockType recognitionHandler; // @synthesize recognitionHandler=_recognitionHandler;
@property(readonly, nonatomic) NSLocale *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x000000000005b956
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x000000000005b574
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2;	// IMP=0x000000000005b3e7
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x000000000005b0a3
- (void)_recognizedResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000005afc0
- (void)triggerServerSideEndPointer;	// IMP=0x000000000005af06
- (void)cancelRecognition;	// IMP=0x000000000005ae29
- (void)endAudio;	// IMP=0x000000000005ad6f
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x000000000005ac73
- (void)startRecognitionWithAutoStop:(_Bool)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005aab7
- (id)initWithModelURL:(id)arg1 language:(id)arg2 modelVersion:(id)arg3;	// IMP=0x000000000005a786

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
