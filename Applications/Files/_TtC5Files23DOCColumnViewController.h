//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC5Files23DOCColumnViewController : UICollectionViewController
{
    MISSING_TYPE *containerControllers;	// 8 = 0x8
    MISSING_TYPE *additionalLeadingNavigationBarButtonItems;	// 16 = 0x10
    MISSING_TYPE *additionalTrailingNavigationBarButtonItems;	// 24 = 0x18
    MISSING_TYPE *configuration;	// 32 = 0x20
    MISSING_TYPE *diffableDataSource;	// 40 = 0x28
    MISSING_TYPE *needsUpdateDiffableSnapshot;	// 48 = 0x30
    MISSING_TYPE *columnViewSpecs;	// 56 = 0x38
    MISSING_TYPE *oldContentOffset;	// 64 = 0x40
    MISSING_TYPE *pendingScrollToItem;	// 0 = 0x0
    MISSING_TYPE *activeScrollToItemContext;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_notificationsController;	// 0 = 0x0
    MISSING_TYPE *showsHierarchyIndicator;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *fakeLeadingSeparator;	// 0 = 0x0
}

+ (_Bool)supportsDisplayInTraitCollection:(id)arg1 availableArea:(struct CGSize)arg2;	// IMP=0x00200000002fb330
+ (id)DOCColumnViewControllerUpdatedNavigationItem;	// IMP=0x00100000002fb300
- (void).cxx_destruct;	// IMP=0x00400000003039c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000303960
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0010000000303930
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0010000000303890
- (MISSING_TYPE *)scrollViewDidScroll: /* Error: Ran out of types for this method. */;	// IMP=0x00100000003036b0
@property(nonatomic) _Bool showsHierarchyIndicator; // @synthesize showsHierarchyIndicator;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)updateFocusHierarchy;	// IMP=0x0010000000303330
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000302ec0
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000302e00
- (void)viewLayoutMarginsDidChange;	// IMP=0x0010000000302930
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000003028e0
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0010000000302610
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00100000003020d0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000302090
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000301060
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000300e90
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000300e50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000300d00
- (void)viewDidLoad;	// IMP=0x0010000000300be0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003006d0
@property(nonatomic, readonly) NSString *description;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00100000002ffb30
@property(nonatomic, copy) NSArray *containerControllers;

@end

