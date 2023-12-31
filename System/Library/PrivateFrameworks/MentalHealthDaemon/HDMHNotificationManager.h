//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDPrimaryProfile, HDRestorableAlarm, HKMHSettingsManager, NSDate, NSString;
@protocol HDMHTypicalDayProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMHNotificationManager : NSObject
{
    HDPrimaryProfile *_profile;	// 8 = 0x8
    HKMHSettingsManager *_settingsManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    int _significantTimeChangeToken;	// 32 = 0x20
    NSDate *_currentDateOverride;	// 40 = 0x28
    HDRestorableAlarm *_scheduler;	// 48 = 0x30
    id <HDMHTypicalDayProviding> _typicalDayProvider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000a4d4
@property(retain, nonatomic) id <HDMHTypicalDayProviding> typicalDayProvider; // @synthesize typicalDayProvider=_typicalDayProvider;
@property(readonly, nonatomic) HDRestorableAlarm *scheduler; // @synthesize scheduler=_scheduler;
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x000000000000a49d
- (void)typicalDayDidUpdate:(id)arg1;	// IMP=0x000000000000a475
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;	// IMP=0x000000000000a1eb
- (id)_endOfCalendarDayForDate:(id)arg1;	// IMP=0x000000000000a136
- (_Bool)_shouldEndOfDayBeShiftedToMidnightForDate:(id)arg1;	// IMP=0x000000000000a076
- (id)_timeOfDayBasedNotifications;	// IMP=0x0000000000009cd2
- (id)_notificationDateComponentsByCategory;	// IMP=0x00000000000097e2
- (void)_rescheduleNotifications;	// IMP=0x00000000000091e3
- (void)_queue_rescheduleNotifications;	// IMP=0x000000000000911a
- (void)_removeAllDeliveredHDMHNotifications;	// IMP=0x000000000000908f
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;	// IMP=0x0000000000008b11
- (id)_requestFromAlarmEvent:(id)arg1;	// IMP=0x00000000000088f3
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;	// IMP=0x00000000000087a7
- (id)_currentDate;	// IMP=0x000000000000876d
- (void)_setCurrentDate:(id)arg1;	// IMP=0x000000000000875c
- (id)scheduledNotificationsWithError:(id *)arg1;	// IMP=0x000000000000867a
- (void)invalidate;	// IMP=0x0000000000008524
- (void)_significantTimeChangeOccurred;	// IMP=0x000000000000841d
- (void)didReceiveDayChangeNotification:(id)arg1;	// IMP=0x00000000000083bc
- (void)_queue_registerForSignificantTimeChanges;	// IMP=0x000000000000826e
- (void)_queue_start;	// IMP=0x0000000000007e4e
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 typicalDayProvider:(id)arg3;	// IMP=0x0000000000007cf4
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2;	// IMP=0x0000000000007cdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

