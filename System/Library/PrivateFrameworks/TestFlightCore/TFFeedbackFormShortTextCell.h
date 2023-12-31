//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFFeedbackEntryShortText, UITextField;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormShortTextCell
{
    UITextField *_textField;	// 8 = 0x8
    TFFeedbackEntryShortText *_shortTextEntry;	// 16 = 0x10
}

+ (id)_createTextFieldFontWithTraitCollection:(id)arg1;	// IMP=0x00100000000038df
+ (struct UIEdgeInsets)_textFieldInsetsInTraitEnvironment:(id)arg1;	// IMP=0x0010000000003868
+ (struct CGSize)_sizeToFitText:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;	// IMP=0x0010000000003680
+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;	// IMP=0x0010000000003247
- (void).cxx_destruct;	// IMP=0x000000000000393b
@property(retain, nonatomic) TFFeedbackEntryShortText *shortTextEntry; // @synthesize shortTextEntry=_shortTextEntry;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;	// IMP=0x0000000000003609
- (void)_configureTextFieldForContentType:(unsigned long long)arg1;	// IMP=0x00000000000034d8
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000033f2
- (void)setDisplayedDataString:(id)arg1;	// IMP=0x0000000000003389
- (unsigned long long)displayableDataType;	// IMP=0x0000000000003381
- (void)applyContentsOfEntry:(id)arg1;	// IMP=0x000000000000312c
- (void)prepareForReuse;	// IMP=0x0000000000002fd6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000002f58
- (void)layoutSubviews;	// IMP=0x0000000000002e0a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000002ce9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

