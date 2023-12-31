//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFBulletinRegistrationDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFBulletinRegistration
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000006807c9
+ (id)homeRelation;	// IMP=0x0010000000680799
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000006806e5
+ (id)fetchRequest;	// IMP=0x0010000000d351d2
- (void)removeConditionsObject:(id)arg1;	// IMP=0x0000000000680aee
- (void)addConditionsObject:(id)arg1;	// IMP=0x0000000000680ad2
- (id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;	// IMP=0x0000000000680aaf
- (id)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;	// IMP=0x0000000000680a8c
- (id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000680a66
- (id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;	// IMP=0x0000000000680a43
- (id)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;	// IMP=0x0000000000680a20
- (id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000006809fa
- (id)createConditionsRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x000000000068097f
- (id)materializeOrCreateConditionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000006808fe
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly) id <MKFHome> home;
- (id)castIfBulletinRegistration;	// IMP=0x000000000068084e
@property(readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
- (void)residentSyncContextualizeConditions:(id)arg1 userContext:(id)arg2;	// IMP=0x0000000000822014

// Remaining properties
@property(retain, nonatomic) NSSet *conditions_; // @dynamic conditions_;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination; // @dynamic deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier; // @dynamic deviceIdsIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user; // @dynamic user;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

