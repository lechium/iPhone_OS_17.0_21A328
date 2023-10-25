//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, MISSING_TYPE, MKMapItem, NSString;

@interface _TtC4Maps27FindMyHandleWaypointRequest : NSObject
{
    MISSING_TYPE *handle;	// 8 = 0x8
    MISSING_TYPE *location;	// 16 = 0x10
    MISSING_TYPE *cachedLoadResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000063e0
- (id)init;	// IMP=0x0010000000006380
@property(nonatomic, readonly) NSString *handleIdentifier;
@property(nonatomic, readonly) CNContact *contact;
@property(nonatomic, readonly) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000000061d0
- (id)copyWithZone:(void *)arg1;	// IMP=0x0010000000006040
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000005e70
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005990
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x0010000000005240
@property(nonatomic, readonly) _Bool hasCachedResult;
@property(nonatomic, readonly) MKMapItem *mapItemForLocationComparison;
- (_Bool)isCurrentLocation;	// IMP=0x0010000000004e80
@property(nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
- (id)initWithHandle:(id)arg1 location:(id)arg2;	// IMP=0x0010000000004dd0

// Remaining properties
@property(nonatomic, readonly) _Bool currentLocation;

@end
