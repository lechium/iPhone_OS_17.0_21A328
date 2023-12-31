//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateComponents, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface HMDTimerTrigger
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDate *currentFireDate;	// 16 = 0x10
    NSDate *_currentFireDate;	// 24 = 0x18
    NSDate *_fireDate;	// 32 = 0x20
    NSTimeZone *_fireDateTimeZone;	// 40 = 0x28
    NSString *_significantEvent;	// 48 = 0x30
    NSDateComponents *_significantEventOffset;	// 56 = 0x38
    NSDateComponents *_fireRepeatInterval;	// 64 = 0x40
    NSArray *_recurrences;	// 72 = 0x48
    NSString *_timerID;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002e89f9
+ (id)getCalendar:(id)arg1;	// IMP=0x00600000002e8975
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;	// IMP=0x00600000002e8844
+ (id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3;	// IMP=0x00600000002e7d35
+ (id)validateRecurrences:(id)arg1;	// IMP=0x00600000002e775f
+ (id)validateSignificantOffset:(id)arg1;	// IMP=0x00600000002e7757
+ (id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3;	// IMP=0x00600000002e75b8
+ (id)logCategory;	// IMP=0x00600000002e7588
- (void).cxx_destruct;	// IMP=0x00000000002e687b
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000002e65e5
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000002e65df
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000002e64a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e62be
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e5fcc
- (id)getFireInterval;	// IMP=0x00000000002e5ed9
- (id)getCalendar;	// IMP=0x00000000002e5e76
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;	// IMP=0x00000000002e5345
- (void)_reactiveTriggerAfterDelay;	// IMP=0x00000000002e525f
- (void)_timerTriggered;	// IMP=0x00000000002e50b2
- (_Bool)_shouldExecuteActionSet;	// IMP=0x00000000002e4c77
- (id)_nextSignificantEventFireDate;	// IMP=0x00000000002e4b78
- (id)_nextFireDate;	// IMP=0x00000000002e49cd
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e48b4
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x00000000002e483f
- (void)_disableTimerOffReactivationFailure;	// IMP=0x00000000002e480d
- (_Bool)_reactivateSignificantEventTrigger;	// IMP=0x00000000002e464b
- (_Bool)_reactivateFireDateTrigger;	// IMP=0x00000000002e452a
- (_Bool)_reactivateTrigger;	// IMP=0x00000000002e44ce
- (id)_serializeForAdd;	// IMP=0x00000000002e40bb
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000002e402d
- (id)emptyModelObject;	// IMP=0x00000000002e3f75
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000002e3c90
- (void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x00000000002e3c10
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000002e37c3
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;	// IMP=0x00000000002e35e6
- (void)_registerForMessages;	// IMP=0x00000000002e3463
- (void)_stopTimer;	// IMP=0x00000000002e33d2
- (void)_startTimer:(id)arg1;	// IMP=0x00000000002e2f9b
- (void)_startTimerWithSignificantEventDate:(id)arg1;	// IMP=0x00000000002e2f89
- (void)_startTimerWithFireDate:(id)arg1;	// IMP=0x00000000002e2d0a
- (void)invalidate;	// IMP=0x00000000002e2bc3
- (void)timerTriggered;	// IMP=0x00000000002e2a5f
- (void)dealloc;	// IMP=0x00000000002e2999
- (void)completeConfiguration;	// IMP=0x00000000002e2928
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x00000000002e2604
- (void)setCurrentFireDate:(id)arg1;	// IMP=0x00000000002e25b0
@property(readonly) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
- (unsigned long long)triggerType;	// IMP=0x00000000002e255f
- (id)dumpState;	// IMP=0x00000000002e2294
- (id)description;	// IMP=0x00000000002e209f
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000002e1ebb
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000002e1de9

@end

