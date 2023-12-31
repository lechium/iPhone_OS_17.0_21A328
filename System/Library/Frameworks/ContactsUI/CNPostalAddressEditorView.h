//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class CNMutablePostalAddress, CNPostalAddress, CNPostalAddressEditorTableView, CNPostalAddressFormattingSpecification, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorView : UIControl
{
    CNMutablePostalAddress *_address;	// 8 = 0x8
    NSDictionary *_valueTextAttributes;	// 16 = 0x10
    id <CNPresenterDelegate> _delegate;	// 24 = 0x18
    CNPostalAddressEditorTableView *_tableView;	// 32 = 0x20
    NSArray *_cellsLayout;	// 40 = 0x28
    CNPostalAddressFormattingSpecification *_formatSpecification;	// 48 = 0x30
    NSMutableDictionary *_textFields;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001d5d72
@property(readonly, nonatomic) NSMutableDictionary *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) CNPostalAddressFormattingSpecification *formatSpecification; // @synthesize formatSpecification=_formatSpecification;
@property(copy, nonatomic) NSArray *cellsLayout; // @synthesize cellsLayout=_cellsLayout;
@property(retain, nonatomic) CNPostalAddressEditorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)keyboardSettingsForAddress:(id)arg1 component:(id)arg2;	// IMP=0x00000000001d5a9b
- (id)_cellsLayoutForCountryCode:(id)arg1;	// IMP=0x00000000001d5730
- (id)_normalizeCountryCodeToISO:(id)arg1;	// IMP=0x00000000001d5666
- (id)_countryCode;	// IMP=0x00000000001d55e6
- (id)_addressValueForKey:(id)arg1;	// IMP=0x00000000001d547b
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001d5286
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001d51f6
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000001d508b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001d4f53
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001d486c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001d485a
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;	// IMP=0x00000000001d4744
- (void)countryPickerDidCancel:(id)arg1;	// IMP=0x00000000001d46d9
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000001d4654
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000001d45b1
- (void)textFieldChanged:(id)arg1;	// IMP=0x00000000001d434c
- (void)_invalidateCellsLayout;	// IMP=0x00000000001d421f
@property(copy, nonatomic) CNPostalAddress *address;
@property(copy, nonatomic) UIColor *separatorColor;
@property(copy, nonatomic) NSDictionary *ab_textAttributes;
@property(copy, nonatomic) NSString *ab_text;
@property(readonly, nonatomic) long long lineCount;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001d3d1f
- (_Bool)becomeFirstResponder;	// IMP=0x00000000001d3c51
- (_Bool)isFirstResponder;	// IMP=0x00000000001d3aeb
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000001d3a66
- (void)dealloc;	// IMP=0x00000000001d39f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d34e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

