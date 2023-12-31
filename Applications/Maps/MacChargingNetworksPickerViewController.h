//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MacFooterView, NSString, UISearchBar, UITableView, _TtC4Maps26ChargingNetworksDataSource;
@protocol _TtP4Maps43ChargingNetworkPickerViewControllerDelegate_;

@interface MacChargingNetworksPickerViewController : UIViewController
{
    UISearchBar *_searchBar;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    MacFooterView *_footerView;	// 24 = 0x18
    id <_TtP4Maps43ChargingNetworkPickerViewControllerDelegate_> _delegate;	// 32 = 0x20
    _TtC4Maps26ChargingNetworksDataSource *_dataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000036390c
@property(retain, nonatomic) _TtC4Maps26ChargingNetworksDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <_TtP4Maps43ChargingNetworkPickerViewControllerDelegate_> delegate; // @synthesize delegate=_delegate;
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000363828
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000363808
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000003636c0
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000036361d
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000363604
- (void)reloadData;	// IMP=0x00100000003635f2
- (void)didDeselectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x0010000000363578
- (void)didSelectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x00100000003634fe
- (void)_updateAddButton;	// IMP=0x0010000000363487
- (void)_updateContent;	// IMP=0x001000000036346a
- (void)_setupConstraints;	// IMP=0x0010000000362ce6
- (void)_setupSubviews;	// IMP=0x001000000036279a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003626a8
- (void)viewDidLoad;	// IMP=0x001000000036261b
- (id)initWithExcludedNetworks:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000036250d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

