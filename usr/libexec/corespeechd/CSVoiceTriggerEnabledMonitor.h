//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isVoiceTriggerEnabled;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000dc19a
- (_Bool)_checkVoiceTriggerEnabled;	// IMP=0x00200000000dbf4a
- (_Bool)isEnabled;	// IMP=0x00100000000dbf3a
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00100000000dbed0
- (void)_didReceiveVoiceTriggerSettingChanged:(_Bool)arg1;	// IMP=0x00100000000dbe7e
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000dbe2c
- (void)_stopMonitoring;	// IMP=0x00100000000dbd79
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000dbc2e
- (id)init;	// IMP=0x00100000000dbbe1

@end

