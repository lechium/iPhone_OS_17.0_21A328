//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudKitController, NSString;
@protocol BCCloudDataSyncProvider;

@interface BCCloudCollectionMemberManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_collectionMemberDataSource;	// 24 = 0x18
    id <BCCloudDataSyncProvider> _syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008a7a4
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) id <BCCloudDataSyncProvider> syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *collectionMemberDataSource; // @synthesize collectionMemberDataSource=_collectionMemberDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)fetchCollectionMembersInCollectionID:(id)arg1 maximumResultCount:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008a46f
- (void)getCollectionMemberChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a3d5
- (void)fetchMaxSortOrderInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a1aa
- (void)fetchCollectionMembersInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089fff
- (void)fetchCollectionMembersIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089f8a
- (void)collectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089de0
- (void)deleteCollectionMemberForCollectionMemberIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089d24
- (void)deleteCollectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089c68
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089b78
- (void)removeCollectionMemberForCollectionSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089a44
- (void)setCollectionMembers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089954
- (void)setCollectionMember:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008986b
- (void)currentCollectionMemberCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089802
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089799
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089730
- (void)setEnableCloudSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000893f7
- (id)diagnosticEntityInfos:(_Bool)arg1;	// IMP=0x00100000000892b8
- (id)entityName;	// IMP=0x00100000000892ab
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;	// IMP=0x001000000008920b
- (void)syncProvider:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008909b
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000089089
- (void)syncProvider:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088f19
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088f07
- (void)syncProvider:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088c94
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088c82
- (void)_removeCloudDataForIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088a1e
- (void)syncProvider:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088a06
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000889f4
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x0010000000088931
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088885
- (void)nextBatchOfMutableCloudDataToSaveToCKWithFetchLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000887ea
- (id)mutableCloudDataForRecordID:(id)arg1;	// IMP=0x001000000008872e
- (void)removedCloudRecordsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008866a
- (void)updatedCloudRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000884e6
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2 syncProvider:(id)arg3;	// IMP=0x001000000008833f
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x0010000000088254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

