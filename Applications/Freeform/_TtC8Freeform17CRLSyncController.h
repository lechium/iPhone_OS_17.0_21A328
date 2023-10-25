//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform17CRLSyncController : NSObject
{
    MISSING_TYPE *syncScope;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 16 = 0x10
    MISSING_TYPE *syncLogicProvider;	// 32 = 0x20
    MISSING_TYPE *fetchStatusObserver;	// 48 = 0x30
    MISSING_TYPE *syncEngine;	// 64 = 0x40
    MISSING_TYPE *syncEngineDataSource;	// 72 = 0x48
    MISSING_TYPE *queue;	// 80 = 0x50
    MISSING_TYPE *saveTask;	// 88 = 0x58
    MISSING_TYPE *targetedFetchTasks;	// 96 = 0x60
    MISSING_TYPE *throttlingScheduler;	// 104 = 0x68
    MISSING_TYPE *syncEngineFetchedRecords;	// 112 = 0x70
    MISSING_TYPE *purgedRecordIDs;	// 120 = 0x78
    MISSING_TYPE *purgedRecordZoneIDs;	// 128 = 0x80
    MISSING_TYPE *zoneIDsToResetDueToUserEncryptionDataReset;	// 136 = 0x88
    MISSING_TYPE *syncMetadata;	// 144 = 0x90
    MISSING_TYPE *shouldFetchAssets;	// 160 = 0xa0
    MISSING_TYPE *accountChangeObserverManager;	// 168 = 0xa8
    MISSING_TYPE *disableSyncing;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0040000000909620
- (id)init;	// IMP=0x00100000009095c0
- (void)syncEngine:(id)arg1 accountChangedFromUserRecordID:(id)arg2 toUserRecordID:(id)arg3;	// IMP=0x0010000000909530
- (_Bool)syncEngine:(id)arg1 shouldFetchAssetContentsForZoneID:(id)arg2;	// IMP=0x0010000000909010
- (void)syncEngineDidEndFetchingChanges:(id)arg1;	// IMP=0x0010000000908fc0
- (void)syncEngineWillBeginFetchingChanges:(id)arg1;	// IMP=0x0010000000908c80
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x0010000000908bf0
- (void)syncEngine:(id)arg1 zoneWithIDWasDeletedDueToUserEncryptedDataReset:(id)arg2;	// IMP=0x0010000000908bd0
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000908b30
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x0010000000908b10
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x0010000000908af0
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x0010000000908ad0
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;	// IMP=0x00100000009089c0
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x00100000009089b0
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x00100000009089a0
- (void)syncEngineDidEndModifyingPendingChanges:(id)arg1;	// IMP=0x0010000000906150
- (void)syncEngine:(id)arg1 didCompleteModifyRecordsBatch:(id)arg2 error:(id)arg3;	// IMP=0x00100000009060d0
- (id)syncEngine:(id)arg1 nextBatchOfRecordsToModifyForZoneIDs:(id)arg2;	// IMP=0x0010000000905900
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x0010000000903680
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;	// IMP=0x00100000009035f0
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x00100000009035b0
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000903590
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x0010000000903510

@end
