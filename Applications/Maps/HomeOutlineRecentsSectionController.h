//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MarkedLocationDataProvider, NSArray, NSString, RecentsDataFilter, RecentsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineRecentsSectionController
{
    MarkedLocationDataProvider *_markedLocationDataProvider;	// 8 = 0x8
    RecentsDataProvider *_recentsDataProvider;	// 16 = 0x10
    RecentsDataFilter *_recentsDataFilter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ade042
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000addfa8
- (void)twoLinesOutlineCell:(id)arg1 accessoryViewTapped:(id)arg2 accessoryModel:(id)arg3;	// IMP=0x0010000000addc86
- (void)smallButtonOutlineCellTapped:(id)arg1;	// IMP=0x0010000000adda45
- (void)_deleteRecentsSnapshots:(id)arg1 deleteAll:(_Bool)arg2;	// IMP=0x0010000000add5c7
- (void)_deleteMarkedLocationSnapshot:(id)arg1;	// IMP=0x0010000000add436
- (void)_deleteSnapshot:(id)arg1;	// IMP=0x0010000000add279
- (_Bool)_shouldShowClearButtonForItemSnapshots:(id)arg1;	// IMP=0x0010000000add01a
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x0010000000adce12
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000adc480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
