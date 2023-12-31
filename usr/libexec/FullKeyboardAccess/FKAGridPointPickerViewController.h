//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FKAGridPointPickerView, NSArray;

@interface FKAGridPointPickerViewController
{
    NSArray *_cachedKeyCommands;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000066f1
@property(retain, nonatomic) NSArray *cachedKeyCommands; // @synthesize cachedKeyCommands=_cachedKeyCommands;
- (void)_handleEscape:(id)arg1;	// IMP=0x001000000000661f
- (void)_handleDownArrow:(id)arg1;	// IMP=0x001000000000657c
- (void)_handleUpArrow:(id)arg1;	// IMP=0x00100000000064d9
- (void)_handleRightArrow:(id)arg1;	// IMP=0x0010000000006436
- (void)_handleLeftArrow:(id)arg1;	// IMP=0x0010000000006393
- (void)_handleShiftReturn:(id)arg1;	// IMP=0x00100000000062f0
- (void)_handleReturn:(id)arg1;	// IMP=0x001000000000624d
- (void)_handleD:(id)arg1;	// IMP=0x0010000000006130
- (void)_handleSpace:(id)arg1;	// IMP=0x0010000000006013
- (id)keyCommands;	// IMP=0x0010000000005d21
@property(readonly, nonatomic) FKAGridPointPickerView *pointPickerView;
- (void)loadView;	// IMP=0x0010000000005cd6

@end

