//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSArray, NSString;
@protocol MKMapServiceAllCollectionsViewTicket, MKMapServiceCuratedCollectionTicket;

@interface AllCollectionsAPIController : NSObject
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    CDUnknownBlockType _stateHandler;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    id <MKMapServiceAllCollectionsViewTicket> _ticket;	// 32 = 0x20
    id <MKMapServiceCuratedCollectionTicket> _batchTicket;	// 40 = 0x28
    NSArray *_filters;	// 48 = 0x30
    NSArray *_collectionResults;	// 56 = 0x38
    NSArray *_placeCollections;	// 64 = 0x40
    NSArray *_collectionIds;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001f07e1
@property(retain, nonatomic) NSArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(retain, nonatomic) NSArray *collectionResults; // @synthesize collectionResults=_collectionResults;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) id <MKMapServiceCuratedCollectionTicket> batchTicket; // @synthesize batchTicket=_batchTicket;
@property(retain, nonatomic) id <MKMapServiceAllCollectionsViewTicket> ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType stateHandler; // @synthesize stateHandler=_stateHandler;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)fetchGuidesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f032e
- (void)cancelFetchingAllCollections;	// IMP=0x00100000001f02ad
- (void)fetchAllCollectionsViewForKeywordFilter:(id)arg1 addressFilter:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001efb86
- (unsigned int)batchSize;	// IMP=0x00100000001efb7b
- (id)placeCollectionsFromLastBatch;	// IMP=0x00100000001efb33
- (id);	// IMP=0x00100000001efb25
- (id)allCollectionViewIdentifiers;	// IMP=0x00100000001efb13
- (id)allCollectionViewFilters;	// IMP=0x00100000001efb01
@property(readonly, nonatomic) long long currentState;
- (id)initWithOnStateChangeHandler:(CDUnknownBlockType)arg1 usingTraits:(id)arg2;	// IMP=0x00100000001efa48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

