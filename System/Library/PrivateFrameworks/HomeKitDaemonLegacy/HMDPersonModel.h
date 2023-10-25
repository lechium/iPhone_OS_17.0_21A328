//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDPersonModel : HMBModel
{
}

+ (id)sentinelParentUUID;	// IMP=0x00400000006bc402
+ (id)hmbProperties;	// IMP=0x00400000006bc3d2
- (id)createPerson;	// IMP=0x00000000006bca62
- (id)initWithPerson:(id)arg1;	// IMP=0x00000000006bc94d
@property(copy) NSSet *personLinks;

// Remaining properties
@property(retain) NSString *name; // @dynamic name;
@property(retain) NSData *personLinksData; // @dynamic personLinksData;

@end
