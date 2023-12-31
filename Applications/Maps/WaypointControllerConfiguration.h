//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSArray;
@protocol WaypointRequest;

@interface WaypointControllerConfiguration : NSObject
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000080fa17
@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) id <WaypointRequest> destination;
@property(readonly, nonatomic) id <WaypointRequest> origin;
- (id)debugDescription;	// IMP=0x001000000080f8f2
- (id)description;	// IMP=0x001000000080f839
- (id)initWithRequests:(id)arg1 traits:(id)arg2;	// IMP=0x001000000080f6d7

@end

