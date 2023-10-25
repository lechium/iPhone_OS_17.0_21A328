//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000014c754
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;	// IMP=0x002000000014c640
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;	// IMP=0x001000000014c5ee
- (void)_availabilityChanged;	// IMP=0x001000000014c550
- (void)_stopMonitoring;	// IMP=0x001000000014c49d
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000014c343
- (_Bool)isAvailable;	// IMP=0x001000000014c339
- (id)init;	// IMP=0x001000000014c2f7

@end
