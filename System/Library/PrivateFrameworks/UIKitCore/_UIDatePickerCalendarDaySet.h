//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDaySet : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSMutableDictionary *_loadedDays;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000016b0e67
- (id)loadedDays;	// IMP=0x00000000016b0e49
- (void)cleanupDaysKeepingDaysForMonths:(id)arg1;	// IMP=0x00000000016b0c53
- (id)daysForMonth:(id)arg1 includingOverlapDays:(_Bool)arg2;	// IMP=0x00000000016b02ba
- (id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(_Bool)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000016b0090
- (id)_createDaysForMonth:(id)arg1;	// IMP=0x00000000016afd24
- (id)initWithCalendar:(id)arg1;	// IMP=0x00000000016afc9f

@end

