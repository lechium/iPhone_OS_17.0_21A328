//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (GKResource)
+ (id)_gkSetOfResourcesWithIDs:(id)arg1;	// IMP=0x0010000000117a51
- (_Bool)_gkContainsInvalidResource;	// IMP=0x0020000000118112
- (_Bool)_gkContainsExpiredResource;	// IMP=0x00100000001180e4
- (_Bool)_gkContainsInvalidOrExpiredResource;	// IMP=0x001000000011807d
- (id)_gkAllResourceIDs;	// IMP=0x0010000000118064
- (id)_gkAllRepresentedItems;	// IMP=0x001000000011804b
- (id)_gkInvalidOrExpiredResources;	// IMP=0x0010000000117fe4
- (id)_gkValidAndNonExpiredResources;	// IMP=0x0010000000117f77
- (id)_gkInvalidResources;	// IMP=0x0010000000117f49
- (id)_gkExpiredResources;	// IMP=0x0010000000117f1b
- (_Bool)_gkContainsObjectPassingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117dcb
- (id)_gkResourceWithID:(id)arg1;	// IMP=0x0010000000117cb0
- (id)_gkResourcesWithIDs:(id)arg1;	// IMP=0x0010000000117ae1
@end

