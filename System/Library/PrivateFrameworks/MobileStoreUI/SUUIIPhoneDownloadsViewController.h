//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SUUIClientContext, UITableView, _UIContentUnavailableView;
@protocol SUUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIIPhoneDownloadsViewController : UIViewController
{
    UITableView *_tableView;	// 8 = 0x8
    _UIContentUnavailableView *_noContentView;	// 16 = 0x10
    id <SUUIDownloadsChildViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_downloads;	// 32 = 0x20
    SUUIClientContext *_clientContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002aafab
@property(retain, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(nonatomic) __weak id <SUUIDownloadsChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reload;	// IMP=0x00000000002aacf5
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002aabe8
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000002aab35
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002aab27
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002aab0a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002aa9c8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002aa903
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002aa896
- (void)loadView;	// IMP=0x00000000002aa779
- (void)reloadDownloadsAtIndexes:(id)arg1;	// IMP=0x00000000002aa50a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

