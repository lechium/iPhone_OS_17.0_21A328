//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface STMostUsedGroupSpecifierProvider
{
    NSDictionary *_allowancesByActiveBudgetedIdentifier;	// 8 = 0x8
    unsigned long long _selectedItemType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007d2fb
@property(nonatomic) unsigned long long selectedItemType; // @synthesize selectedItemType=_selectedItemType;
@property(copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier; // @synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier;
- (id)allowanceIconForUsageItem:(id)arg1;	// IMP=0x000000000007cf73
- (void)showMostUsedDetailListController:(id)arg1;	// IMP=0x000000000007ce2e
- (void)reloadMostUsedSpecifiers;	// IMP=0x000000000007cbcd
- (void)toggleSelectedItemType:(id)arg1;	// IMP=0x000000000007cb6b
- (id)getUsageItem:(id)arg1;	// IMP=0x000000000007cb56
- (void)loadActiveBudgetedIdentifiers;	// IMP=0x000000000007c31e
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;	// IMP=0x000000000007c229
- (id)newSpecifierWithUsageItem:(id)arg1;	// IMP=0x000000000007c097
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000007bfdb
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000007be3c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007bb74
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000007ba6c
- (id)init;	// IMP=0x000000000007b88e

@end

