//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell
{
    CNPostalAddressEditorView *_addressEditor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000025c507
@property(retain, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
- (void)layoutMarginsDidChange;	// IMP=0x000000000025c47e
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000025c3ee
@property(copy, nonatomic) UIColor *editorSeparatorColor;
- (void)layoutChanged:(id)arg1;	// IMP=0x000000000025c285
- (void)valueChanged:(id)arg1;	// IMP=0x000000000025c173
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x000000000025bfee
- (void)setPresentingDelegate:(id)arg1;	// IMP=0x000000000025bf5a
- (id)valueView;	// IMP=0x000000000025bd7e
- (id)firstResponderItem;	// IMP=0x000000000025bd6c
- (double)leftValueMargin;	// IMP=0x000000000025bd63
- (id)variableConstraints;	// IMP=0x000000000025bad5

@end
