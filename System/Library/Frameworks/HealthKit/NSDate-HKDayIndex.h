//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKDayIndex)
+ (id)hk_latestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x0080000000030802
+ (id)hk_earliestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x0080000000030771
+ (id)hk_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030757
+ (id)hk_dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;	// IMP=0x00800000000306b7
+ (id)hk_sleepMonthStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030de7
+ (id)hk_sleepWeekStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030d27
+ (id)hk_sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030a9e
+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;	// IMP=0x00800000000e7a73
+ (id)hk_mostRecentDate:(id)arg1;	// IMP=0x00800000000e79e7
- (long long)hk_latestPossibleDayIndex;	// IMP=0x0010000000030a44
- (long long)hk_earliestPossibleDayIndex;	// IMP=0x00100000000309ea
- (long long)hk_dayIndexWithCalendar:(id)arg1;	// IMP=0x00100000000308ca
- (id)hk_sleepDayStartWithCalendar:(id)arg1;	// IMP=0x0010000000030c08
- (long long)hk_morningIndexWithCalendar:(id)arg1;	// IMP=0x0010000000030ac7
- (id)hk_utcDateAdjustedToCalendar:(id)arg1;	// IMP=0x00100000000e7ac1
- (long long)hk_nanosecondsSince1970;	// IMP=0x00100000000e7aa2
- (id)hk_truncateToDay;	// IMP=0x00100000000e7a18
- (id)hk_nearestDate:(id)arg1;	// IMP=0x00100000000e7962
- (id)hk_rfc3339String;	// IMP=0x00100000000e788c
- (_Bool)hk_isAfterOrEqualToDate:(id)arg1;	// IMP=0x00100000000e7877
- (_Bool)hk_isBeforeOrEqualToDate:(id)arg1;	// IMP=0x001000000000e683
- (_Bool)hk_isAfterDate:(id)arg1;	// IMP=0x001000000000e698
- (_Bool)hk_isBeforeDate:(id)arg1;	// IMP=0x0010000000011207
@end

