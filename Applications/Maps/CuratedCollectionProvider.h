//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuratedCollectionActionCellModel, CuratedCollectionDescriptionCellModel, CuratedCollectionMediaIntegrationViewModel, CuratedCollectionResolver, CuratedCollectionResolverInfo, CuratedCollectionRichTextParser, CuratedCollectionViewAnalyticsController, GEOPlaceCollection, NSArray, NSString, UITableViewDiffableDataSource;
@protocol CuratedCollectionDataSourceDelegate, TwoLinesContentViewModel;

@interface CuratedCollectionProvider
{
    _Bool _isApplyingSnapshot;	// 8 = 0x8
    NSArray *_keyCommands;	// 16 = 0x10
    GEOPlaceCollection *_curatedCollection;	// 24 = 0x18
    NSArray *_collectionItems;	// 32 = 0x20
    CuratedCollectionViewAnalyticsController *_analyticsController;	// 40 = 0x28
    double _subheaderTransitionFraction;	// 48 = 0x30
    CuratedCollectionActionCellModel *_actionModel;	// 56 = 0x38
    CuratedCollectionDescriptionCellModel *_descriptionModel;	// 64 = 0x40
    CuratedCollectionMediaIntegrationViewModel *_mediaIntegrationModel;	// 72 = 0x48
    CuratedCollectionResolverInfo *_resolverInfo;	// 80 = 0x50
    NSArray *_models;	// 88 = 0x58
    NSArray<TwoLinesContentViewModel> *_publisherModel;	// 96 = 0x60
    NSArray *_footerActionItems;	// 104 = 0x68
    CuratedCollectionResolver *_resolver;	// 112 = 0x70
    CuratedCollectionRichTextParser *_parser;	// 120 = 0x78
    UITableViewDiffableDataSource *_dataSource;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000b4ca47
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CuratedCollectionRichTextParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) CuratedCollectionResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSArray *footerActionItems; // @synthesize footerActionItems=_footerActionItems;
@property(retain, nonatomic) NSArray<TwoLinesContentViewModel> *publisherModel; // @synthesize publisherModel=_publisherModel;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) CuratedCollectionResolverInfo *resolverInfo; // @synthesize resolverInfo=_resolverInfo;
@property(retain, nonatomic) CuratedCollectionMediaIntegrationViewModel *mediaIntegrationModel; // @synthesize mediaIntegrationModel=_mediaIntegrationModel;
@property(retain, nonatomic) CuratedCollectionDescriptionCellModel *descriptionModel; // @synthesize descriptionModel=_descriptionModel;
@property(retain, nonatomic) CuratedCollectionActionCellModel *actionModel; // @synthesize actionModel=_actionModel;
@property(nonatomic) double subheaderTransitionFraction; // @synthesize subheaderTransitionFraction=_subheaderTransitionFraction;
@property(readonly, nonatomic) _Bool isApplyingSnapshot; // @synthesize isApplyingSnapshot=_isApplyingSnapshot;
@property(retain, nonatomic) CuratedCollectionViewAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) NSArray *collectionItems; // @synthesize collectionItems=_collectionItems;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
- (id)keyCommands;	// IMP=0x0010000000b4c833
- (void)_punchoutToViewModel:(id)arg1;	// IMP=0x0010000000b4c722
- (void)mediaIntegrationCell:(id)arg1 didSelectChildLink:(id)arg2;	// IMP=0x0010000000b4c67f
- (void)mediaIntegrationCellDidDisplayChildLinks:(id)arg1;	// IMP=0x0010000000b4c544
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x0010000000b4c2c1
- (void)refresh;	// IMP=0x0010000000b4c22d
- (void)cellExpansionOccured:(id)arg1;	// IMP=0x0010000000b4c0b9
- (void)cellPublisherLogoTapped:(id)arg1;	// IMP=0x0010000000b4c02c
- (void)openAppClip:(id)arg1;	// IMP=0x0010000000b4bfc1
- (void)willPunchOutToPublisherWebpageForPlaceCollectionItem:(id)arg1;	// IMP=0x0010000000b4bf56
- (void)didSelectAddToUserCollection:(id)arg1 forMapItem:(id)arg2 sourceView:(id)arg3 onSaveCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000b4be8c
- (void)_openURL:(id)arg1;	// IMP=0x0010000000b4be1a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b4b9bf
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000b4b6df
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000b4b528
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b4b3f1
- (double);	// IMP=0x0010000000b4b3e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0010000000b4ab7d
- (void)didFailToResolveCollectionWithError:(id)arg1 withFetchedCollection:(id)arg2;	// IMP=0x0010000000b4a935
- (void)_updateSnapshotWithCollection:(id)arg1 resolverInfo:(id)arg2;	// IMP=0x0010000000b4971b
- (void)didResolveCollection:(id)arg1 resolverInfo:(id)arg2;	// IMP=0x0010000000b49527
- (void)_updateActionColorsInCell:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b4950d
- (void)_updateDescriptionColorsInCell:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b494f3
- (void)_updateSubheaderColors;	// IMP=0x0010000000b492f4
@property(readonly, nonatomic) struct CGRect subheaderFrame;
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x0010000000b490a3
- (void)addToUserCollection:(id)arg1;	// IMP=0x0010000000b48fd4
- (void)startResolvingCollection;	// IMP=0x0010000000b48f89
- (void)_commonInitWithTableView:(id)arg1;	// IMP=0x0010000000b48c14
- (id)initWithTableView:(id)arg1 fullyClientizedCuratedCollection:(id)arg2;	// IMP=0x0010000000b48b4a
- (id)initWithTableView:(id)arg1 curatedCollectionIdentifier:(id)arg2;	// IMP=0x0010000000b48a80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CuratedCollectionDataSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
