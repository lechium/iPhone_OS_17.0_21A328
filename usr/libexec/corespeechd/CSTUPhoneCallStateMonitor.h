//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSTUPhoneCallStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x0040000000044580
- (unsigned long long)phoneCallState;	// IMP=0x0040000000044578
- (_Bool)firstPartyCall;	// IMP=0x0010000000044570
- (void)_stopMonitoring;	// IMP=0x001000000004456a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000044564
- (id)init;	// IMP=0x00100000000444f7

@end

