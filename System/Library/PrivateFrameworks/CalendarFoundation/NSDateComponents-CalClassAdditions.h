//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (CalClassAdditions)
+ (id)CalComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;	// IMP=0x008000000003eaf8
+ (id)CalComponentForYears:(long long)arg1;	// IMP=0x008000000003eac0
+ (id)CalComponentForMonths:(long long)arg1;	// IMP=0x008000000003ea88
+ (id)CalComponentForWeeks:(long long)arg1;	// IMP=0x008000000003ea50
+ (id)CalComponentForDays:(long long)arg1;	// IMP=0x008000000003ea18
+ (id)CalComponentForHours:(long long)arg1;	// IMP=0x008000000003e9e0
+ (id)CalComponentForMinutes:(long long)arg1;	// IMP=0x008000000003e9a8
- (void)CalClearTimeComponents;	// IMP=0x001000000003f186
- (_Bool)CalHasTimeComponents;	// IMP=0x001000000003f12c
- (CDStruct_79f9e052)CalGregorianDate;	// IMP=0x001000000003f012
- (id)CalDateComponentsForEndOfDay;	// IMP=0x001000000003efb5
- (id)CalDateComponentsForDateOnly;	// IMP=0x001000000003ef0c
- (id)CalDateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;	// IMP=0x001000000003ee79
- (id)CalDateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;	// IMP=0x001000000003ed33
- (_Bool)CalIsSameYearAsComponents:(id)arg1;	// IMP=0x001000000003ecab
- (_Bool)CalIsSameMonthAsComponents:(id)arg1;	// IMP=0x001000000003ec30
- (_Bool)CalIsSameDayAsComponents:(id)arg1;	// IMP=0x001000000003ebb5
- (id)CalRepresentedDate;	// IMP=0x001000000003e92f
@end

