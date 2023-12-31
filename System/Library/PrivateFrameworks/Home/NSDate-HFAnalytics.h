//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSNumber, NSString;

@interface NSDate (HFAnalytics)
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;	// IMP=0x0010000000243234
+ (long long)hf_daysBetweenDates:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000243124
+ (long long)hf_minutesBetweenDates:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000243014
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000242608
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000242587
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000242506
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000242485
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;	// IMP=0x001000000024240d
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000242395
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;	// IMP=0x001000000024231c
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000002422a3
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;	// IMP=0x0010000000242053
+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;	// IMP=0x0010000000241f6f
+ (id)hf_sharedTimeZone;	// IMP=0x0010000000241f0a
+ (id)hf_sharedCalendar;	// IMP=0x0010000000241ea5
@property(readonly, nonatomic) NSNumber *hf_analyticsTimestamp;
- (_Bool)_uses24HourTimeForLocale;	// IMP=0x0010000000243397
- (_Bool)hf_isBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000242f3f
- (_Bool)hf_isSingularHour;	// IMP=0x0010000000242e7f
- (_Bool)hf_isMidnight;	// IMP=0x0010000000242dcb
- (_Bool)hf_isFirstHourOfDay;	// IMP=0x0010000000242d46
- (_Bool)hf_isWithinOneSecondOfDate:(id)arg1;	// IMP=0x0010000000242d2c
- (_Bool)hf_isWithinOneMinuteOfDate:(id)arg1;	// IMP=0x0010000000242d12
- (_Bool)hf_isWithinOneHourOfDate:(id)arg1;	// IMP=0x0010000000242cf8
- (_Bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;	// IMP=0x0010000000242cc4
- (id)hf_endOfWeek;	// IMP=0x0010000000242bf3
- (id)hf_startOfWeek;	// IMP=0x0010000000242b12
- (id)hf_startOfSecond;	// IMP=0x0010000000242a24
- (id)hf_startOfMinute;	// IMP=0x0010000000242927
- (id)hf_startOfHour;	// IMP=0x001000000024281b
- (id)hf_startOfNextDay;	// IMP=0x00100000002427a4
- (id)hf_startOfDay;	// IMP=0x0010000000242689

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

