//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class GEOMapDataSubscriptionManager, NSArray, UITableViewDiffableDataSource, _MapDataSubscriptionStateObserverRegistry;

@interface MapDataSubscriptionsDebugViewController : UITableViewController
{
    GEOMapDataSubscriptionManager *_subscriptionManager;	// 8 = 0x8
    NSArray *_subscriptions;	// 16 = 0x10
    _MapDataSubscriptionStateObserverRegistry *_observerRegistry;	// 24 = 0x18
    UITableViewDiffableDataSource *_dataSource;	// 32 = 0x20
    int _subscriptionsChangedNotifyToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000005dfbfb
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000005dfa62
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005dfa51
- (void)_reloadSubscriptions;	// IMP=0x00100000005decc0
- (id)_configuredCellForSubscriptionIdentifier:(id)arg1;	// IMP=0x00100000005de42d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000005de3e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000005de279
- (void)viewDidLoad;	// IMP=0x00100000005ddfd0

@end

