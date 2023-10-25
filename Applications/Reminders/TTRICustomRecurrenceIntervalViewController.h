//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UIPickerView;

@interface TTRICustomRecurrenceIntervalViewController : UIViewController
{
    UIPickerView *_pickerView;	// 8 = 0x8
    _Bool _maximumInterval;	// 16 = 0x10
    long long _frequency;	// 24 = 0x18
    long long _interval;	// 32 = 0x20
    CDUnknownBlockType _changeBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000009551
@property(copy) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property(nonatomic) _Bool maximumInterval; // @synthesize maximumInterval=_maximumInterval;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
- (id)_pickerViewFrequencyTitleForUnit:(long long)arg1;	// IMP=0x0010000000009358
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;	// IMP=0x001000000000921b
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x001000000000916c
- (id);	// IMP=0x00100000000090dc
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0010000000009099
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x001000000000908e
- (id)pickerView;	// IMP=0x0010000000008f1a
- (void)viewDidLoad;	// IMP=0x0010000000008eae
- (void)loadView;	// IMP=0x0010000000008e62
- (id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008dc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
