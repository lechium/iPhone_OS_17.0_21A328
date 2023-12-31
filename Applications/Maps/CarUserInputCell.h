//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class CarDictationButton, CarFocusableButton, NSArray, NSString;
@protocol CarUserInputCellDelegate;

@interface CarUserInputCell : UITableViewCell
{
    CarDictationButton *_dictationButton;	// 8 = 0x8
    CarFocusableButton *_keyboardButton;	// 16 = 0x10
    NSArray *_keyboardDisabledConstraints;	// 24 = 0x18
    NSArray *_keyboardEnabledConstraints;	// 32 = 0x20
    NSArray *_currentKeyboardConstraints;	// 40 = 0x28
    _Bool _keyboardDisabled;	// 48 = 0x30
    id <CarUserInputCellDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001b6c05
@property(nonatomic, getter=isKeyboardDisabled) _Bool keyboardDisabled; // @synthesize keyboardDisabled=_keyboardDisabled;
@property(nonatomic) __weak id <CarUserInputCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)canBecomeFocused;	// IMP=0x00100000001b6aa9
- (void)_handleKeyboardTouchGesture:(id)arg1;	// IMP=0x00100000001b6a52
- (void)_handleKeyboardSelectPressGesture:(id)arg1;	// IMP=0x00100000001b69fb
- (void)_handleDictationTouchGesture:(id)arg1;	// IMP=0x00100000001b69a7
- (void)_handleDictationSelectPressGesture:(id)arg1;	// IMP=0x00100000001b6953
- (void)_updateConstraintsAnimated:(_Bool)arg1 alongWithAnimation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b6551
- (void)setKeyboardDisabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001b64c1
- (void)_externalDeviceChanged:(id)arg1;	// IMP=0x00100000001b6448
- (void)_installGestureRecognizers;	// IMP=0x00100000001b6295
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001b6254
- (void)didMoveToWindow;	// IMP=0x00100000001b6213
- (_Bool)_siriButtonShouldBeExpanded;	// IMP=0x00100000001b6203
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001b5616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

