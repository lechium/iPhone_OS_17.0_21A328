//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DataSource, HairlineView, MacFooterView, ModalCardHeaderView, NSString, PassthruSearchBar, RecentlyViewedDataSource, SearchDataSource, ShortcutSuggestionsDataSource, UITableView, UITextField;

@interface AddFromACViewController
{
    NSString *_inputText;	// 8 = 0x8
    ModalCardHeaderView *_modalHeaderView;	// 16 = 0x10
    PassthruSearchBar *_searchBar;	// 24 = 0x18
    UITextField *_searchField;	// 32 = 0x20
    DataSource *_currentDataSource;	// 40 = 0x28
    SearchDataSource *_searchDataSource;	// 48 = 0x30
    RecentlyViewedDataSource *_recentlyViewedDataSource;	// 56 = 0x38
    ShortcutSuggestionsDataSource *_suggestionsDataSource;	// 64 = 0x40
    HairlineView *_headerHairline;	// 72 = 0x48
    MacFooterView *_footerView;	// 80 = 0x50
    UITableView *_tableView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000330f2a
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000330eff
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x0010000000330ef9
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x0010000000330ee5
- (void)_textFieldDidChange:(id)arg1;	// IMP=0x0010000000330e7f
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000330e6a
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0010000000330e62
- (_Bool)searchBarShouldEndEditing:(id)arg1;	// IMP=0x0010000000330e5a
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x0010000000330e52
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000330e32
- (void)setInputText:(id)arg1;	// IMP=0x0010000000330d2e
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x0010000000330c9d
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000330c52
- (void)searchDataSource:(id)arg1 addItem:(id)arg2;	// IMP=0x0010000000330c3d
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000330c28
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000330c22
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000330c10
- (void);	// IMP=0x0010000000330bcf
- (void)_handleItem:(id)arg1;	// IMP=0x00100000003308f6
- (void)_updateHeaderHairline;	// IMP=0x0010000000330887
- (void)_enableTextFieldNotification:(_Bool)arg1;	// IMP=0x00100000003307e7
- (void)updateDataSource;	// IMP=0x00100000003306b3
@property(readonly, nonatomic) _Bool showsRecents;
- (id)emptyStateDataSource;	// IMP=0x001000000033065f
- (id)searchDataSource;	// IMP=0x001000000033056e
- (id)recentlyViewedDataSource;	// IMP=0x00100000003304ae
- (id)suggestionsDataSource;	// IMP=0x0010000000330408
- (void)updateTheme;	// IMP=0x00100000003302c3
- (void)_setPlaceHolder;	// IMP=0x00100000003300cb
- (void)didResignCurrent;	// IMP=0x001000000033008b
- (void)didBecomeCurrent;	// IMP=0x0010000000330028
- (void)viewDidLoad;	// IMP=0x001000000032f050
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000032ef64
- (void)saveShortcut:(id)arg1;	// IMP=0x001000000032ef5e
- (void)saveMapItem:(id)arg1;	// IMP=0x001000000032ef58
@property(readonly, nonatomic) int requestSource;
@property(readonly, nonatomic) NSString *headerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

