//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC6HomeUI29DashboardFilterBarItemManager : HFItemManager
{
    MISSING_TYPE *categoryItemProvider;	// 8 = 0x8
    MISSING_TYPE *actionSetItemProvider;	// 16 = 0x10
    MISSING_TYPE *energyHelper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043560
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x0000000000045910
- (void)executionEnvironmentDidBecomeActive:(id)arg1;	// IMP=0x0000000000044a90
- (void)homeDidUpdateHomeEnergyManagerEnabled:(id)arg1;	// IMP=0x00000000000449f0
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;	// IMP=0x0000000000044910
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000000444a0
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000044040
- (void)dealloc;	// IMP=0x00000000000434d0

@end
