//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPSleepWidgetNotOnboardedState
{
}

- (void)sleepScheduleModelDidChange:(id)arg1;	// IMP=0x0000000000025297
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;	// IMP=0x0000000000025291
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(_Bool)arg2;	// IMP=0x000000000002528b
- (_Bool)widgetStateHasTimeComponent;	// IMP=0x0000000000025283
- (_Bool)reloadsWidgetOnTimeChange;	// IMP=0x000000000002527b
- (_Bool)reloadsWidgetOnModelChange;	// IMP=0x0000000000025273
- (long long)widgetState;	// IMP=0x0000000000025268
- (id)stateName;	// IMP=0x000000000002525b

@end

