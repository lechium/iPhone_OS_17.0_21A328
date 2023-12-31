//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState
{
    unsigned long long _scheduleState;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long scheduleState; // @synthesize scheduleState=_scheduleState;
- (void)wakeUpConfirmed;	// IMP=0x0000000000080324
- (void)wakeTimeReached;	// IMP=0x000000000008031e
- (void)bedtimeReached;	// IMP=0x0000000000080318
- (void)windDownReached;	// IMP=0x0000000000080312
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;	// IMP=0x0000000000080300
- (void)scheduleModelChanged:(id)arg1;	// IMP=0x0000000000080070
- (void)timeZoneChange;	// IMP=0x000000000007ffa0
- (void)significantTimeChange;	// IMP=0x000000000007feaf
- (id)_determineNextStateFromTimeline;	// IMP=0x000000000007fbec
- (id)_timelineForDate:(id)arg1;	// IMP=0x000000000007fae4
- (_Bool)isAlarmEnabled;	// IMP=0x000000000007fa33
- (_Bool)isSleepScheduleDisabled;	// IMP=0x000000000007f7d0
- (void)stateDidExpire;	// IMP=0x000000000007f7b9
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)arg1;	// IMP=0x000000000007f6e1
- (void)updateStateForcibly:(_Bool)arg1;	// IMP=0x000000000007f574
- (void)updateState;	// IMP=0x000000000007f560
- (void)didEnter;	// IMP=0x000000000007f3e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

