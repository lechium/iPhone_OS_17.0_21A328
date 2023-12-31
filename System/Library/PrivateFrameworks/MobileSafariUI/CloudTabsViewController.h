//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, NSTimer, PreviewTableViewController, UIBarButtonItem, UISearchController, UITableView;
@protocol CloudTabsViewControllerDelegate, LinkPreviewProvider, TabGroupProvider, WBSCloudTabDeviceProvider, _SFNavigationIntentHandling;

__attribute__((visibility("hidden")))
@interface CloudTabsViewController : UIViewController
{
    id <WBSCloudTabDeviceProvider> _deviceProvider;	// 8 = 0x8
    NSArray *_devices;	// 16 = 0x10
    NSString *_primaryDeviceUUID;	// 24 = 0x18
    NSString *_profileIdentifier;	// 32 = 0x20
    _Bool _onlyShowsPrimaryDevice;	// 40 = 0x28
    NSString *_userTypedFilter;	// 48 = 0x30
    UIBarButtonItem *_doneBarButtonItem;	// 56 = 0x38
    UIBarButtonItem *_editBarButtonItem;	// 64 = 0x40
    PreviewTableViewController *_tableViewController;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
    UISearchController *_searchController;	// 88 = 0x58
    NSTimer *_delayReloadTimer;	// 96 = 0x60
    id <CloudTabsViewControllerDelegate> _delegate;	// 104 = 0x68
    id <LinkPreviewProvider> _linkPreviewProvider;	// 112 = 0x70
    id <_SFNavigationIntentHandling> _navigationIntentHandler;	// 120 = 0x78
    id <TabGroupProvider> _tabGroupProvider;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000011d488
@property(nonatomic) __weak id <TabGroupProvider> tabGroupProvider; // @synthesize tabGroupProvider=_tabGroupProvider;
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) id <CloudTabsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000011d3d4
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000011d3c2
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000011d2b4
- (id)previewTableViewController:(id)arg1 menuForRowAtIndexPath:(id)arg2;	// IMP=0x000000000011cab2
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;	// IMP=0x000000000011ca9d
- (id)_urlForRowAtIndexPath:(id)arg1;	// IMP=0x000000000011ca4d
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x000000000011ca39
- (id)safari_tableViewForScrollPositionSaving;	// IMP=0x000000000011ca24
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000011ca07
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000011c9ea
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000011c9cd
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000011c9b0
- (void)_deleteRowAtIndexPath:(id)arg1;	// IMP=0x000000000011c786
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000011c77e
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x000000000011c767
- (_Bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x000000000011c75f
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000011c74a
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000011c72b
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000011c6e3
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000011c626
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000011c538
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000011c4c0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000011c401
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000011c3e4
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000011c37d
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000011c2f9
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000000011c206
- (id)_tabForIndexPath:(id)arg1;	// IMP=0x000000000011c163
- (id)_filteredTabsInSection:(long long)arg1;	// IMP=0x000000000011c04c
- (id)_deviceForIndexPath:(id)arg1;	// IMP=0x000000000011c010
- (void)_reloadDevicesAndTable;	// IMP=0x000000000011bfa9
- (void)cloudTabDeviceProvider:(id)arg1 didUpdateCloudTabsInProfileWithIdentifier:(id)arg2;	// IMP=0x000000000011bf2c
- (void)_delayReloadTimerFired;	// IMP=0x000000000011bed8
- (void)_loadDevices;	// IMP=0x000000000011bb83
- (void)dismiss;	// IMP=0x000000000011bb6a
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000011bb4d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000011bb07
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000011bab1
- (void)_updateContentUnavailableConfiguration;	// IMP=0x000000000011b604
- (void)viewDidLoad;	// IMP=0x000000000011b41d
- (void)loadView;	// IMP=0x000000000011b1bb
- (void)dealloc;	// IMP=0x000000000011b146
- (id)initWithDeviceProvider:(id)arg1 primaryDeviceUUID:(id)arg2 profileIdentifier:(id)arg3;	// IMP=0x000000000011af4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

