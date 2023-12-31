//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000012face
- (void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2;	// IMP=0x002000000012fa2a
- (void)_didReceiveDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x001000000012f94d
- (void)_stopMonitoring;	// IMP=0x001000000012f8aa
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000012f77c
- (void)notifyDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x001000000012f6eb
- (id)init;	// IMP=0x001000000012f6a9

@end

