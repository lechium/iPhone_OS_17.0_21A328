//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@class NSDate, NSString;

@interface NSDateInterval (HealthKit)
+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x001000000002f05a
+ (id)hk_dateIntervalWithAnchor:(id)arg1 startOffset:(double)arg2 endOffset:(double)arg3;	// IMP=0x001000000002ef91
+ (id)hk_instantaneousDateIntervalWithDate:(id)arg1;	// IMP=0x001000000002ef41
+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;	// IMP=0x001000000002ee94
+ (id)hk_allTime;	// IMP=0x001000000002ee02
+ (id)hk_sleepWeekIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000256619
+ (id)hk_sleepDayIntervalForMorningIndexRange:(CDStruct_912cb5d2)arg1 calendar:(id)arg2;	// IMP=0x0010000000256546
+ (id)hk_sleepDayIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000256485
- (id)hk_prettyString;	// IMP=0x001000000002f28e
- (_Bool)hk_containsTime:(double)arg1;	// IMP=0x001000000002f1e7
- (_Bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000002f152
- (id)_hk_dateForYearMonthDayComponents:(id)arg1 hourMinuteSecondComponents:(id)arg2 calendar:(id)arg3;	// IMP=0x00100000002569f9
- (id)hk_dateIntervalByMappingToSleepDayWithMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x00100000002566db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@end

