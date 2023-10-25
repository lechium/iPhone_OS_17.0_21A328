//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSSet, NSString, NSUUID, REMCDTemplate;

@interface REMCDSavedReminder
{
}

+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x0020000000331390
+ (id)cdEntityName;	// IMP=0x0010000000331250
+ (_Bool)isAbstract;	// IMP=0x0010000000331230
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000428660
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000426660
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000426210
+ (id)recordTypes;	// IMP=0x00100000004260e0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0040000000331b60
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x00100000003315c0
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x00100000003312e0
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x0010000000425df0
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000428a60
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000428950
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000004286f0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x0010000000428680
- (void)fixBrokenReferences;	// IMP=0x0010000000428620
- (id)newlyCreatedRecord;	// IMP=0x0010000000427f60
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000427420
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000004267d0
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000004267b0
- (id)recordType;	// IMP=0x0010000000426770
- (id)recordZoneName;	// IMP=0x0010000000426710

// Remaining properties
@property(nonatomic, copy) NSSet *attachments; // @dynamic attachments;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSDate *displayDateDate; // @dynamic displayDateDate;
@property(nonatomic) _Bool displayDateIsAllDay; // @dynamic displayDateIsAllDay;
@property(nonatomic) _Bool hasHashtags; // @dynamic hasHashtags;
@property(nonatomic) _Bool hasLocationTriggersOrVehicleEventTriggers; // @dynamic hasLocationTriggersOrVehicleEventTriggers;
@property(nonatomic, copy) NSData *metadata; // @dynamic metadata;
@property(nonatomic, copy) NSUUID *parentSavedReminderIdentifier; // @dynamic parentSavedReminderIdentifier;
@property(nonatomic, retain) NSNumber *priority; // @dynamic priority;
@property(nonatomic, retain) REMCDTemplate *template; // @dynamic template;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end
