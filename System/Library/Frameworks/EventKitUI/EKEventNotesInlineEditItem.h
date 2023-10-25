//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class CalendarNotesCell, NSString;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem
{
    CalendarNotesCell *_cell;	// 32 = 0x20
    NSString *_lastTextChange;	// 40 = 0x28
    struct CGRect _keyboardRect;	// 48 = 0x30
    _Bool _textViewDirty;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000018e8c3
- (_Bool)textViewShouldReturn:(id)arg1;	// IMP=0x000000000018e858
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000000018e7ff
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000000018e7cf
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x000000000018e7a1
- (id)searchStringForEventAutocomplete;	// IMP=0x000000000018e799
- (_Bool)isSaveable;	// IMP=0x000000000018e71c
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000018e643
- (void)tableViewDidScroll;	// IMP=0x000000000018e393
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000018e28f
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000018e1df
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018debb
- (_Bool)isInline;	// IMP=0x000000000018deb3
- (void)reset;	// IMP=0x000000000018de13
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x000000000018ddf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
