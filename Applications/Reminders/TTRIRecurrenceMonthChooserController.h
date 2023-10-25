//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

@interface TTRIRecurrenceMonthChooserController
{
    NSMutableSet *_monthsOfTheYearSet;	// 8 = 0x8
    _Bool _prohibitsMultipleMonthsInYearlyRecurrence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001f372
@property(nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence; // @synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;	// IMP=0x001000000001f098
- (void)refreshCells;	// IMP=0x001000000001ee9f
- (void)prepareForDisplay;	// IMP=0x001000000001ed81
- (long long)gridViewType;	// IMP=0x001000000001ed79
- (id)cellAccessibilityLabels;	// IMP=0x001000000001ecb7
- (id)cellLabels;	// IMP=0x001000000001ebf5
- (id)tableViewCell;	// IMP=0x001000000001eb9d
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x001000000001eb05
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x001000000001ea51
- (long long)frequency;	// IMP=0x001000000001ea46
@property(retain, nonatomic) NSArray *monthsOfTheYear;
- (id)initWithDate:(id)arg1;	// IMP=0x001000000001e920

@end
