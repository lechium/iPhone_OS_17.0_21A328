//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface RAPTableCheckmarkRadioSection
{
    NSArray *_values;	// 8 = 0x8
    id _owner;	// 16 = 0x10
    CDUnknownBlockType _configure;	// 24 = 0x18
    CDUnknownBlockType _selection;	// 32 = 0x20
    id _selectedValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000cef12e
@property(retain, nonatomic) id selectedValue; // @synthesize selectedValue=_selectedValue;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x0010000000cef03e
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000ceef02
- (long long)rowsCount;	// IMP=0x0010000000ceeee5
- (void)configureCell:(id)arg1 forValue:(id)arg2;	// IMP=0x0010000000cee9aa
- (id)dequeueCellForValue:(id)arg1;	// IMP=0x0010000000cee89d
- (void)registerReuseIdentifiersForCells;	// IMP=0x0010000000cee81a
- (void)selectedValueDidChange;	// IMP=0x0010000000cee7bd
- (Class)defaultCellClass;	// IMP=0x0010000000cee7b5
- (id)initWithOwner:(id)arg1 initialValues:(id)arg2 initialSelectedValue:(id)arg3 configureForValue:(CDUnknownBlockType)arg4 selection:(CDUnknownBlockType)arg5;	// IMP=0x0010000000cee677
- (id)initWithOwner:(id)arg1 configureForValue:(CDUnknownBlockType)arg2 selection:(CDUnknownBlockType)arg3;	// IMP=0x0010000000cee64b

@end

