//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSDictionary;
@protocol MKMapServiceCuratedCollectionTicket;

@interface RecentCuratedCollectionResolver : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    id <MKMapServiceCuratedCollectionTicket> _ticket;	// 16 = 0x10
    NSArray *_recentCuratedCollections;	// 24 = 0x18
    NSDictionary *_resolvedCuratedCollections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000753a56
@property(readonly, nonatomic) NSDictionary *resolvedCuratedCollections; // @synthesize resolvedCuratedCollections=_resolvedCuratedCollections;
@property(copy, nonatomic) NSArray *recentCuratedCollections; // @synthesize recentCuratedCollections=_recentCuratedCollections;
- (void)_notifyObservers;	// IMP=0x0010000000753a29
- (void)_mergeCollections:(id)arg1 error:(id)arg2;	// IMP=0x0010000000753434
- (void)_startTicket;	// IMP=0x0010000000753199
- (void)_cancelTicket;	// IMP=0x0010000000753167
- (id)_collectionsNeedingResolution;	// IMP=0x00100000007530d3
- (id)resolvedGEOPlaceCollectionForMapsSyncHistoryCuratedCollection:(id)arg1;	// IMP=0x0010000000752f34
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)dealloc;	// IMP=0x0010000000752d17

@end

