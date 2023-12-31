//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString, PDCloudStoreNotificationCoordinator, PDCloudStoreTransactionSourceController, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;	// 16 = 0x10
    PDCloudStoreTransactionSourceController *_transactionSourceController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000080ef5
@property(retain, nonatomic) PDCloudStoreTransactionSourceController *transactionSourceController; // @synthesize transactionSourceController=_transactionSourceController;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void)serviceSuspended;	// IMP=0x0010000000080ea5
- (void)serviceResumed;	// IMP=0x0010000000080e9f
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080cc8
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080af1
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000808e2
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000806d4
- (void)changeHistoryForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000080254
- (void)performBackgroundRecordChangesSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007fe34
- (void)performBackgroundTransactionSyncFromDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f9e1
- (void)performAction:(long long)arg1 inContainerWithName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007f583
- (void)diagnosticSnapshotForContainerWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f131
- (void)diagnosticInfoForContainerWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ecdf
- (void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007e842
- (void)createInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007e36b
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007de94
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d9f7
- (void)createZone:(id)arg1 containerName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d56a
- (void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d0dd
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007cbf7
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c751
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c2ab
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007be55
- (void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b9c8
- (void)cloudStoreRecordArrayWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b579
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007b0ff
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007ac85
- (void)applePayContainerItemsFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a818
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a3cb
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000079f1f
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 containerName:(id)arg3 storeLocally:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000079a74
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079625
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x0010000000079526
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000079518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

