//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, STAllowanceItemSearchResultsController;

__attribute__((visibility("hidden")))
@interface STAllowanceItemSetupListController : PSListController
{
    _Bool _allAppsAndCategoriesSelected;	// 192 = 0xc0
    NSMutableOrderedSet *_selectedBundleIdentifiers;	// 200 = 0xc8
    NSMutableOrderedSet *_selectedWebDomains;	// 208 = 0xd0
    NSMutableOrderedSet *_selectedCategoryIdentifiers;	// 216 = 0xd8
    NSArray *_categorySpecifiers;	// 224 = 0xe0
    NSMutableDictionary *_applicationAndWebDomainSpecifiersByCategoryIdentifier;	// 232 = 0xe8
    STAllowanceItemSearchResultsController *_searchResultsController;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000001146f
@property(retain) STAllowanceItemSearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(readonly, nonatomic) NSMutableDictionary *applicationAndWebDomainSpecifiersByCategoryIdentifier; // @synthesize applicationAndWebDomainSpecifiersByCategoryIdentifier=_applicationAndWebDomainSpecifiersByCategoryIdentifier;
@property(copy) NSArray *categorySpecifiers; // @synthesize categorySpecifiers=_categorySpecifiers;
@property(readonly) NSMutableOrderedSet *selectedCategoryIdentifiers; // @synthesize selectedCategoryIdentifiers=_selectedCategoryIdentifiers;
@property(readonly) NSMutableOrderedSet *selectedWebDomains; // @synthesize selectedWebDomains=_selectedWebDomains;
@property(readonly) NSMutableOrderedSet *selectedBundleIdentifiers; // @synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers;
@property _Bool allAppsAndCategoriesSelected; // @synthesize allAppsAndCategoriesSelected=_allAppsAndCategoriesSelected;
- (void)_selectCellsForSelectedIdentifiers:(id)arg1;	// IMP=0x0000000000010629
- (void)willDismissSearchController:(id)arg1;	// IMP=0x0000000000010135
- (void)willPresentSearchController:(id)arg1;	// IMP=0x000000000000fabc
- (void)_cleanUpRetainCycles;	// IMP=0x000000000000f956
- (void)_didPressDoneButton:(id)arg1;	// IMP=0x000000000000f7d6
- (void)_didPressCancelButton:(id)arg1;	// IMP=0x000000000000f76e
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f33b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ee31
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000000ed5c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000e985
- (void)_addCustomWebDomain:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000e229
- (void)_addWebsiteButtonPressed:(id)arg1;	// IMP=0x000000000000dfa6
- (id)_categoryDetailText:(id)arg1;	// IMP=0x000000000000dc32
- (id)_webDomainSpecifierForDomain:(id)arg1 usageItem:(id)arg2;	// IMP=0x000000000000d7ec
- (id)_categorySpecifierForIdentifier:(id)arg1;	// IMP=0x000000000000d4c9
- (id)_applicationSpecifierForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2;	// IMP=0x000000000000d2ee
- (void)_updateApplicationSpecifiersWithBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 shouldInsertSpecifier:(_Bool)arg3;	// IMP=0x000000000000d0c1
- (id)specifiers;	// IMP=0x000000000000bf59
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000000bcb8
- (void)_hasSelectionDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000000000bb76
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000b981
- (void)willResignActive;	// IMP=0x000000000000b915
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000b86b
- (void)_showNewCategoriesCompatibilityAlertIfNeeded;	// IMP=0x000000000000b21d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000a37e
- (void)viewDidLoad;	// IMP=0x0000000000009f23
- (long long)tableViewStyle;	// IMP=0x0000000000009f18
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x0000000000009f10
- (void)dealloc;	// IMP=0x0000000000009eb6
- (id)init;	// IMP=0x0000000000009dfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

