//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableOrderedSet, NSMutableSet, NSString, PDCloudStoreContainerManager, PDCloudStoreRecordsRequest, PDCloudStoreResetRequest;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;

@interface PDCloudStoreContainer : NSObject
{
    NSMutableSet *_initializationCompletionHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_batchUpdateGroup;	// 24 = 0x18
    _Bool _shouldInvalidateCloudStore;	// 32 = 0x20
    NSDate *_lastInvalidationDate;	// 40 = 0x28
    _Bool _shouldCancelAllTasks;	// 48 = 0x30
    _Bool _isSetup;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    NSMutableOrderedSet *_fetchRequests;	// 72 = 0x48
    PDCloudStoreRecordsRequest *_currentRequest;	// 80 = 0x50
    NSMutableOrderedSet *_resetRequests;	// 88 = 0x58
    PDCloudStoreResetRequest *_currentResetRequest;	// 96 = 0x60
    _Bool _accountChangedNotificationReceived;	// 104 = 0x68
    _Bool _cloudContainerSetupInProgress;	// 105 = 0x69
    id <PDCloudStoreContainerDelegate> _delegate;	// 112 = 0x70
    id <PDCloudStoreDataSource> _dataSource;	// 120 = 0x78
    PDCloudStoreContainerManager *_containerManager;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_workQueue;	// 136 = 0x88
    NSError *_operationError;	// 144 = 0x90
    unsigned long long _nextExpectedState;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00200000001efb13
@property(nonatomic) _Bool cloudContainerSetupInProgress; // @synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress;
@property(nonatomic) _Bool accountChangedNotificationReceived; // @synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived;
@property(nonatomic) unsigned long long nextExpectedState; // @synthesize nextExpectedState=_nextExpectedState;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) PDCloudStoreContainerManager *containerManager; // @synthesize containerManager=_containerManager;
@property(readonly, nonatomic) __weak id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PDCloudStoreContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001ef84c
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;	// IMP=0x00100000001ef740
@property(readonly, copy) NSString *description;
- (void)_queue_cloudStoreInitializationTimerFired;	// IMP=0x00100000001ef5c1
- (void)_queue_cancelCloudStoreInitializationTimer;	// IMP=0x00100000001ef532
- (void)_queue_startCloudStoreInitializationTimer;	// IMP=0x00100000001ef3be
- (id)errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x00100000001ef2b5
- (void)_queue_addOperation:(id)arg1 forDatabase:(id)arg2;	// IMP=0x00100000001ef104
- (void)_queue_cancelAllOperations;	// IMP=0x00100000001eed1e
- (void)_queue_cancelOperationsForDatabse:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00100000001eea97
- (void)_queue_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001ee744
- (void)_fetchAllSubscriptionsIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ede38
- (void)_recordZonesWithOperationGroupNameSuffix:(id)arg1 containerDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed059
- (void)_fetchAndSaveRecordZonesWithContainerDatabaseIdentifiers:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ecb4b
- (void)_fetchRecordZonesIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ec9e0
- (void)_forceFetchRecordZonesForContainerDatabase:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ec88b
- (void)_zoneOperationWithZonesToSaveByDatabaseIdentifier:(id)arg1 recordZoneIDsToDeleteByDatabaseIdentifier:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001eb517
- (void)_deleteSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001eb1e9
- (void)_deleteAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eb0df
- (void)_deleteZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ead0e
- (void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eac07
- (void)_deleteZonesAndSubscriptionsWithResetRequest:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ea5d4
- (void)_subscriptionOperationWithSubscriptionsToSaveByDatabaseIdentifier:(id)arg1 subscriptionIDsToDeleteByDatabase:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001e953a
- (void)_fetchRecordsWithQuery:(id)arg1 cursor:(id)arg2 batchLimit:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 zone:(id)arg7 containerDatabase:(id)arg8 batchHandler:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000001e7c62
- (void)fetchRecordsWithQuery:(id)arg1 batchLimit:(long long)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 zone:(id)arg6 containerDatabase:(id)arg7 batchHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00100000001e7c1d
- (void)modifyRecordsOperationWithRecordsToSaveByDatabaseIdentifier:(id)arg1 recordIDsToDeleteByDatabaseIdentifier:(id)arg2 recordModificationOperationConfiguration:(id)arg3 emitErrorIfConflictDetected:(_Bool)arg4 operationGroupName:(id)arg5 operationGroupNameSuffix:(id)arg6 qualityOfService:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000001e4bbf
- (id)reportContainerChangeEvent:(id)arg1;	// IMP=0x00100000001e4b26
- (void)reportContainerChangeSignpostEventType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 changeToken:(id)arg4 error:(id)arg5 operationGroupName:(id)arg6 operationGroupNameSuffix:(id)arg7;	// IMP=0x00100000001e49a2
- (void)reportContainerChangeIntervalEndEventWithBeginUniqueIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00100000001e4947
- (id)reportContainerChangeIntervalBeginEventWithType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 changeToken:(id)arg4 operationGroupName:(id)arg5 operationGroupNameSuffix:(id)arg6;	// IMP=0x00100000001e47eb
- (id)reportContainerChangeIntervalBeginEventWithType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5;	// IMP=0x00100000001e47ca
- (_Bool)supportsContainerChangeEventReports;	// IMP=0x00100000001e47c2
- (void)_zoneWideShareForCloudStoreZone:(id)arg1 createIfNotExists:(_Bool)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e3b96
- (void)_fetchParticipantWithRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e3386
- (void)_shareMetadataWithInvitationTokensByShareURL:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e2c64
- (void)_updateShare:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e24cf
- (void)removedFromCloudStoreZoneInvitation:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000001e225c
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x00100000001e2256
- (void)_queue_aliasesForRecipientHandle:(id)arg1 zoneName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2240
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2226
- (void)cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2119
- (void)_queue_lockShareCreationForRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e0ef3
- (void)createShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 permission:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000001ddd05
- (void)shareForZoneName:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001dd721
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001dcb83
- (void)acceptShareInvitation:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001db9bc
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x00100000001db9b6
- (void)ensureZoneShareIntegrity;	// IMP=0x00100000001db952
- (void)createZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001db614
- (void)deleteZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001dadf1
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001dadeb
- (void)_executeNextResetRequestIfPossible;	// IMP=0x00100000001daa48
- (void)executeResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001da689
- (void)willResetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2;	// IMP=0x00100000001da683
- (void)resetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001da556
- (void)resetContainerWithZoneNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001da15a
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001d994c
- (void)removeItems:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001d8c83
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d835d
- (void)fetchItemsWithQueryConfigurations:(id)arg1 returnRecords:(_Bool)arg2 storeRecords:(_Bool)arg3 groupName:(id)arg4 groupSuffix:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001d7973
- (void)cloudStoreRecordArrayWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d7800
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d73b3
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 storeLocally:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d61ce
- (void)applePayContainerItemsFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d5403
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d465e
- (void)fetchRecordsWithRecordIDsByDatabaseIdentifier:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001d3052
- (void)_queue_processOperationError:(id)arg1 forZoneID:(id)arg2 containerDatabaseIdentifier:(id)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001d1727
- (void)_queue_fetchAllRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001cdedd
- (void)_queue_fetchInitialRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001cbe37
- (_Bool)shouldForwardErrorsToRequestCompletionHandlers;	// IMP=0x00100000001cbe2f
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x00100000001cbe27
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000001cbe21
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000001cbe19
- (void)_queue_executeNextFecthRequestIfPossible;	// IMP=0x00100000001c6e17
- (void)executeRecordsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c6a3d
- (void)_queue_createSubscriptionsByDatabaseIdentifier:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c6621
- (void)_queue_createZonesByDatabaseIdentifier:(id)arg1 shouldFetchData:(_Bool)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c5c8d
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c4662
- (void)_queue_createZoneAndSubscriptionsByDatabaseIdentifier:(id)arg1 groupSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c3ffb
- (void)_keychainSyncFinishedFired;	// IMP=0x00100000001c3ba8
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000001c3ba2
- (void)cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000001c3a58
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c3471
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c3455
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c23d6
- (void)_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c22da
- (void)_queue_cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c2020
- (void)cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c1f73
- (void)_queue_detachFromContainerWithState:(unsigned long long)arg1;	// IMP=0x00100000001c1ed5
- (void)_queue_attachToContainer;	// IMP=0x00100000001c1e52
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 resultOfZoneRecreation:(_Bool)arg3 zoneNames:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c13af
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 resultOfZoneRecreation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c138d
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c1368
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x00100000001c133f
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000001c1329
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x00100000001c1266
- (id)identifierFromRecord:(id)arg1;	// IMP=0x00100000001c1213
- (unsigned long long)itemTypeFromRecord:(id)arg1;	// IMP=0x00100000001c1171
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000001c115f
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000001c10eb
- (double)_queue_initializationTimeout;	// IMP=0x00100000001c10dd
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x00100000001c10d5
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x00100000001c10cd
- (void)canInitializeContainerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c1003
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00100000001c0ffb
- (void)setIsSetup:(_Bool)arg1;	// IMP=0x00100000001c0fca
- (_Bool)isSetup;	// IMP=0x00100000001c0fa2
- (_Bool)_queue_ensureContainerState:(unsigned long long)arg1;	// IMP=0x00100000001c0e6e
- (void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c0132
- (void)_cloudStoreContainerCommonInit;	// IMP=0x00100000001bffe3
- (id)initWithDataSource:(id)arg1;	// IMP=0x00100000001bff6f
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000001bfebe
- (void)_setupManagerWithConfiguration:(id)arg1;	// IMP=0x00100000001bfce4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

