//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDictationTipDeletionHandler, UIDictationTipEmojiHandler, UIDictationTipInsertionHandler, UIDictationTipModelessInputHandler, UIDictationTipPresentationHandler, UIDictationTipReplacementHandler, UIDictationTipSelectionHandler;

__attribute__((visibility("hidden")))
@interface UIDictationTipController : NSObject
{
    unsigned long long _dismissalReasonType;	// 8 = 0x8
    UIDictationTipPresentationHandler *_dictationTipPresentationHandler;	// 16 = 0x10
    UIDictationTipReplacementHandler *_dictationReplacementTipHandler;	// 24 = 0x18
    UIDictationTipDeletionHandler *_dictationDeletionTipHandler;	// 32 = 0x20
    UIDictationTipEmojiHandler *_dictationEmojiTipHandler;	// 40 = 0x28
    UIDictationTipSelectionHandler *_dictationSelectionTipHandler;	// 48 = 0x30
    UIDictationTipInsertionHandler *_dictationInsertionTipHandler;	// 56 = 0x38
    UIDictationTipModelessInputHandler *_dictationTipModelessInputHandler;	// 64 = 0x40
    CDUnknownBlockType _delayedTip;	// 72 = 0x48
}

+ (id)dictationTipPreferenceKey:(long long)arg1;	// IMP=0x0010000001657e62
- (void).cxx_destruct;	// IMP=0x00000000016593b6
@property(copy, nonatomic) CDUnknownBlockType delayedTip; // @synthesize delayedTip=_delayedTip;
@property(retain, nonatomic) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler; // @synthesize dictationTipModelessInputHandler=_dictationTipModelessInputHandler;
@property(retain, nonatomic) UIDictationTipInsertionHandler *dictationInsertionTipHandler; // @synthesize dictationInsertionTipHandler=_dictationInsertionTipHandler;
@property(retain, nonatomic) UIDictationTipSelectionHandler *dictationSelectionTipHandler; // @synthesize dictationSelectionTipHandler=_dictationSelectionTipHandler;
@property(retain, nonatomic) UIDictationTipEmojiHandler *dictationEmojiTipHandler; // @synthesize dictationEmojiTipHandler=_dictationEmojiTipHandler;
@property(retain, nonatomic) UIDictationTipDeletionHandler *dictationDeletionTipHandler; // @synthesize dictationDeletionTipHandler=_dictationDeletionTipHandler;
@property(retain, nonatomic) UIDictationTipReplacementHandler *dictationReplacementTipHandler; // @synthesize dictationReplacementTipHandler=_dictationReplacementTipHandler;
@property(retain, nonatomic) UIDictationTipPresentationHandler *dictationTipPresentationHandler; // @synthesize dictationTipPresentationHandler=_dictationTipPresentationHandler;
@property(nonatomic) unsigned long long dismissalReasonType; // @synthesize dismissalReasonType=_dismissalReasonType;
- (void)resetShowModelessTipSignal;	// IMP=0x000000000165928f
- (void)signalShowModelessTipIfNeeded;	// IMP=0x000000000165924d
- (void)processUserInteractionEnded;	// IMP=0x00000000016591eb
- (void)processSoftwareKeyboardInteraction;	// IMP=0x00000000016591ae
- (void)triggerModelessInputTipDictationStoppedSignal;	// IMP=0x000000000165916c
- (_Bool)modelessTipShown;	// IMP=0x0000000001659151
- (void)signalDictationInsertionTip:(id)arg1;	// IMP=0x0000000001659057
- (void)signalDictationEmojiTip:(id)arg1;	// IMP=0x0000000001658f32
- (void)signalDictationSendMessageTip;	// IMP=0x0000000001658e69
- (void)finalizeSelectionTip;	// IMP=0x0000000001658e2b
- (void)signalDictationSelectionTip:(id)arg1;	// IMP=0x0000000001658d91
- (void)signalDictationClearAllTip;	// IMP=0x0000000001658c8a
- (long long)currentDeletionEventCount;	// IMP=0x0000000001658c74
- (void)addDeletionEventCount:(id)arg1 deletedTextRange:(struct _NSRange)arg2;	// IMP=0x0000000001658c5e
- (void)resetDeletionEventCount;	// IMP=0x0000000001658c48
- (void)signalDictationDeletionTip:(id)arg1;	// IMP=0x0000000001658b8b
- (void)recordDictationTipDeletionText:(id)arg1;	// IMP=0x0000000001658b75
- (void)finalizeTextWithTipType:(long long)arg1 title:(id)arg2 andTipDescription:(id)arg3;	// IMP=0x0000000001658b57
- (void)recordDictationTipReplacementText:(id)arg1;	// IMP=0x0000000001658b41
- (void)signalDictationReplacementTip:(id)arg1;	// IMP=0x0000000001658aaa
- (id)replaceEmojiInStringWithEmojiDictationCommand:(id)arg1;	// IMP=0x0000000001658a94
- (void)emitTipShowingInstrumentation:(long long)arg1;	// IMP=0x00000000016588a3
- (void)logDictationTipDimissialInstrumentation;	// IMP=0x0000000001658535
- (void)reset;	// IMP=0x00000000016584e6
- (void)markDictationTipPreferenceToShown:(long long)arg1;	// IMP=0x00000000016584c7
- (void)incrementDictationTipDisplayCount:(long long)arg1 stopFutureShowing:(_Bool)arg2;	// IMP=0x000000000165834f
- (void)dictationCommandUsed:(unsigned long long)arg1 firstTargetString:(id)arg2 secondTargetString:(id)arg3;	// IMP=0x00000000016582a4
- (void)showDictationTipWithTitle:(id)arg1 description:(id)arg2 dictationTipType:(long long)arg3;	// IMP=0x000000000165803b
- (long long)getDictationTipSignaled;	// IMP=0x0000000001658025
- (_Bool)dictationTipShown:(long long)arg1;	// IMP=0x000000000165800f
- (void)presentDelayedTipIfNeeded;	// IMP=0x0000000001657fce
- (id)init;	// IMP=0x0000000001657e90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

