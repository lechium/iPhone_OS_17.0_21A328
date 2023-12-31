//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000ba154
- (_Bool)_checkFirstUnlocked;	// IMP=0x00200000000ba10c
- (_Bool)isFirstUnlocked;	// IMP=0x00100000000ba0fc
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x00100000000ba092
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x00100000000ba040
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x00100000000b9fee
- (void)_stopMonitoring;	// IMP=0x00100000000b9f4b
- (void)_firstUnlockNotified;	// IMP=0x00100000000b9f10
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000b9ee9
- (id)init;	// IMP=0x00100000000b9e9c

@end

