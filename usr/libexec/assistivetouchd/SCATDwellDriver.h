//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCATDwellDriver
{
    _Bool _isReadyForSelect;	// 8 = 0x8
}

@property(nonatomic) _Bool isReadyForSelect; // @synthesize isReadyForSelect=_isReadyForSelect;
- (void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2;	// IMP=0x001000000008667b
- (double)dwellDelay;	// IMP=0x00100000000865a9
- (void)_cancelDwellRelatedTimers;	// IMP=0x001000000008650f
- (void)_scanAbortTimerFired;	// IMP=0x00100000000864b6
- (void)_dwellTimerFired;	// IMP=0x001000000008646a
- (void)_startScanAbortTimer;	// IMP=0x00100000000863a4
- (void)_startDwellTimer;	// IMP=0x0010000000086354
- (void)_resetDwellTimer;	// IMP=0x0010000000086304
- (void)_didTransitionToPhase:(int)arg1;	// IMP=0x00100000000862c3
- (void)_idleTimerDidFire;	// IMP=0x0010000000086278
- (_Bool)_shouldUseScanAbortTimer;	// IMP=0x0010000000086105
- (_Bool)_shouldUseDwellSelection;	// IMP=0x00100000000860c1
- (_Bool)_handleStepPreviousAction;	// IMP=0x0010000000086076
- (_Bool)_handleStepNextAction;	// IMP=0x001000000008602e
- (_Bool)_handleStepAction:(long long)arg1;	// IMP=0x0010000000085fe4
- (_Bool)_handleSelectAction;	// IMP=0x0010000000085fd2
- (_Bool)_actuallyHandleSelectAction;	// IMP=0x0010000000085fa3
- (_Bool)handleInputAction:(long long)arg1;	// IMP=0x0010000000085f58
- (int)driverType;	// IMP=0x0010000000085f4d

@end
