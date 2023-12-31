//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSMutableArray, NSString, Route;
@protocol OS_dispatch_queue;

@interface TrafficIncidentsSourceManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    Route *_selectedRoute;	// 16 = 0x10
    NSMutableArray *_cachedVKTrafficIncidentFeatureItems;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cachedVKTrafficIncidentFeatureItemsLockQueue;	// 32 = 0x20
    NSMutableArray *_cachedIncidentsPersonalizedItems;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_cachedIncidentsPersonalizedItemsLockQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000735a5e
- (void).cxx_destruct;	// IMP=0x0020000000736a38
- (void)incidentsStorageManagerDidUpdate;	// IMP=0x0010000000736a26
- (void)incidentsStorageManagerDidAddReport:(id)arg1;	// IMP=0x0010000000736933
- (void)_refreshDataSource;	// IMP=0x00100000007366c2
- (void)_addReport:(id)arg1;	// IMP=0x0010000000736580
- (id)_VKTrafficIncidentFeatureForIncidentReport:(id)arg1;	// IMP=0x00100000007363b7
- (void)_addVKTrafficIncidentFeatureItemToCache:(id)arg1;	// IMP=0x0010000000736304
- (id)cachedVKTrafficIncidentFeatureItemsForSelectedRoute:(id)arg1;	// IMP=0x0010000000735e3d
- (id)cachedIncidentsPersonalizedItems;	// IMP=0x0010000000735d25
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000735cbc
- (void)addObserver:(id)arg1;	// IMP=0x0010000000735c53
- (id)observers;	// IMP=0x0010000000735bfa
- (id)init;	// IMP=0x0010000000735ab3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

