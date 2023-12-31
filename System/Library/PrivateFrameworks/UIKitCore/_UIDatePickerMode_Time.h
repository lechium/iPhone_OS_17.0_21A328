//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time
{
    double _timeHourWidth;	// 240 = 0xf0
    double _timeMinuteWidth;	// 248 = 0xf8
    double _timeAMPMWidth;	// 256 = 0x100
    NSString *_hourFormat;	// 264 = 0x108
    NSString *_minuteFormat;	// 272 = 0x110
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0060000000f84d23
+ (long long)datePickerMode;	// IMP=0x0060000000f84d1b
- (void).cxx_destruct;	// IMP=0x0000000000f8581b
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000f857fe
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000f857d4
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000f855f8
- (id)font;	// IMP=0x0000000000f855e6
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000f851fa
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f851df
- (void)noteCalendarChanged;	// IMP=0x0000000000f85178
- (void)resetComponentWidths;	// IMP=0x0000000000f8514f
- (double)rowHeight;	// IMP=0x0000000000f85141
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f84e65
- (id)localizedFormatString;	// IMP=0x0000000000f84dc8
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000f84d61
- (long long)displayedCalendarUnits;	// IMP=0x0000000000f84d2e

@end

