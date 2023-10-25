//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFNaturalLightingActionDatabaseID, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFActionSet, MKFHAPAccessory, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFNaturalLightingAction
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000a983c2
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000a9830e
+ (Class)cd_modelClass;	// IMP=0x001000000081848d
+ (id)fetchRequest;	// IMP=0x0010000000d359b2
@property(readonly) id <MKFHome> home;
- (id)castIfNaturalLightingAction;	// IMP=0x0000000000a98409
@property(readonly, copy, nonatomic) MKFNaturalLightingActionDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFHAPAccessory> accessory; // @dynamic accessory;
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(copy, nonatomic) NSUUID *lightProfileUUID; // @dynamic lightProfileUUID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *naturalLightingEnabledField; // @dynamic naturalLightingEnabledField;
@property(retain, nonatomic) NSSet *serviceUUIDs; // @dynamic serviceUUIDs;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
