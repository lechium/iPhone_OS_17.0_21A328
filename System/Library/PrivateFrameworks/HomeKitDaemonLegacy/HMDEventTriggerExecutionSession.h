//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, HMDTriggerConfirmationTimer, HMFTimer, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface HMDEventTriggerExecutionSession
{
    _Bool _actionSetExecutionInProgress;	// 8 = 0x8
    _Bool _restoreInProgress;	// 9 = 0x9
    _Bool _executionCompleteCalled;	// 10 = 0xa
    NSMutableArray *_triggerEvents;	// 16 = 0x10
    NSMutableArray *_causingDevices;	// 24 = 0x18
    NSArray *_endEvents;	// 32 = 0x20
    NSArray *_monitorEvents;	// 40 = 0x28
    unsigned long long _executionState;	// 48 = 0x30
    HMDPredicateUtilities *_predicateUtilities;	// 56 = 0x38
    NSArray *_actionSets;	// 64 = 0x40
    NSPredicate *_evaluationCondition;	// 72 = 0x48
    NSArray *_recurrences;	// 80 = 0x50
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;	// 88 = 0x58
    HMDTriggerConfirmationTimer *_secureTriggerConfirmationTimer;	// 96 = 0x60
    HMFTimer *_startCharacteristicsMonitorTimer;	// 104 = 0x68
    NSMapTable *_writeRequests;	// 112 = 0x70
    NSMutableSet *_mediaProfiles;	// 120 = 0x78
    NSDate *_executionStartTime;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x0010000000b27744
- (void).cxx_destruct;	// IMP=0x0000000000b25ebd
@property(readonly, nonatomic) NSDate *executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property(readonly, nonatomic) NSMutableSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property(readonly, nonatomic) NSMapTable *writeRequests; // @synthesize writeRequests=_writeRequests;
@property(nonatomic) _Bool executionCompleteCalled; // @synthesize executionCompleteCalled=_executionCompleteCalled;
@property(nonatomic) _Bool restoreInProgress; // @synthesize restoreInProgress=_restoreInProgress;
@property(nonatomic) _Bool actionSetExecutionInProgress; // @synthesize actionSetExecutionInProgress=_actionSetExecutionInProgress;
@property(retain, nonatomic) HMFTimer *startCharacteristicsMonitorTimer; // @synthesize startCharacteristicsMonitorTimer=_startCharacteristicsMonitorTimer;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer; // @synthesize secureTriggerConfirmationTimer=_secureTriggerConfirmationTimer;
@property(readonly, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(readonly, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(readonly, nonatomic) NSArray *actionSets; // @synthesize actionSets=_actionSets;
@property(readonly, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) unsigned long long executionState; // @synthesize executionState=_executionState;
@property(retain, nonatomic) NSArray *monitorEvents; // @synthesize monitorEvents=_monitorEvents;
@property(readonly, nonatomic) NSArray *endEvents; // @synthesize endEvents=_endEvents;
@property(readonly, nonatomic) NSMutableArray *causingDevices; // @synthesize causingDevices=_causingDevices;
@property(readonly, nonatomic) NSMutableArray *triggerEvents; // @synthesize triggerEvents=_triggerEvents;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b25c6a
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000b25bb0
- (void)_callExecutionCompleteIfNoMoreOutstandingRequests;	// IMP=0x0000000000b2592b
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;	// IMP=0x0000000000b2582b
- (void)_handleMonitoringEvent:(id)arg1;	// IMP=0x0000000000b254c4
- (void)_restoreState;	// IMP=0x0000000000b24f06
- (void)_removeUserDialog;	// IMP=0x0000000000b24e63
- (void)_callExecutionComplete:(id)arg1;	// IMP=0x0000000000b24e4c
- (void)_submitAnalyticsData:(id)arg1;	// IMP=0x0000000000b24878
- (void)_callExecutionComplete:(id)arg1 callDelegate:(_Bool)arg2;	// IMP=0x0000000000b24240
- (id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5;	// IMP=0x0000000000b2411d
- (id)_monitoringEventsFromActionSetResponse:(id)arg1;	// IMP=0x0000000000b22fc4
- (void)_activateEvents:(id)arg1;	// IMP=0x0000000000b22cd3
- (void)_activateMonitoringEvents;	// IMP=0x0000000000b22c87
- (void)_activateDurationEvents;	// IMP=0x0000000000b22c3b
- (void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b22517
- (void)_directlyExecuteActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b223b0
- (void)_addEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000b21f56
- (void)addEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000b21e78
- (void)_userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b2182a
- (void)userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b21740
- (id)durationEndEvents;	// IMP=0x0000000000b21555
- (void)postponeRestoreIfWaitingForEndEvent;	// IMP=0x0000000000b214e4
- (void)cancelSessionIfWaitingForUserResponse;	// IMP=0x0000000000b21473
- (_Bool)containsSecureActionSet;	// IMP=0x0000000000b21335
- (void)_executeTriggerAfterEvaluatingCondition:(id)arg1;	// IMP=0x0000000000b20bf6
- (void)_evaluateFiringTrigger;	// IMP=0x0000000000b2001f
- (void)evaluateFiringTrigger;	// IMP=0x0000000000b1ffae
- (id)dumpState;	// IMP=0x0000000000b1fc08
@property(readonly, nonatomic) _Bool needsUserConfirmation;
- (id)logIdentifier;	// IMP=0x0000000000b1fbae
@property(readonly, copy) NSString *description;
- (id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10;	// IMP=0x0000000000b1f6f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

