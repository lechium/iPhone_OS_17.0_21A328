//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol CSAttSiriUIDismissProtocol, CSAttendingHintProviding, LBAttendingStatesServiceDelegate, OS_dispatch_queue;

@interface CSAttendingStatesProvidingProxy : NSObject
{
    id <LBAttendingStatesServiceDelegate> _remoteObjectProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAttendingHintProviding> _hintProvider;	// 24 = 0x18
    NSHashTable<CSAttSiriUIDismissProtocol> *_dismissUpdateReceivers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000078db0
@property(retain, nonatomic) NSHashTable<CSAttSiriUIDismissProtocol> *dismissUpdateReceivers; // @synthesize dismissUpdateReceivers=_dismissUpdateReceivers;
@property(nonatomic) __weak id <CSAttendingHintProviding> hintProvider; // @synthesize hintProvider=_hintProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <LBAttendingStatesServiceDelegate> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x0010000000078c96
- (void)speechStartDetectedWithShouldDuckTTS:(_Bool)arg1;	// IMP=0x0010000000078c48
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x0010000000078ba6
- (void)localAttendingStoppedUnexpectedlyWithError:(id)arg1;	// IMP=0x0010000000078b19
- (void)localAttendingStartedWithRootRequestId:(id)arg1;	// IMP=0x0010000000078a8c
- (void)localAttendingStarted;	// IMP=0x0010000000078a41
- (void)localAttendingWillStartWithRootRequestId:(id)arg1;	// IMP=0x00100000000789b4
- (void)requestDismissed;	// IMP=0x0010000000078969
- (void)dismissAttending;	// IMP=0x001000000007891e
- (void)siriDidPromptWithRootRequestId:(id)arg1;	// IMP=0x001000000007880e
- (void)siriPromptWillStartWithRootRequestId:(id)arg1;	// IMP=0x001000000007876b
- (void)siriDidPrompt;	// IMP=0x0010000000078757
- (void)siriPromptWillStart;	// IMP=0x0010000000078743
- (void)startUpdateStates;	// IMP=0x00100000000786c4
- (void)attendingStatesXPCDisconnected;	// IMP=0x0010000000078679
- (void)registerAttendingHintProvider:(id)arg1;	// IMP=0x00100000000785ec
- (void)removeDismissUpdateReceiver:(id)arg1;	// IMP=0x001000000007855f
- (void)addDismissUpdateReceiver:(id)arg1;	// IMP=0x00100000000784d2
- (id)init;	// IMP=0x001000000007844b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

