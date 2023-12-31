//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelCloudReference, NSData, NSDate, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDFaceCropModel : HMBModel
{
}

+ (id)faceCropsWithUnassociatedFaceCropUUIDQuery;	// IMP=0x004000000001433a
+ (id)faceCropsForPersonUUIDQuery;	// IMP=0x004000000001430a
+ (id)sentinelParentUUID;	// IMP=0x00400000000142da
+ (id)hmbQueries;	// IMP=0x0040000000014217
+ (id)hmbProperties;	// IMP=0x00400000000141e7
@property long long source;
@property struct CGRect faceBoundingBox;
- (id)createPersonFaceCrop;	// IMP=0x0000000000014b6d
- (id)initWithPersonFaceCrop:(id)arg1;	// IMP=0x00000000000149a4

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;
@property(retain) HMBModelCloudReference *person; // @dynamic person;
@property(retain) NSUUID *personUUID; // @dynamic personUUID;
@property(retain) NSNumber *sourceField; // @dynamic sourceField;
@property(retain) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

@end

