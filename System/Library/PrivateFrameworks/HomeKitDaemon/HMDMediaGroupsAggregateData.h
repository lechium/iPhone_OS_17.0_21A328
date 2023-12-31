//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregateData : NSObject
{
    NSArray *_destinations;	// 8 = 0x8
    NSArray *_destinationControllersData;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004de7f3
@property(copy) NSArray *groups; // @synthesize groups=_groups;
@property(copy) NSArray *destinationControllersData; // @synthesize destinationControllersData=_destinationControllersData;
@property(copy) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004de6d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004de6cc
- (id)description;	// IMP=0x00000000004de60f
- (unsigned long long)hash;	// IMP=0x00000000004de472
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004de196
- (id)sentinelGroup;	// IMP=0x00000000004de123
- (id)sentinelDestination;	// IMP=0x00000000004de0c6
- (id)sentinelDestinationControllerData;	// IMP=0x00000000004de053
- (id)sentinelIdentifier;	// IMP=0x00000000004de023
- (id)encodedMediaGroupEvents;	// IMP=0x00000000004ddd1b
- (id)encodedDestinationControllerEvents;	// IMP=0x00000000004ddbbd
- (id)encodedDestinationEvents;	// IMP=0x00000000004dda5f
- (id)encodeToProtoBufferData;	// IMP=0x00000000004dd927
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)arg1;	// IMP=0x00000000004dd84b
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)arg1;	// IMP=0x00000000004dd64e
- (id)decodeDestinationsWithEncodedDestinations:(id)arg1;	// IMP=0x00000000004dd451
- (id)initWithProtoBufferData:(id)arg1;	// IMP=0x00000000004dd20a
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x00000000004dd13a
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2;	// IMP=0x00000000004dd121
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2 groups:(id)arg3;	// IMP=0x00000000004dd035

@end

