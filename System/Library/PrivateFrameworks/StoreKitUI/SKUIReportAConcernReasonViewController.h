//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SKUIReportAConcernConfiguration, SKUIReportAConcernReasonDataSource, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonViewController : UIViewController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    SKUIReportAConcernConfiguration *_configuration;	// 16 = 0x10
    SKUIReportAConcernReasonDataSource *_dataSource;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000288847
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKUIReportAConcernReasonDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIReportAConcernConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000288587
- (void)cancelPressed:(id)arg1;	// IMP=0x000000000028856e
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002884a5
- (void)viewDidLoad;	// IMP=0x0000000000288082
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000287fcd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000287f4a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000287ec7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

