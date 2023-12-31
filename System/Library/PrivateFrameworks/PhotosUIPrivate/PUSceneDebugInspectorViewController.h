//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary, NSString, PFSceneTaxonomy, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorViewController : UITableViewController
{
    PFSceneTaxonomy *_sceneTaxonomy;	// 8 = 0x8
    UIView *_loadingContentView;	// 16 = 0x10
    UIBarButtonItem *_sortButton;	// 24 = 0x18
    UIBarButtonItem *_shareButton;	// 32 = 0x20
    NSArray *_sceneViewModelsAll;	// 40 = 0x28
    NSArray *_sceneViewModelsSearched;	// 48 = 0x30
    NSDictionary *_groupedSceneViewModels;	// 56 = 0x38
    NSArray *_groupedSceneViewModelTitles;	// 64 = 0x40
}

+ (id)highestConfidenceForAsset:(id)arg1 sceneIdentifier:(id)arg2;	// IMP=0x00100000004f1ad5
+ (id)_assetGridViewControllerForViewModel:(id)arg1 interfaceIdiom:(long long)arg2;	// IMP=0x00100000004f1920
+ (id)_commaSeparatedValueRepresentation:(id)arg1;	// IMP=0x00100000004f14a2
+ (id)_titleForSortOrder:(unsigned long long)arg1;	// IMP=0x00100000004f147e
+ (_Bool)_isAscendingForSortOrder:(unsigned long long)arg1;	// IMP=0x00100000004f1464
+ (id)_keyForSortOrder:(unsigned long long)arg1;	// IMP=0x00100000004f1440
+ (id)_shortTitlesForSectionTitles:(id)arg1 SortOrder:(unsigned long long)arg2;	// IMP=0x00100000004f11c0
+ (id)_sectionTitleForSceneViewModel:(id)arg1 sortOrder:(unsigned long long)arg2;	// IMP=0x00100000004f0fc9
+ (id)_sortedSceneViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;	// IMP=0x00100000004f0e5b
- (void).cxx_destruct;	// IMP=0x00000000004efeac
@property(copy, nonatomic) NSArray *groupedSceneViewModelTitles; // @synthesize groupedSceneViewModelTitles=_groupedSceneViewModelTitles;
@property(copy, nonatomic) NSDictionary *groupedSceneViewModels; // @synthesize groupedSceneViewModels=_groupedSceneViewModels;
@property(copy, nonatomic) NSArray *sceneViewModelsSearched; // @synthesize sceneViewModelsSearched=_sceneViewModelsSearched;
@property(copy, nonatomic) NSArray *sceneViewModelsAll; // @synthesize sceneViewModelsAll=_sceneViewModelsAll;
- (void)didSelectShareButton:(id)arg1;	// IMP=0x00000000004efb18
@property(readonly, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) NSArray *currentSceneViewModels;
- (void)_reloadTableViewByGroupingViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;	// IMP=0x00000000004ef369
- (void)didSelectSortButton:(id)arg1;	// IMP=0x00000000004ef0a6
@property(readonly, nonatomic) UIBarButtonItem *sortButton; // @synthesize sortButton=_sortButton;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000004eec67
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004eea83
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000004ee9e4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000004ee985
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004ee7fa
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004ee73a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000004ee6f6
- (void)didSelectDoneButton:(id)arg1;	// IMP=0x00000000004ee6dd
@property(readonly, nonatomic) UIView *loadingContentView; // @synthesize loadingContentView=_loadingContentView;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004ee242
- (void)viewDidLoad;	// IMP=0x00000000004ede1a
- (id)sceneTaxonomy;	// IMP=0x00000000004edda9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

