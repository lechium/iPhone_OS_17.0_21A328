//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMessagePersistence, MFInvocationQueue, MISSING_TYPE, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol EDMessageDeliveryHookResponder, EFScheduler, OS_dispatch_queue;

@interface MFDeliveryQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    MFInvocationQueue *_jobQueue;	// 16 = 0x10
    int _state;	// 24 = 0x18
    unsigned long long _messagesFromActiveAccounts;	// 32 = 0x20
    NSMutableDictionary *_lastErrorForMessage;	// 40 = 0x28
    int _numberOfCurrentSynchronousDeliveries;	// 48 = 0x30
    struct os_unfair_lock_s _delayedMessagesLock;	// 52 = 0x34
    unsigned int _resetDeliveryQueueWhenDoneWithCurrentMessage:1;	// 56 = 0x38
    unsigned int _suspendRequested:1;	// 56 = 0x38
    unsigned int _isReachable:1;	// 56 = 0x38
    unsigned int _hasAdequateFreeSpace:1;	// 56 = 0x38
    id <EFScheduler> _observationScheduler;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    id <EFScheduler> _delayedMessageScheduler;	// 80 = 0x50
    NSMutableArray *_delayedMessages;	// 88 = 0x58
}

+ (id)newDeliveryObjectFactoryForMessage:(id)arg1;	// IMP=0x002000000006e8f9
+ (id)sharedDeliveryQueue;	// IMP=0x0010000000069849
+ (id)signpostLog;	// IMP=0x0010000000068e5f
+ (id)log;	// IMP=0x0010000000068d82
- (void).cxx_destruct;	// IMP=0x0020000000071239
@property(retain, nonatomic) NSMutableArray *delayedMessages; // @synthesize delayedMessages=_delayedMessages;
@property(retain, nonatomic) id <EFScheduler> delayedMessageScheduler; // @synthesize delayedMessageScheduler=_delayedMessageScheduler;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <EFScheduler> observationScheduler; // @synthesize observationScheduler=_observationScheduler;
- (id)copyDiagnosticInformation;	// IMP=0x0010000000070eef
- (void)test_waitForObservers;	// IMP=0x0010000000070e03
- (void)notifyObserversOfDelayedMessagesDidChange:(_Bool)arg1;	// IMP=0x0010000000070c04
- (void)notifyObserversOfUpdatedPendingMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000070a06
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000708bd
- (void)addObserver:(id)arg1;	// IMP=0x001000000007075b
- (void)_messagesCompacted:(id)arg1;	// IMP=0x00100000000705ff
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x00100000000703b9
- (void)_messagesAdded:(id)arg1;	// IMP=0x00100000000702e8
- (void)_flagsChanged:(id)arg1;	// IMP=0x0010000000070112
- (void)_mailAccountsChanged:(id)arg1;	// IMP=0x001000000006ffc1
- (void)_queueProcessingDidFinish:(id)arg1;	// IMP=0x001000000006feab
- (void)setPercentDone:(double)arg1;	// IMP=0x001000000006fe41
- (void)_processQueueWithOptions:(id)arg1;	// IMP=0x001000000006eb02
@property(readonly) id <EDMessageDeliveryHookResponder> deliveryHookResponder;
- (void)_logDeliveryResult:(id)arg1 forMessage:(id)arg2 account:(id)arg3;	// IMP=0x001000000006e43a
- (void)_updateDeliveryInfoFromResult:(id)arg1 forMessage:(id)arg2;	// IMP=0x001000000006e1a4
- (id)_sortedMessages;	// IMP=0x001000000006de16
- (_Bool)_shouldSend:(id)arg1 options:(id)arg2;	// IMP=0x001000000006d9a3
- (id)_append:(id)arg1 flags:(id)arg2;	// IMP=0x001000000006d4cc
- (void)_updateCounts;	// IMP=0x001000000006cfd3
- (void)_setDeliveryFlag:(id)arg1 state:(_Bool)arg2;	// IMP=0x001000000006ceab
- (void)_sendProcessingFinishedNotificationWithSentMessages:(id)arg1 failedMessages:(id)arg2 playSound:(_Bool)arg3;	// IMP=0x001000000006cd39
- (void)_sendProcessingStartedNotification:(id)arg1;	// IMP=0x001000000006cc32
- (void)_setErrorForMessage:(id)arg1 error:(id)arg2;	// IMP=0x001000000006cb4e
- (void)_setErrorForMessageLibraryID:(id)arg1 error:(id)arg2;	// IMP=0x001000000006ca98
- (id)_messagesInProgress;	// IMP=0x001000000006c9e1
- (id)_outboxStore;	// IMP=0x001000000006c794
- (id)lastErrorForMessage:(id)arg1;	// IMP=0x001000000006c5ac
- (_Bool)cancelLastDelayedMessage;	// IMP=0x001000000006c254
- (void)deliverAsynchronously:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b656
- (id)_deliverSynchronously:(id)arg1 outboxCopy:(id)arg2;	// IMP=0x001000000006a40b
- (id)_outboxCopyFromMessageDelivery:(id)arg1;	// IMP=0x001000000006a30c
- (id)_deliveryResultIfNotHasAdequateFreeSpace;	// IMP=0x001000000006a20f
- (id)deliverSynchronously:(id)arg1;	// IMP=0x001000000006a138
- (id)append:(id)arg1;	// IMP=0x001000000006a049
- (unsigned long long)numberOfPendingMessages;	// IMP=0x001000000006a03f
- (void)_freeSpaceStatusDidChange:(id)arg1;	// IMP=0x0010000000069f1f
- (void)resume;	// IMP=0x0010000000069e44
- (void)suspend;	// IMP=0x0010000000069c8d
- (void)processQueueAndPlaySoundOnSuccess:(_Bool)arg1 forceAll:(_Bool)arg2 isUserRequested:(_Bool)arg3;	// IMP=0x0010000000069a0b
- (void)processQueueAndPlaySoundOnSuccess:(_Bool)arg1 forceAll:(_Bool)arg2;	// IMP=0x00100000000699f6
- (void)processQueue;	// IMP=0x00100000000699e0
- (_Bool)isBusy;	// IMP=0x00100000000699b4
- (MISSING_TYPE *)isSuspended;	// IMP=0x00100000000699a7
- (_Bool)isProcessing;	// IMP=0x001000000006999a
- (_Bool)isReady;	// IMP=0x001000000006998d
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence;
- (id)freeSpaceMonitor;	// IMP=0x00100000000698ce
- (void)dealloc;	// IMP=0x0010000000069799
- (id)init;	// IMP=0x0010000000068f85
- (unsigned long long)signpostID;	// IMP=0x0010000000068f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

