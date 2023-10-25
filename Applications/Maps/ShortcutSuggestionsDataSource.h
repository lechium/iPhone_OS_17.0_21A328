//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface ShortcutSuggestionsDataSource
{
    NSArray *_suggestions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000081a9fb
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000081a9e2
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000081a9c9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000081a8ad
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x001000000081a83d
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000081a6f4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000081a601
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000081a4cc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000081a488
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000081a47d
- (void)didTapOnAccessoryView:(id)arg1 withType:(long long)arg2 object:(id)arg3;	// IMP=0x001000000081a30b
- (int)targetForDragAnalytics;	// IMP=0x001000000081a303
- (id)objectsForAnalytics;	// IMP=0x001000000081a2fb
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000081a2ae
- (void)shortcutSelected:(id)arg1;	// IMP=0x001000000081a243
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000081a169
- (id)currentSuggestions;	// IMP=0x001000000081a144
- (id)shortcutManager;	// IMP=0x001000000081a0fd
- (void)_updateSuggestions:(id)arg1;	// IMP=0x001000000081a07e
- (void)_loadContentAndSuggestions;	// IMP=0x0010000000819ed7
- (id)initWithTableView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x0010000000819dfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
