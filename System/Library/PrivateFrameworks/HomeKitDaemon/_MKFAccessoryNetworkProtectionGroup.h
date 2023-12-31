//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFAccessoryNetworkProtectionGroupDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFAccessoryNetworkProtectionGroup
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000932426
+ (id)homeRelation;	// IMP=0x00100000009323f6
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000009323dd
+ (Class)cd_modelClass;	// IMP=0x00100000009b26ea
+ (id)fetchRequest;	// IMP=0x0010000000d35072
- (id)castIfAccessoryNetworkProtectionGroup;	// IMP=0x00000000009324ab
@property(readonly, copy, nonatomic) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *targetProtectionMode; // @dynamic targetProtectionMode;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

