//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNGeminiResult, CNMutableContact, NSString;
@protocol CNUIGeminiDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem
{
    CNGeminiResult *_geminiResult;	// 8 = 0x8
    id <CNUIGeminiDataSourceDelegate> _geminiUpdateDelegate;	// 16 = 0x10
    CNMutableContact *_editingContact;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003089e0
@property(retain, nonatomic) CNMutableContact *editingContact; // @synthesize editingContact=_editingContact;
@property(nonatomic) __weak id <CNUIGeminiDataSourceDelegate> geminiUpdateDelegate; // @synthesize geminiUpdateDelegate=_geminiUpdateDelegate;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
- (void)geminiDataSourceDidUpdate:(id)arg1;	// IMP=0x0000000000308900
@property(readonly, copy) NSString *description;
- (_Bool)canRemove;	// IMP=0x00000000003087a3
- (_Bool)isValidValue:(id)arg1;	// IMP=0x000000000030878b
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;	// IMP=0x00000000003086c1
- (void)updateLabeledValueWithValue:(id)arg1;	// IMP=0x0000000000308513
- (id)displayStringForValue:(id)arg1;	// IMP=0x0000000000308266
- (id)displayValue;	// IMP=0x0000000000308252
- (id)displayLabel;	// IMP=0x00000000003081f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

