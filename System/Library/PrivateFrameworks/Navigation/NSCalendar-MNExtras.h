//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MNExtras)
- (id)_navigation_transitRelativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3 outUsedFormat:(out unsigned long long *)arg4;	// IMP=0x00700000000b08a1
- (id)_navigation_relativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3;	// IMP=0x00700000000b06a3
- (id)_navigation_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(_Bool)arg3 inTimeZone:(id)arg4;	// IMP=0x00700000000b050d
- (_Bool)_navigation_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x00700000000b04bc
- (_Bool)_navigation_isDateInToday:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x00700000000b046b
- (id)_navigation_offsetDate:(id)arg1 toTimeZone:(id)arg2;	// IMP=0x00700000000b0394
@end

