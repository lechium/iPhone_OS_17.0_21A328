//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TTRIRecurrenceWeekdayChooserController
{
    NSMutableArray *_selectedRows;	// 8 = 0x8
    NSMutableArray *_cells;	// 16 = 0x10
    NSArray *_daysOfTheWeek;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001da35
@property(retain, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (id)_calStringForDayOfWeek:(int)arg1;	// IMP=0x001000000001d9f3
- (int)_dayMask;	// IMP=0x001000000001d868
- (void)_setCell:(id)arg1 selected:(_Bool)arg2;	// IMP=0x001000000001d84d
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x001000000001d6e7
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x001000000001d696
- (void)rowTapped:(long long)arg1;	// IMP=0x001000000001d367
- (id)cellForRow:(long long)arg1;	// IMP=0x001000000001d2c0
- (double)heightForRow:(long long)arg1;	// IMP=0x001000000001d2af
- (long long)numberOfRows;	// IMP=0x001000000001d2a4
- (long long)frequency;	// IMP=0x001000000001d299
- (id)initWithDate:(id)arg1;	// IMP=0x001000000001cec0

@end
