//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDiffableDataSourceSnapshot, NSIndexPath, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol UITraitEnvironment;

@interface CollectionsFilterLogicController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    id <UITraitEnvironment> _traitEnvironment;	// 16 = 0x10
    NSArray *_publisherResultFilters;	// 24 = 0x18
    NSArray *_allCollectionsResultFilters;	// 32 = 0x20
    NSArray *_guidesHomeFilters;	// 40 = 0x28
    NSArray *_filters;	// 48 = 0x30
    NSIndexPath *_selectedIndexPath;	// 56 = 0x38
    UICollectionViewDiffableDataSource *_dataSource;	// 64 = 0x40
    NSDiffableDataSourceSnapshot *_snapshot;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002c5170
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSArray *guidesHomeFilters; // @synthesize guidesHomeFilters=_guidesHomeFilters;
@property(retain, nonatomic) NSArray *allCollectionsResultFilters; // @synthesize allCollectionsResultFilters=_allCollectionsResultFilters;
@property(retain, nonatomic) NSArray *publisherResultFilters; // @synthesize publisherResultFilters=_publisherResultFilters;
@property(retain, nonatomic) id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)buildGuidesHomeViewFiltersWithSelectedIndexPath:(id)arg1;	// IMP=0x00100000002c4d2c
- (id)buildPublishersFiltersWithSelectedIndexPath:(id)arg1;	// IMP=0x00100000002c4986
- (id)buildAllCollectionsFiltersWithSelectedIndexPath:(id)arg1;	// IMP=0x00100000002c460e
- (void)prepareSnapshot;	// IMP=0x00100000002c44e4
- (id)routeToSelectedGuidesHomeFilterAtIndexPath:(id)arg1;	// IMP=0x00100000002c43c2
- (id)routeToSelectedAllCollectionsFilterAtIndexPath:(id)arg1;	// IMP=0x00100000002c42aa
- (id)routeToSelectedFilterAtIndexPath:(id)arg1;	// IMP=0x00100000002c4192
- (id)selectedFilterIndexPath;	// IMP=0x00100000002c4180
- (id)filterViewModels;	// IMP=0x00100000002c4138
- (id)filterAtIndexPath:(id)arg1;	// IMP=0x00100000002c40a5
- (long long)numberOfFilters;	// IMP=0x00100000002c4061
- (long long)numberOfSections;	// IMP=0x00100000002c4056
- (void)displayFilters;	// IMP=0x00100000002c3fe4
- (void)getFilters:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c3da4
- (void)scrollToSelectedFilter;	// IMP=0x00100000002c3c36
- (id)initForGuidesHomeViewUsingFilters:(id)arg1 withSelectedFilterIndexPath:(id)arg2 traitEnvironment:(id)arg3;	// IMP=0x00100000002c3b63
- (id)initForPublisherViewUsingFilters:(id)arg1 withSelectedFilterIndexPath:(id)arg2;	// IMP=0x00100000002c3a52
- (id)initForAllCollectionsViewUsingFilters:(id)arg1 withSelectedFilterIndexPath:(id)arg2;	// IMP=0x00100000002c3941
- (id)initWithCollectionView:(id)arg1 withGuidesHomeResultFilters:(id)arg2 withSelectedFilterIndexPath:(id)arg3;	// IMP=0x00100000002c3819
- (id)initWithCollectionView:(id)arg1 withAllCollectionsResultFilters:(id)arg2 withSelectedFilterIndexPath:(id)arg3;	// IMP=0x00100000002c368d
- (id)initWithCollectionView:(id)arg1 withResultFilters:(id)arg2 withSelectedFilterIndexPath:(id)arg3;	// IMP=0x00100000002c3501

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

