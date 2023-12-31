//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAggregateZonePCSOperationInfo, CKArchiveRecordsOperationInfo, CKCompleteParticipantVettingOperationInfo, CKDPResponseOperationResult, CKDatabaseOperationInfo, CKDeserializeRecordModificationsOperationInfo, CKFetchArchivedRecordsOperationInfo, CKFetchMergeableDeltaMetadataOperationInfo, CKFetchMergeableDeltasOperationInfo, CKFetchRecordVersionsOperationInfo, CKFetchShareParticipantKeyOperationInfo, CKInitiateParticipantVettingOperationInfo, CKMarkAssetBrokenOperationInfo, CKModifyRecordAccessOperationInfo, CKModifyWebSharingOperationInfo, CKOperationInfo, CKPublishAssetsOperationInfo, CKRecordID, CKRecordZoneID, CKRepairAssetsOperationInfo, CKRepairZonePCSOperationInfo, CKReplaceMergeableDeltasOperationInfo, CKSerializeRecordModificationsOperationInfo, CKShare, CKUploadMergeableDeltasOperationInfo, NSArray, NSError, NSString;
@protocol CKArchiveRecordsOperationCallbacks, CKCompleteParticipantVettingOperationCallbacks, CKDeserializeRecordModificationsOperationCallbacks, CKFetchArchivedRecordsOperationCallbacks, CKFetchMergeableDeltaMetadataOperationCallbacks, CKFetchMergeableDeltasOperationCallbacks, CKFetchRecordVersionsOperationCallbacks, CKFetchRegisteredBundleIDsOperationCallbacks, CKFetchShareParticipantKeyOperationCallbacks, CKFetchUserQuotaOperationCallbacks, CKFetchWhitelistedBundleIDsOperationCallbacks, CKInitiateParticipantVettingOperationCallbacks, CKMarkAssetBrokenOperationCallbacks, CKModifyRecordAccessOperationCallbacks, CKModifyWebSharingOperationCallbacks, CKOperationCallbacks, CKPublishAssetsOperationCallbacks, CKRepairAssetsOperationCallbacks, CKRepairZonePCSOperationCallbacks, CKReplaceMergeableDeltasOperationCallbacks, CKSerializeRecordModificationsOperationCallbacks, CKUploadMergeableDeltasOperationCallbacks;

@protocol CKXPCContainerScopedDaemonSPI
- (void)lastKnownDeviceCountWithCompletionHandler:(void (^)(long long))arg1;
- (void)tossConfigWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)performRepairZonePCSOperation:(CKRepairZonePCSOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKRepairZonePCSOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(void (^)(CKPCSDiagnosticInformation *))arg1;
- (void)representativeDataclassEnabledWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)clearPILSCacheForLookupInfos:(NSArray *)arg1;
- (void)clearContainerFromMetadataCache;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (void)dropDetachedContainersWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getOutstandingOperationCountWithCompletionHandler:(void (^)(unsigned long long, NSError *))arg1;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)fetchPCSFromCacheForRecordWithRecordID:(CKRecordID *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(CKDPCSData *, NSError *))arg3;
- (void)fetchPCSFromCacheForShareWithRecordID:(CKRecordID *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(CKDPCSData *, NSError *))arg3;
- (void)fetchPCSFromCacheForZoneWithZoneID:(CKRecordZoneID *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(CKDPCSData *, NSError *))arg3;
- (void)clearCachesForZoneWithZoneID:(CKRecordZoneID *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearCachesForRecordWithRecordID:(CKRecordID *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearCachesWithOptions:(unsigned long long)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearAuthTokensWithRecordID:(CKRecordID *)arg1 databaseScope:(long long)arg2;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)countAssetCacheItemsWithDatabaseScope:(long long)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)setFakeResponseOperationResult:(CKDPResponseOperationResult *)arg1 forNextRequestOfClassName:(NSString *)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setFakeError:(NSError *)arg1 forNextRequestOfClassName:(NSString *)arg2;
- (void)performDeserializeRecordModificationsOperation:(CKDeserializeRecordModificationsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKDeserializeRecordModificationsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performSerializeRecordModificationsOperation:(CKSerializeRecordModificationsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKSerializeRecordModificationsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performUploadMergeableDeltasOperation:(CKUploadMergeableDeltasOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKUploadMergeableDeltasOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performReplaceMergeableDeltasOperation:(CKReplaceMergeableDeltasOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKReplaceMergeableDeltasOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchMergeableDeltaMetadataOperation:(CKFetchMergeableDeltaMetadataOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchMergeableDeltaMetadataOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchMergeableDeltasOperation:(CKFetchMergeableDeltasOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchMergeableDeltasOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performAggregateZonePCSOperation:(CKAggregateZonePCSOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)currentUserBoundaryKeyWithCompletionHandler:(void (^)(NSData *, NSError *))arg1;
- (void)currentDeviceIDWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)serverEnvironmentWithCompletionHandler:(void (^)(long long, NSError *))arg1;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)performFetchRegisteredBundleIDsOperation:(CKOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRegisteredBundleIDsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchWhitelistedBundleIDsOperation:(CKOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchWhitelistedBundleIDsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchUserQuotaOperation:(CKDatabaseOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchUserQuotaOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performInitiateParticipantVettingOperation:(CKInitiateParticipantVettingOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKInitiateParticipantVettingOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)decryptPersonalInfoOnShare:(CKShare *)arg1 completionHandler:(void (^)(CKShare *, NSError *))arg2;
- (void)performFetchShareParticipantKeyOperation:(CKFetchShareParticipantKeyOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchShareParticipantKeyOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performCompleteParticipantVettingOperation:(CKCompleteParticipantVettingOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKCompleteParticipantVettingOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performModifyRecordAccessOperation:(CKModifyRecordAccessOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKModifyRecordAccessOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(void (^)(NSData *, NSError *))arg1;
- (void)performModifyWebSharingOperation:(CKModifyWebSharingOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKModifyWebSharingOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performMarkAssetBrokenOperation:(CKMarkAssetBrokenOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKMarkAssetBrokenOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performRepairAssetsOperation:(CKRepairAssetsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKRepairAssetsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performPublishAssetsOperation:(CKPublishAssetsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKPublishAssetsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performArchiveRecordsOperation:(CKArchiveRecordsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKArchiveRecordsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchArchivedRecordsOperation:(CKFetchArchivedRecordsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchArchivedRecordsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchRecordVersionsOperation:(CKFetchRecordVersionsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRecordVersionsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)frameworkCachesDirectoryWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
@end

