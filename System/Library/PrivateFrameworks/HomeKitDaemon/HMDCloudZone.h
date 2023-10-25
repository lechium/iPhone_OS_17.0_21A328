//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, CKRecordZone, CKRecordZoneSubscription, CKServerChangeToken, HMDBackingStoreCacheZone, HMDCloudCache, HMDCloudGroup, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudZone : HMFObject
{
    _Bool _recordsAvailable;	// 8 = 0x8
    _Bool _decrypted;	// 9 = 0x9
    HMDCloudCache *_cache;	// 16 = 0x10
    CKRecordZone *_zone;	// 24 = 0x18
    HMDCloudGroup *_rootGroup;	// 32 = 0x20
    NSString *_subscriptionName;	// 40 = 0x28
    CKRecordZoneSubscription *_subscription;	// 48 = 0x30
    CKServerChangeToken *_serverChangeToken;	// 56 = 0x38
    HMDBackingStoreCacheZone *_backingStoreZone;	// 64 = 0x40
}

+ (id)shortDescription;	// IMP=0x006000000038d4c0
+ (void)createZoneWithName:(id)arg1 rootRecordName:(id)arg2 subscriptionName:(id)arg3 owner:(id)arg4 cacheZone:(id)arg5 cloudCache:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x006000000038cd44
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x006000000038cd37
+ (id)zoneRootRecordName;	// IMP=0x006000000038cd18
- (void).cxx_destruct;	// IMP=0x000000000038c7a6
@property(retain, nonatomic) HMDBackingStoreCacheZone *backingStoreZone; // @synthesize backingStoreZone=_backingStoreZone;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSString *subscriptionName; // @synthesize subscriptionName=_subscriptionName;
@property(nonatomic, getter=hasDecrypted) _Bool decrypted; // @synthesize decrypted=_decrypted;
@property(nonatomic, getter=hasRecordsAvailable) _Bool recordsAvailable; // @synthesize recordsAvailable=_recordsAvailable;
@property(retain, nonatomic) HMDCloudGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(retain, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) __weak HMDCloudCache *cache; // @synthesize cache=_cache;
- (void)updateServerChangeToken:(id)arg1;	// IMP=0x000000000038c652
- (void)updateCurrentServerChangeToken;	// IMP=0x000000000038c425
- (void)deleteZone;	// IMP=0x000000000038c1aa
- (void)_initializeServerChangeToken:(id)arg1;	// IMP=0x000000000038c196
- (void)_initializeSubscription:(id)arg1;	// IMP=0x000000000038c182
@property(readonly, nonatomic, getter=hasServerTokenAvailable) _Bool serverTokenAvailable;
@property(readonly, nonatomic) NSString *owner;
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;	// IMP=0x000000000038bf0b
- (void)deleteCloudRecord:(id)arg1;	// IMP=0x000000000038bea2
- (void)deleteCloudRecordNames:(id)arg1;	// IMP=0x000000000038be39
- (void)updateCloudRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038bdae
- (void)updateCloudRecord:(id)arg1;	// IMP=0x000000000038bd45
- (_Bool)isRootCloudRecord:(id)arg1;	// IMP=0x000000000038bcf1
- (_Bool)isRootRecord:(id)arg1;	// IMP=0x000000000038bc83
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;	// IMP=0x000000000038bbca
- (void)markMigratedObjectsAsMigrated;	// IMP=0x000000000038ba5b
- (void)fetchMigratedObjects:(CDUnknownBlockType)arg1;	// IMP=0x000000000038b90d
- (void)fetchAllObjects:(CDUnknownBlockType)arg1;	// IMP=0x000000000038b7c2
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038b617
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038b46c
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038b2c1
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038b114
- (id)cloudRecordWithObjectID:(id)arg1;	// IMP=0x000000000038b09a
- (id)__cloudRecordWithObjectID:(id)arg1;	// IMP=0x000000000038b020
- (id)createCloudRecordWithFetchResult:(id)arg1;	// IMP=0x000000000038acf0
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;	// IMP=0x000000000038ac6f
- (void)cloudRecordWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038aac4
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038a917
- (id)cloudRecordWithName:(id)arg1;	// IMP=0x000000000038a89d
@property(readonly, nonatomic, getter=doesProcessChangeEvenIfDecryptionFails) _Bool processChangeEvenIfDecryptionFails;
- (id)description;	// IMP=0x000000000038a829
- (id)shortDescription;	// IMP=0x000000000038a767
- (id)initWithBackingStoreCacheZone:(id)arg1 cloudCache:(id)arg2;	// IMP=0x000000000038a66b
- (id)init;	// IMP=0x000000000038a5c3
@property(readonly, nonatomic) NSString *zoneRootRecordName;

@end
