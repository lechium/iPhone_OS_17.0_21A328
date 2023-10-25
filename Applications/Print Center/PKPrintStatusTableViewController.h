//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSDateFormatter, PKJob;

@interface PKPrintStatusTableViewController : UITableViewController
{
    PKJob *_printJob;	// 8 = 0x8
    NSDateFormatter *_sentFormatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000045e8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000045ac
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000004582
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000038b8
- (id)localizedOptionsForSettings:(id)arg1;	// IMP=0x001000000000331e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000000319c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000003191
- (void)updateJobInfo;	// IMP=0x00100000000030cf
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000003003
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000002f1c
- (void)cancelPrinting;	// IMP=0x0010000000002e52
- (void)popToJobsView;	// IMP=0x0010000000002d9f
- (void)updateCancelButton;	// IMP=0x0010000000002d62
- (void)loadView;	// IMP=0x0010000000002cb8
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000002c12
- (void)dealloc;	// IMP=0x0010000000002b9d
- (id)initWithJob:(id)arg1;	// IMP=0x0010000000002ac5

@end
