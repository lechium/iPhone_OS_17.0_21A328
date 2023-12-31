//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class AXSBQuickSettingsData, MISSING_TYPE, NSArray, NSString, NSTimer, UISearchController;

@interface VOTQuickSettingsListViewController : PSListController
{
    UISearchController *_searchController;	// 192 = 0xc0
    MISSING_TYPE *_data;	// 200 = 0xc8
    NSArray *_allSpecifiers;	// 208 = 0xd0
    NSArray *_filteredSpecifiers;	// 216 = 0xd8
    long long _mode;	// 224 = 0xe0
    id _settingsItemUpdateObserverToken;	// 232 = 0xe8
    NSTimer *_speakFilteredItemSummaryTimer;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000000076ac
@property(retain, nonatomic) NSTimer *speakFilteredItemSummaryTimer; // @synthesize speakFilteredItemSummaryTimer=_speakFilteredItemSummaryTimer;
@property(retain, nonatomic) id settingsItemUpdateObserverToken; // @synthesize settingsItemUpdateObserverToken=_settingsItemUpdateObserverToken;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *filteredSpecifiers; // @synthesize filteredSpecifiers=_filteredSpecifiers;
@property(retain, nonatomic) NSArray *allSpecifiers; // @synthesize allSpecifiers=_allSpecifiers;
@property(retain, nonatomic) AXSBQuickSettingsData *data; // @synthesize data=_data;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void)setSpecifierValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0010000000007528
- (id)specifierValue:(id)arg1;	// IMP=0x001000000000744b
- (id)_specifierForItem:(id)arg1;	// IMP=0x0010000000007253
- (void)_filterContentForSearchText:(id)arg1;	// IMP=0x0010000000006d96
- (_Bool)_isFiltering;	// IMP=0x0010000000006d29
- (_Bool)_isSearchBarEmpty;	// IMP=0x0010000000006c90
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000000067ae
- (id)specifiers;	// IMP=0x001000000000671f
- (long long)tableViewStyle;	// IMP=0x0010000000006714
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000670c
- (void)viewDidLoad;	// IMP=0x001000000000646e
- (void)dealloc;	// IMP=0x00100000000063d3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000061d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

