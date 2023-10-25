//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SearchFieldItem, UISearchBar, UISearchTextField;
@protocol RouteWaypointSearchFieldsDelegate;

@interface RouteWaypointSearchFieldView
{
    UISearchBar *_searchBar;	// 8 = 0x8
    UISearchTextField *_searchField;	// 16 = 0x10
    SearchFieldItem *_searchFieldItem;	// 24 = 0x18
    SearchFieldItem *_previousSearchFieldItem;	// 32 = 0x20
    id <RouteWaypointSearchFieldsDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000d78d25
@property(nonatomic) __weak id <RouteWaypointSearchFieldsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SearchFieldItem *previousSearchFieldItem; // @synthesize previousSearchFieldItem=_previousSearchFieldItem;
@property(retain, nonatomic) SearchFieldItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
- (_Bool)searchBarShouldClear:(id)arg1;	// IMP=0x0010000000d78c27
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000d78b3e
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000d78ac9
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0010000000d789ab
- (void)clear;	// IMP=0x0010000000d7893b
- (void)shouldReplaceTextWithCompletion:(id)arg1;	// IMP=0x0010000000d78814
- (void)updateSearchFieldsFromIndex:(unsigned long long)arg1 withItem:(id)arg2;	// IMP=0x0010000000d7876e
- (_Bool)containsWaypointForItem:(id)arg1;	// IMP=0x0010000000d78673
@property(readonly, nonatomic) _Bool containsCurrentLocationItem;
- (id)itemsForRouteRequest;	// IMP=0x0010000000d7857c
- (_Bool)_shouldHideDynamicCurrentLocation;	// IMP=0x0010000000d78511
- (void)endEditingFields;	// IMP=0x0010000000d784f4
- (void)beginEditingNextSearchField;	// IMP=0x0010000000d7841e
@property(readonly, nonatomic) _Bool isEditingAnySearchField;
@property(readonly, nonatomic) _Bool hasInput;
- (void)updateTheme;	// IMP=0x0010000000d782b3
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000d77d38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
