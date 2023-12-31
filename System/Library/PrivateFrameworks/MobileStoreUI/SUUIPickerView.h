//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIPickerView, _UIBackdropView;
@protocol SUUIPickerViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIPickerView : UIView
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    id <SUUIPickerViewDelegate> _delegate;	// 16 = 0x10
    UIPickerView *_pickerView;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    NSArray *_titles;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007cf49
@property(nonatomic) __weak id <SUUIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000007cefc
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000007ce6c
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000007ce4f
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000007ce44
- (void)layoutSubviews;	// IMP=0x000000000007cd1a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007ccfd
@property(nonatomic) long long selectedItemIndex;
- (void)dealloc;	// IMP=0x000000000007cc55
- (id)initWithTitles:(id)arg1;	// IMP=0x000000000007ca1a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007c9cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007c9b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

