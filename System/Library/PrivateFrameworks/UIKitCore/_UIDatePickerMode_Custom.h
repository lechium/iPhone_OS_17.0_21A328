//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom
{
    NSString *_originalFormat;	// 240 = 0xf0
    NSArray *_components;	// 248 = 0xf8
    NSArray *_sortedComponents;	// 256 = 0x100
    long long _displayedUnits;	// 264 = 0x108
    long long _desiredUnits;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000f8ab23
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000f8ab13
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000f8ab03
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;	// IMP=0x0000000000f8aa81
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;	// IMP=0x0000000000f8a9e2
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000f8a465
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f8a45a
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f8a40a
- (long long)numberOfRowsInComponent:(long long)arg1;	// IMP=0x0000000000f8a384
- (unsigned long long)numberOfComponents;	// IMP=0x0000000000f8a340
- (long long)displayedCalendarUnits;	// IMP=0x0000000000f8a1fd
- (unsigned long long)extractableCalendarUnits;	// IMP=0x0000000000f8a0b1
- (id)_componentForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f89f3c
- (long long)componentForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000f89e76
- (unsigned long long)calendarUnitForComponent:(long long)arg1;	// IMP=0x0000000000f89e02
- (id)components;	// IMP=0x0000000000f89987
- (void)resetComponentWidths;	// IMP=0x0000000000f89855
- (void)noteCalendarChanged;	// IMP=0x0000000000f8980b
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;	// IMP=0x0000000000f89791

@end

