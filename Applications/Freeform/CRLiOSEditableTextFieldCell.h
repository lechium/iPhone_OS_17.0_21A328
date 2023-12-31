//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UITextField;

@interface CRLiOSEditableTextFieldCell
{
    UITextField *mTextField;	// 8 = 0x8
    _Bool _useNaturalAlignment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001b3509
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=mTextField;
@property(nonatomic) _Bool useNaturalAlignment; // @synthesize useNaturalAlignment=_useNaturalAlignment;
- (_Bool)accessibilityActivate;	// IMP=0x00100000001b34af
- (unsigned long long)accessibilityTraits;	// IMP=0x00100000001b349f
- (id)accessibilityValue;	// IMP=0x00100000001b3482
- (MISSING_TYPE *)isAccessibilityElement;	// IMP=0x00100000001b346d
- (void)textFieldTextDidBeginEditing:(id)arg1;	// IMP=0x00100000001b336e
- (void)endEditing;	// IMP=0x00100000001b3351
- (void)beginEditing;	// IMP=0x00100000001b3334
@property(readonly, nonatomic, getter=isTextFieldEditing) _Bool textFieldEditing;
- (void)updateConstraints;	// IMP=0x00100000001b3038
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001b2eeb

@end

