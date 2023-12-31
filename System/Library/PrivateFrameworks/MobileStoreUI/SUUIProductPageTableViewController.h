//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SUUIClientContext, SUUIColorScheme, SUUILayoutCache, SUUIProductPageHeaderViewController, SUUIProductPageTableView, UIColor, UITableView;
@protocol SUUIProductPageChildViewController, SUUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIProductPageTableViewController : UIViewController
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    SUUIColorScheme *_colorScheme;	// 16 = 0x10
    id <SUUIProductPageChildViewControllerDelegate> _delegate;	// 24 = 0x18
    id <SUUIProductPageChildViewController> _delegateSender;	// 32 = 0x20
    UIColor *_evenColor;	// 40 = 0x28
    SUUIProductPageHeaderViewController *_headerViewController;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    SUUIProductPageTableView *_tableView;	// 72 = 0x48
    SUUILayoutCache *_textLayoutCache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002e8299
@property(retain, nonatomic) SUUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SUUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) __weak id <SUUIProductPageChildViewController> delegateSender; // @synthesize delegateSender=_delegateSender;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_textLayoutRequestWithText:(id)arg1;	// IMP=0x00000000002e812c
- (id)_tableView;	// IMP=0x00000000002e7f8d
- (void)_addHeaderView;	// IMP=0x00000000002e7d70
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002e7d50
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000002e7ca0
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000002e7bf0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e7b44
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000002e7a7e
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000002e79b8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e760d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002e75bb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e7507
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002e74ea
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002e7487
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002e73f8
- (void)loadView;	// IMP=0x00000000002e73ac
@property(readonly, nonatomic) UITableView *tableView;
- (void)scrollToView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e6e1a
- (void)dealloc;	// IMP=0x00000000002e6db3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002e6d36
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000002e68f3
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000002e6730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

