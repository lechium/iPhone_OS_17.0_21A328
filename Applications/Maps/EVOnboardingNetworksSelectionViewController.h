//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchController, UITableView, VGVehicle, _TtC4Maps26ChargingNetworksDataSource;
@protocol EVOnboardingNetworksSelectionViewControllerDelegate;

@interface EVOnboardingNetworksSelectionViewController
{
    VGVehicle *_vehicle;	// 8 = 0x8
    id <EVOnboardingNetworksSelectionViewControllerDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    _TtC4Maps26ChargingNetworksDataSource *_dataSource;	// 32 = 0x20
    UISearchController *_searchController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000cc613f
- (void)reloadData;	// IMP=0x0010000000cc612d
- (void)didDeselectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x0010000000cc60b3
- (void)didSelectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x0010000000cc6039
- (void)_nextPressed;	// IMP=0x0010000000cc5f90
- (void)_updateNextButton;	// IMP=0x0010000000cc5ed8
- (void)_updateContent;	// IMP=0x0010000000cc5ebb
- (id)obViewController;	// IMP=0x0010000000cc5ad0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000cc5758
- (void)viewDidLoad;	// IMP=0x0010000000cc561c
- (id)initWithVehicle:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000cc542a

@end

