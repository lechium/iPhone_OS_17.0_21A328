//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC5Files33DOCSuggestionsTableViewController : UITableViewController
{
    MISSING_TYPE *suggestionsTableViewDelegate;	// 8 = 0x8
    MISSING_TYPE *suggestions;	// 24 = 0x18
    MISSING_TYPE *sortedSuggestions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000396d90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000396d10
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000396ce0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000396c20
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000396600
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000003965f0
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00100000003965e0
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00100000003965d0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000396530
- (void)keyCommandCancelSelection;	// IMP=0x0010000000395910
- (void)keyCommandConfirmSelection;	// IMP=0x00100000003958e0
- (void)keyCommandMoveSelectionDown;	// IMP=0x0010000000395730
- (void)keyCommandMoveSelectionUp;	// IMP=0x00100000003956f0
@property(nonatomic, readonly) NSArray *keyCommands;
- (_Bool)resignFirstResponder;	// IMP=0x0010000000395660
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidLoad;	// IMP=0x0010000000395440
- (void)loadView;	// IMP=0x0010000000395090
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000395010
- (id)init;	// IMP=0x0010000000394ff0

@end

