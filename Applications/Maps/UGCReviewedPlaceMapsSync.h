//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, _TtC4Maps19CommunityIDMapsSync, _TtC8MapsSync26MapsSyncReviewedPlaceQuery;

@interface UGCReviewedPlaceMapsSync : NSObject
{
    _TtC8MapsSync26MapsSyncReviewedPlaceQuery *_query;	// 8 = 0x8
    _TtC4Maps19CommunityIDMapsSync *_communityIDMapsSync;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000736ab8
- (void).cxx_destruct;	// IMP=0x00200000007388e8
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x0010000000738868
- (void)clearAllUserData;	// IMP=0x001000000073852c
- (void)_dispatchToWorkQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000738426
- (void)_buildMapsSyncReviewedPlace:(id)arg1 communityID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000737ed5
- (void)addOrEditReviewedPlace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000737b4a
- (void)removeReviewedPlaceWithMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007376a7
- (void)fetchAllHistoryObjectsFromStorageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007374dd
- (void)fetchReviewedPlaceForMUID:(unsigned long long)arg1 muidHistory:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000736d75
- (void)fetchReviewedPlaceForMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000736d59
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000736cf0
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000736c87
- (void)_usingOfflineMapsDidChange:(id)arg1;	// IMP=0x0010000000736c22
- (id)init;	// IMP=0x0010000000736b0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

