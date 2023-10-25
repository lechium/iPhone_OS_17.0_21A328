//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TTRIRecurrenceMonthDayChooserController, TTRIRecurrenceOrdinalChooserController, UITableViewCell;
@protocol TTRIRecurrenceChooserControllerDelegate;

@interface TTRIRecurrenceMonthlyChooserController
{
    TTRIRecurrenceMonthDayChooserController *_monthDayChooser;	// 8 = 0x8
    TTRIRecurrenceOrdinalChooserController *_ordinalChooser;	// 16 = 0x10
    id <TTRIRecurrenceChooserControllerDelegate> _delegate;	// 24 = 0x18
    long long _selectedRow;	// 32 = 0x20
    UITableViewCell *_onEachCell;	// 40 = 0x28
    UITableViewCell *_onTheCell;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000167e5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0010000000016778
- (id)backgroundColor;	// IMP=0x0010000000016728
@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;
- (void)_selectRow:(long long)arg1;	// IMP=0x0010000000016663
- (_Bool)drawBackgroundForRow:(long long)arg1;	// IMP=0x0010000000016611
- (void)rowTapped:(long long)arg1;	// IMP=0x0010000000016569
- (double)heightForRow:(long long)arg1;	// IMP=0x0010000000016504
- (id)cellForRow:(long long)arg1;	// IMP=0x0010000000016489
- (long long)numberOfRows;	// IMP=0x001000000001647e
- (id)_currentChooser;	// IMP=0x001000000001644f
- (long long)frequency;	// IMP=0x0010000000016444
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x00100000000163ad
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x0010000000016344
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000162ce
- (id)initWithDate:(id)arg1;	// IMP=0x00100000000160af

@end
