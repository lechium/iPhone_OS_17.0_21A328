//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationSessionTracker : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSMutableDictionary *_activeSessionsByUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001614e7
- (void)_endAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000016136b
- (void)_endSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x00100000001611f8
- (void)_endSessionTransactionForReason:(id)arg1 session:(id)arg2 isSpeechTransaction:(_Bool)arg3;	// IMP=0x00100000001610c2
- (void)_beginAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0010000000160e7a
- (void)_beginSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0010000000160c4c
- (id)_sessionWithUUID:(id)arg1;	// IMP=0x0010000000160c36
- (id)_startedOrStartingSession;	// IMP=0x0010000000160ba4
- (void)_removeSession:(id)arg1;	// IMP=0x0010000000160a60
- (void)_addSession:(id)arg1;	// IMP=0x0010000000160919
- (void)notifyAudioFileIOTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000001607f4
- (void)notifySpeechRecognitionTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000001606cf
- (void)stopSessionForReason:(id)arg1;	// IMP=0x0010000000160620
- (id)startSessionForReason:(id)arg1 languageCode:(id)arg2 options:(id)arg3 speechRequestOptions:(id)arg4;	// IMP=0x00100000001603f8
- (id)init;	// IMP=0x001000000016031d

@end

