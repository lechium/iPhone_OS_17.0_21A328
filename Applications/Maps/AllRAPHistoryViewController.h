//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AllRAPHistoryDataSource, ContainerHeaderView, NSString, UICollectionView;

@interface AllRAPHistoryViewController
{
    ContainerHeaderView *_titleHeaderView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    unsigned long long _reportSectionTypeForView;	// 24 = 0x18
    AllRAPHistoryDataSource *_reportsDataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000023c306
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000023c2ed
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000023c266
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x001000000023c260
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x001000000023c25a
- (void)loadDataSource;	// IMP=0x001000000023c1a7
- (void)_createCollectionViewLayout;	// IMP=0x001000000023bda2
- (void)_setupConstraints;	// IMP=0x001000000023b7cc
- (void)viewDidLoad;	// IMP=0x001000000023b619
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000023b607
- (id)initWithReportSection:(unsigned long long)arg1 sectionTitle:(id)arg2;	// IMP=0x001000000023b492

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end

