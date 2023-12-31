//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepWidgetStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState
{
}

- (void)significantTimeChangeOccurred;	// IMP=0x000000000001f3e8
- (void)sleepScheduleModelDidChange:(id)arg1;	// IMP=0x000000000001f2de
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;	// IMP=0x000000000001f0f4
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(_Bool)arg2;	// IMP=0x000000000001efc6
- (_Bool)shouldGoIntoUpcomingState;	// IMP=0x000000000001edb8
- (void)updateState;	// IMP=0x000000000001e305
- (void)didEnter;	// IMP=0x000000000001e20e
@property(readonly, nonatomic) _Bool widgetStateHasTimeComponent;
@property(readonly, nonatomic) _Bool reloadsWidgetOnTimeChange;
@property(readonly, nonatomic) _Bool reloadsWidgetOnModelChange;
@property(readonly, nonatomic) long long widgetState;
- (id)stateName;	// IMP=0x000000000001e1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepWidgetStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

