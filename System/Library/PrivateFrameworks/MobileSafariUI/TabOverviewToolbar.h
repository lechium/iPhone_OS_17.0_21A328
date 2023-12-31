//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BarButton, NSString, UISearchBar, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TabOverviewToolbar : UIView
{
    BarButton *_addTabButton;	// 8 = 0x8
    UIVisualEffectView *_background;	// 16 = 0x10
    BarButton *_cancelSearchButton;	// 24 = 0x18
    UIView *_contentContainer;	// 32 = 0x20
    BarButton *_doneButton;	// 40 = 0x28
    _Bool _needsResizeItems;	// 48 = 0x30
    double _searchBarMinimumWidth;	// 56 = 0x38
    BarButton *_sidebarButton;	// 64 = 0x40
    BarButton *_tabGroupButton;	// 72 = 0x48
    double _tabGroupButtonPreferredWidth;	// 80 = 0x50
    UIView *_toolbarSeparator;	// 88 = 0x58
    _Bool _backgroundHidden;	// 96 = 0x60
    _Bool _contentBorrowed;	// 97 = 0x61
    _Bool _shouldReserveSpaceForSidebarButton;	// 98 = 0x62
    long long _placement;	// 104 = 0x68
    double _searchBarLeadingMargin;	// 112 = 0x70
    UISearchBar *_searchBar;	// 120 = 0x78
    long long _tabGroupButtonDisplayStyle;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002093b8
@property(nonatomic) long long tabGroupButtonDisplayStyle; // @synthesize tabGroupButtonDisplayStyle=_tabGroupButtonDisplayStyle;
@property(nonatomic) _Bool shouldReserveSpaceForSidebarButton; // @synthesize shouldReserveSpaceForSidebarButton=_shouldReserveSpaceForSidebarButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) double searchBarLeadingMargin; // @synthesize searchBarLeadingMargin=_searchBarLeadingMargin;
@property(nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) _Bool contentBorrowed; // @synthesize contentBorrowed=_contentBorrowed;
@property(nonatomic, getter=isBackgroundHidden) _Bool backgroundHidden; // @synthesize backgroundHidden=_backgroundHidden;
- (void)capsuleCollectionView:(id)arg1 relinquishToolbarContentView:(id)arg2;	// IMP=0x00000000002092e3
- (double)capsuleCollectionView:(id)arg1 heightForToolbarContentView:(id)arg2;	// IMP=0x0000000000209230
- (id)toolbarContentViewForCapsuleCollectionView:(id)arg1;	// IMP=0x00000000002091d4
- (id)snapshotBarContentsAfterScreenUpdates:(_Bool)arg1;	// IMP=0x000000000020906a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000208c9e
- (id)resolvedTintColorForBarButton:(long long)arg1;	// IMP=0x0000000000208b19
- (struct CGRect)rectForBarButton:(long long)arg1;	// IMP=0x0000000000208aba
- (void)removeInteraction:(id)arg1 fromBarButton:(long long)arg2;	// IMP=0x0000000000208a42
- (void)addInteraction:(id)arg1 toBarButton:(long long)arg2;	// IMP=0x00000000002089ca
- (void)removePrimaryAction:(id)arg1 forBarButton:(long long)arg2;	// IMP=0x000000000020894d
- (void)addPrimaryAction:(id)arg1 forBarButton:(long long)arg2;	// IMP=0x0000000000208842
- (void)setShowingSearchCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000208608
- (_Bool)barButtonIsHidden:(long long)arg1;	// IMP=0x00000000002085c4
- (void)setBarButton:(long long)arg1 hidden:(_Bool)arg2;	// IMP=0x00000000002084ed
- (_Bool)barButtonIsEnabled:(long long)arg1;	// IMP=0x00000000002084a9
- (void)setBarButton:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000020845f
- (void)setTabGroupButtonConfiguration:(id)arg1;	// IMP=0x000000000020828c
- (void)setTabGroupButtonTitle:(id)arg1;	// IMP=0x0000000000208213
- (id)menuForBarButton:(long long)arg1;	// IMP=0x00000000002081c3
- (void)setMenu:(id)arg1 forBarButton:(long long)arg2;	// IMP=0x000000000020814b
- (id)_buttonForBarButton:(long long)arg1;	// IMP=0x0000000000208120
- (_Bool)_canDisplaySearchBarAndSidebarButton;	// IMP=0x000000000020810b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000207aaa
- (void)_resizeItemsIfNeeded;	// IMP=0x00000000002078c7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000020780c
- (void)_layoutForBottomPlacement;	// IMP=0x000000000020727c
- (void)_layoutForTopPlacement;	// IMP=0x0000000000206142
- (void)layoutSubviews;	// IMP=0x0000000000206024
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000020585f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

