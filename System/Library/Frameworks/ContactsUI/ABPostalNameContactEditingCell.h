//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ABPostalNameContactEditingCell : CNContactCell
{
    UITextField *_editingTextField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d8af8
- (void)_cnui_applyContactStyle;	// IMP=0x00000000001d8aac
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000000001d897a
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000001d8888
- (id)firstResponderItem;	// IMP=0x00000000001d8873
- (void)prepareForReuse;	// IMP=0x00000000001d8828
- (void)layoutSubviews;	// IMP=0x00000000001d86cb
- (void)dealloc;	// IMP=0x00000000001d8641
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001d854f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

