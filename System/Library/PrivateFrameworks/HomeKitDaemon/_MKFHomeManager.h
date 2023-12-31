//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeManagerDatabaseID, NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFHAPMetadata, MKFHomeManagerHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeManager
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000006486da
+ (id)fetchWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006484b5
+ (id)defaultModelID;	// IMP=0x0010000000648485
+ (Class)cd_modelClass;	// IMP=0x0010000000c8bea7
+ (id)fetchRequest;	// IMP=0x0010000000d35792
- (id)materializeOrCreateMetadataRelation:(_Bool *)arg1;	// IMP=0x000000000064845f
- (id)findIncomingInvitationsRelationWithModelID:(id)arg1;	// IMP=0x000000000064843c
- (id)materializeOrCreateIncomingInvitationsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000648416
@property(readonly, retain, nonatomic) NSArray *incomingInvitations;
- (id)findHomesRelationWithModelID:(id)arg1;	// IMP=0x000000000064839c
- (id)materializeOrCreateHomesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000648376
@property(readonly, retain, nonatomic) NSArray *homes;
- (id)findAccountsRelationWithModelID:(id)arg1;	// IMP=0x00000000006482fc
- (id)materializeOrCreateAccountsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000006482d6
@property(readonly, retain, nonatomic) NSArray *accounts;
- (id)castIfHomeManager;	// IMP=0x0000000000648276
@property(readonly, copy, nonatomic) MKFHomeManagerDatabaseID *databaseID;
- (_Bool)validateModelID:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000648764
- (void)awakeFromInsert;	// IMP=0x00000000006486eb
- (id)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000c8b867

// Remaining properties
@property(retain, nonatomic) NSSet *accounts_; // @dynamic accounts_;
@property(retain, nonatomic) NSDictionary *appDataDictionary; // @dynamic appDataDictionary;
@property(copy, nonatomic) NSNumber *assistantSyncDataPosted; // @dynamic assistantSyncDataPosted;
@property(copy, nonatomic) NSString *controllerKeyIdentifier; // @dynamic controllerKeyIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(retain, nonatomic) NSSet *homes_; // @dynamic homes_;
@property(retain, nonatomic) NSSet *incomingInvitations_; // @dynamic incomingInvitations_;
@property(retain, nonatomic) id <MKFHAPMetadata> metadata; // @dynamic metadata;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(retain, nonatomic) NSArray *pairingAppleAccessories; // @dynamic pairingAppleAccessories;
@property(retain, nonatomic) id <MKFHomeManagerHome> primaryHome; // @dynamic primaryHome;
@property(copy, nonatomic) NSUUID *primitiveModelID; // @dynamic primitiveModelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

