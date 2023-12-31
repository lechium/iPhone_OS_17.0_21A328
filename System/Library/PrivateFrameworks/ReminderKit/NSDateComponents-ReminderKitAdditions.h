//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (ReminderKitAdditions)
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(_Bool)arg7 timeZone:(id)arg8;	// IMP=0x006000000004431e
+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x006000000004430e
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;	// IMP=0x0060000000044091
+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(_Bool)arg3;	// IMP=0x0060000000043f27
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0060000000043db8
- (id)rem_stringRepresentation;	// IMP=0x0010000000045075
- (long long)rem_compare:(id)arg1;	// IMP=0x0010000000044b22
- (_Bool)rem_isWeekendDateComponents;	// IMP=0x0010000000044963
- (_Bool)rem_isAllDayDateComponents;	// IMP=0x00100000000448f2
- (_Bool)rem_isValidDateComponents;	// IMP=0x001000000004479b
- (id)rem_allDayDateComponents;	// IMP=0x0010000000044721
- (id)rem_strippingTimeZone;	// IMP=0x00100000000446eb
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;	// IMP=0x00100000000445c3
- (id)rem_gregorianEquivalent;	// IMP=0x001000000004442c
@end

