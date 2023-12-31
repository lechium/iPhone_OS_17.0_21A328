//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, TTSSpeechManager;

@interface AXOutputManager : NSObject
{
    _Bool _speechEnabled;	// 8 = 0x8
    _Bool _soundAudioSessionActive;	// 9 = 0x9
    _Bool _speechAudioSessionActive;	// 10 = 0xa
    _Bool _soundEffectsEnabled;	// 11 = 0xb
    NSMutableDictionary *_registeredSoundIDs;	// 16 = 0x10
    AXAccessQueue *_outputAccessQueue;	// 24 = 0x18
    TTSSpeechManager *_speechManager;	// 32 = 0x20
    NSArray *_recentSpeechOutputStrings;	// 40 = 0x28
    NSMutableSet *_unfinishedSpeechActionsWithCompletionBlocks;	// 48 = 0x30
    NSMutableArray *_cachedRecentSpeechOutputRequests;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000000d55e7
@property(retain, nonatomic) NSMutableArray *cachedRecentSpeechOutputRequests; // @synthesize cachedRecentSpeechOutputRequests=_cachedRecentSpeechOutputRequests;
@property(retain, nonatomic) NSMutableSet *unfinishedSpeechActionsWithCompletionBlocks; // @synthesize unfinishedSpeechActionsWithCompletionBlocks=_unfinishedSpeechActionsWithCompletionBlocks;
@property(retain, nonatomic) NSArray *recentSpeechOutputStrings; // @synthesize recentSpeechOutputStrings=_recentSpeechOutputStrings;
@property(nonatomic, getter=areSoundEffectsEnabled) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic, getter=isSpeechAudioSessionActive) _Bool speechAudioSessionActive; // @synthesize speechAudioSessionActive=_speechAudioSessionActive;
@property(nonatomic, getter=isSoundAudioSessionActive) _Bool soundAudioSessionActive; // @synthesize soundAudioSessionActive=_soundAudioSessionActive;
@property(retain, nonatomic) TTSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) AXAccessQueue *outputAccessQueue; // @synthesize outputAccessQueue=_outputAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredSoundIDs; // @synthesize registeredSoundIDs=_registeredSoundIDs;
- (id)_urlForSoundEffect:(int)arg1;	// IMP=0x00100000000d51bc
- (void)_flushSoundIDs;	// IMP=0x00100000000d4fce
- (void)_playSoundWithSoundID:(unsigned int)arg1;	// IMP=0x00100000000d4fbd
- (void)cancelSpeech;	// IMP=0x00100000000d4f78
- (void)dispatchSpeechAction:(id)arg1;	// IMP=0x00100000000d4e18
- (void)playSound:(int)arg1;	// IMP=0x00100000000d4b67
@property(nonatomic, getter=isSpeechEnabled) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
- (id)_voiceOverBundle;	// IMP=0x00100000000d4a9f
- (void)dealloc;	// IMP=0x00100000000d471d
- (id)init;	// IMP=0x00100000000d4628
@property(readonly, nonatomic) _Bool scanningInterruptsSpeech;
- (void)_scatAddCompletionBlockToAction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d65a6
- (void)outputScannerAttributedString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d633f
- (void)outputScannerAnnouncement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d60af
- (void)outputScannerFocusContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d5e85
- (_Bool)_scatOutputCanSpeakString:(id)arg1 withLanguage:(id)arg2;	// IMP=0x00100000000d5d8a
- (_Bool)_scatLanguage:(id)arg1 matchesOverrideLanguage:(id)arg2;	// IMP=0x00100000000d5cb6
- (id)processAXOutputAction:(id)arg1;	// IMP=0x00100000000d5c4b
- (id)_scatProcessAttributedString:(id)arg1;	// IMP=0x00100000000d563b

@end

