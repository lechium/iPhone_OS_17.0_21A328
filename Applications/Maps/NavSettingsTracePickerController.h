//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UIToolbar;

@interface NavSettingsTracePickerController
{
    _Bool _showingPlayButton;	// 56 = 0x38
    UIToolbar *_toolbar;	// 64 = 0x40
    UIBarButtonItem *_deleteButtonItem;	// 72 = 0x48
    UIBarButtonItem *_deleteAllButtonItem;	// 80 = 0x50
}

+ (Class)_mfMailComposeViewController;	// IMP=0x002000000065a9c5
+ (id)navigationDestinationTitle;	// IMP=0x001000000065a9b8
- (void).cxx_destruct;	// IMP=0x002000000065c980
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000065c8c0
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x001000000065c8b8
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x001000000065c7d6
- (void)_showDeleteFileSheetForTraceNames:(id)arg1;	// IMP=0x001000000065c208
- (void)_showDeleteFileSheetForDeleteAll;	// IMP=0x001000000065c0f9
- (void)_showDeleteFileSheet;	// IMP=0x001000000065c0ad
- (id)tracePickerOptionsForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000065b1c1
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000065b115
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000065b0b6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000065ac6d
- (void)updateTracePickerOptions;	// IMP=0x001000000065ab40
- (id)init;	// IMP=0x001000000065aa66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
