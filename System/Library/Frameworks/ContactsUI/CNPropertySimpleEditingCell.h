//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell
{
    UITextField *_textField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000263437
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)textFieldChanged:(id)arg1;	// IMP=0x0000000000263324
- (id)firstResponderItem;	// IMP=0x000000000026330f
- (void)prepareForReuse;	// IMP=0x00000000002632a4
- (void)updateValueWithPropertyItem:(id)arg1;	// IMP=0x0000000000263097
- (id)variableConstraints;	// IMP=0x0000000000262d80
- (id)constantConstraints;	// IMP=0x0000000000262c2f
- (id)valueView;	// IMP=0x0000000000262ac0
- (void)dealloc;	// IMP=0x0000000000262a4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

