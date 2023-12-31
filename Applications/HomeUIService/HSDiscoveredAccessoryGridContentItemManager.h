//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFAccessoryBrowsingManager, NSString;

@interface HSDiscoveredAccessoryGridContentItemManager : HUServiceGridItemManager
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 8 = 0x8
}

+ (CDUnknownBlockType)_discoveredAccessoryItemComparator;	// IMP=0x0020000000056083
- (void).cxx_destruct;	// IMP=0x002000000005665e
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (void)_reloadDiscoveredAccessoryItemProviderWithSenderSelector:(SEL)arg1;	// IMP=0x0010000000056514
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewSharingDevice:(id)arg2;	// IMP=0x00100000000564ff
- (void)accessoryBrowsingManager:(id)arg1 didFindNewSharingDevice:(id)arg2;	// IMP=0x00100000000564ea
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewAccessory:(id)arg2;	// IMP=0x00100000000564d5
- (void)accessoryBrowsingManager:(id)arg1 didFindNewAccessory:(id)arg2;	// IMP=0x00100000000564c0
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0010000000055c15
- (_Bool)_shouldBuildItemProvidersAndModulesForNilHome;	// IMP=0x0010000000055c0d
- (void)_unregisterForExternalUpdates;	// IMP=0x0010000000055b9c
- (void)_registerForExternalUpdates;	// IMP=0x0010000000055b2b
- (id)initWithAccessoryBrowsingManager:(id)arg1 delegate:(id)arg2 discoveredAccessoryFilter:(id)arg3;	// IMP=0x001000000005591d
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055867

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

