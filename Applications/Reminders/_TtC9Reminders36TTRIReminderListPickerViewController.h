//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders36TTRIReminderListPickerViewController : UITableViewController
{
    MISSING_TYPE *isPresentedInPopover;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 16 = 0x10
    MISSING_TYPE *palette;	// 32 = 0x20
    MISSING_TYPE *contentSizeObserver;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000006bbe50
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000006bbe10
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000006bbde0
- (void)moveButtonAction:(id)arg1;	// IMP=0x00100000006bbd60
- (void)cancelButtonAction:(id)arg1;	// IMP=0x00100000006bbbf0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000006bbb40
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000006bb3f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000006bb330
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00100000006bae60
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00100000006bad70
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000006bad00
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000006baaf0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000006baad0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006baa20
- (void)viewWillLayoutSubviews;	// IMP=0x00100000006ba9c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000006ba660
- (void)viewDidLoad;	// IMP=0x00100000006ba190
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000006b9d50

@end
