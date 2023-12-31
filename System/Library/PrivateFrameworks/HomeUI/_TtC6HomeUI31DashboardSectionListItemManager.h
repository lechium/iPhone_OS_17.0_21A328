//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HMHome, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC6HomeUI31DashboardSectionListItemManager : HFItemManager
{
    MISSING_TYPE *roomItemProvider;	// 8 = 0x8
    MISSING_TYPE *categoryItemProvider;	// 16 = 0x10
    MISSING_TYPE *staticItemProvider;	// 24 = 0x18
    MISSING_TYPE *sceneSectionItem;	// 32 = 0x20
    MISSING_TYPE *cameraSectionItem;	// 40 = 0x28
    MISSING_TYPE *favoriteSectionItem;	// 48 = 0x30
    MISSING_TYPE *room;	// 56 = 0x38
    MISSING_TYPE *reorderableSectionList;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005d270
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x000000000005d200
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x000000000005d160
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000005cb90
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000005c9a0
@property(nonatomic, retain) HMHome *home;

@end

