//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFVoiceInfo, AceObject, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, SAPreSynthesizeTTS, VSSpeechSynthesizer;
@protocol SAAceCommand;

@interface SRPreSynthesisTask : NSObject
{
    VSSpeechSynthesizer *_speechSynthesizer;	// 8 = 0x8
    AFVoiceInfo *_outputVoice;	// 16 = 0x10
    NSError *_currentError;	// 24 = 0x18
    NSArray *_parsedDialogStringsForPreSynthesis;	// 32 = 0x20
    NSMutableArray *_preSynthesizedTTSAudioDurations;	// 40 = 0x28
    NSMutableDictionary *_parsedDialogStringIndicies;	// 48 = 0x30
    SAPreSynthesizeTTS *_preSynthesizeTTSCommand;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    AceObject<SAAceCommand> *_replyAceCommand;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007b3cf
@property(retain, nonatomic) AceObject<SAAceCommand> *replyAceCommand; // @synthesize replyAceCommand=_replyAceCommand;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SAPreSynthesizeTTS *preSynthesizeTTSCommand; // @synthesize preSynthesizeTTSCommand=_preSynthesizeTTSCommand;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;	// IMP=0x001000000007b0ca
- (_Bool)handlePreSynthesisCommandWithError:(id *)arg1;	// IMP=0x001000000007a459
- (id)init;	// IMP=0x00100000000799fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

