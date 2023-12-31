//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionViewCell, UICollectionViewDiffableDataSource, VUICollectionHeaderView, VUIFamilyMember, VUIMediaEntitiesDataSource, VUIMediaEntityFetchRequest, VUIViewControllerContentPresenter;
@protocol VUILibraryGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryGridCollectionViewController : UICollectionViewController
{
    double _lastViewWidth;	// 8 = 0x8
    _Bool _requiresRelayout;	// 16 = 0x10
    struct CGSize _cellSize;	// 24 = 0x18
    NSMutableDictionary *_cellMetrics;	// 40 = 0x28
    VUICollectionHeaderView *_sizingHeaderView;	// 48 = 0x30
    _Bool _hideLockupTitles;	// 56 = 0x38
    _Bool _forceBackButton;	// 57 = 0x39
    _Bool _waitingForFetch;	// 58 = 0x3a
    VUIFamilyMember *_familyMember;	// 64 = 0x40
    id <VUILibraryGridCollectionViewControllerDelegate> _delegate;	// 72 = 0x48
    long long _gridFilter;	// 80 = 0x50
    UIBarButtonItem *_libraryBarButton;	// 88 = 0x58
    NSString *_pageType;	// 96 = 0x60
    VUIMediaEntitiesDataSource *_entitiesDataSource;	// 104 = 0x68
    VUIMediaEntityFetchRequest *_fetchRequest;	// 112 = 0x70
    UICollectionViewCell *_sizingCell;	// 120 = 0x78
    double _cellWidth;	// 128 = 0x80
    UIBarButtonItem *_currentNavBarButtonItem;	// 136 = 0x88
    VUIViewControllerContentPresenter *_contentPresenter;	// 144 = 0x90
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 152 = 0x98
    NSArray *_mediaEntities;	// 160 = 0xa0
    long long _gridStyle;	// 168 = 0xa8
    long long _gridType;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000021ef9d
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(retain, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(nonatomic) _Bool waitingForFetch; // @synthesize waitingForFetch=_waitingForFetch;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UICollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *entitiesDataSource; // @synthesize entitiesDataSource=_entitiesDataSource;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) _Bool forceBackButton; // @synthesize forceBackButton=_forceBackButton;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property(nonatomic) _Bool hideLockupTitles; // @synthesize hideLockupTitles=_hideLockupTitles;
@property(nonatomic) long long gridFilter; // @synthesize gridFilter=_gridFilter;
@property(nonatomic) __weak id <VUILibraryGridCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (void)_applySnapshotFromEntitiesAndAnimateDifferences:(_Bool)arg1;	// IMP=0x000000000021eba5
- (void)_applyInitialSnapshot;	// IMP=0x000000000021e855
- (void)_updateCurrentViewIfNeeded;	// IMP=0x000000000021e7c2
- (void)_updateLayoutForSize:(struct CGSize)arg1;	// IMP=0x000000000021e581
- (void)_updateNavigationBarPadding;	// IMP=0x000000000021e335
- (double)_computeBottomMargin;	// IMP=0x000000000021e232
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000021e06c
- (id)_getEntityIdentifiersFromEntities;	// IMP=0x000000000021dea0
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x000000000021dd39
- (id)_createDiffableDataSource;	// IMP=0x000000000021db14
- (id)_createCollectionViewFlowLayout;	// IMP=0x000000000021dacc
- (id)_createCollectionView;	// IMP=0x000000000021d9b2
- (void)setTitle:(id)arg1 withLargeTitleDisplayEnabled:(_Bool)arg2;	// IMP=0x000000000021d891
- (void)_iOSHandleCellSelectionAtIndexPath:(id)arg1;	// IMP=0x000000000021d607
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000021d51e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000021d509
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000021d3b8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000021d1dc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000021d16d
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000021d15b
- (void)dataSourceDidFinishFetchingArtwork:(id)arg1;	// IMP=0x000000000021d155
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x000000000021d03e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000021ce2e
- (void)viewWillLayoutSubviews;	// IMP=0x000000000021ccd8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000021cc29
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000021cbfa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000021cab9
- (void)viewDidLoad;	// IMP=0x000000000021c541
- (void)loadView;	// IMP=0x000000000021c4d0
- (void)updateWithLatestMediaEntities:(id)arg1;	// IMP=0x000000000021c444
- (void)dealloc;	// IMP=0x000000000021c3f9
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000021c031

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

