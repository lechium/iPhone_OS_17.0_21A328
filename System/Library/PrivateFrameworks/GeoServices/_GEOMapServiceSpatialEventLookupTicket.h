//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialEventLookupTicket
{
    NSArray *_parameters;	// 304 = 0x130
}

+ (unsigned long long)maxParametersCount;	// IMP=0x00100000007b0495
- (void).cxx_destruct;	// IMP=0x00000000007b1a2b
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)callCompletion:(CDUnknownBlockType)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;	// IMP=0x00000000007b18bb
- (id)eventsForEventLookupResponses:(id)arg1 usingIdentifierToEventMap:(id)arg2;	// IMP=0x00000000007b1545
- (id)spatialEventLookupResultsFromResponse:(id)arg1;	// IMP=0x00000000007b14bb
- (id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)arg1;	// IMP=0x00000000007b12a1
- (void)createSpatialEventLookupResultForLookupResults:(id)arg1 usingPlaces:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000007b101b
- (void)handleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x00000000007b0afa
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 queue:(id)arg3;	// IMP=0x00000000007b0545
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000000007b052e
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;	// IMP=0x00000000007b04ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

