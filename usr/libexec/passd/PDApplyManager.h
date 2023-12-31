//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PDAccountManager, PDApplyNotificationController, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDPushNotificationManager;
@protocol OS_dispatch_queue;

@interface PDApplyManager : NSObject
{
    PDPushNotificationManager *_pushNotificationManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_replyQueue;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDAccountManager *_accountManager;	// 48 = 0x30
    _Bool _hasApplications;	// 56 = 0x38
    NSMutableArray *_applications;	// 64 = 0x40
    NSMutableDictionary *_accountApplications;	// 72 = 0x48
    NSDictionary *_applyServiceURLs;	// 80 = 0x50
    NSMutableDictionary *_accountApplyServiceURLs;	// 88 = 0x58
    NSDate *_lastApplicationUpdateTimestamp;	// 96 = 0x60
    _Bool _databaseWillRestore;	// 104 = 0x68
    _Bool _isUpdatingApplications;	// 105 = 0x69
    NSMutableArray *_pendingApplicationsUpdateBlocks;	// 112 = 0x70
    NSMutableDictionary *_pendingAccountApplicationsUpdateBlocks;	// 120 = 0x78
    NSMutableDictionary *_applicationsBeingUpdated;	// 128 = 0x80
    NSMutableDictionary *_pendingApplicationUpdateBlocks;	// 136 = 0x88
    struct os_unfair_lock_s _lockObservers;	// 144 = 0x90
    NSHashTable *_observers;	// 152 = 0x98
    struct os_unfair_lock_s _lockPushTopics;	// 160 = 0xa0
    NSSet *_pushNotificationTopics;	// 168 = 0xa8
    NSMutableDictionary *_accountPushNotificationTopics;	// 176 = 0xb0
    PDApplyNotificationController *_notificationController;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000031999f
@property(retain, nonatomic) PDApplyNotificationController *notificationController; // @synthesize notificationController=_notificationController;
- (void)paymentWebServiceCoordinatorWebServiceDidChange:(id)arg1;	// IMP=0x001000000031996c
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00100000003198d9
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000319354
- (id)pushNotificationTopics;	// IMP=0x00100000003191ba
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x0010000000318f97
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x0010000000318e59
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x0010000000318c1e
- (void)_concludeIDVSessionIfNeededForFeatureApplication:(id)arg1;	// IMP=0x0010000000318b2f
- (void)_silentlyShareClaimForApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000317464
- (void)_handleApplyResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003170b0
- (void)submitDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000316c24
- (void)submitTermsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000316a1f
- (void)submitVerificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000031681a
- (void)submitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000316615
- (void)_authenticateApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003162a9
- (void)submitApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000315e74
- (void)_updateCachedAccountApplications;	// IMP=0x0010000000315c48
- (id)_queue_featureApplicationWithIdentifier:(id)arg1;	// IMP=0x00100000003156f9
- (void)_updatePushTopics;	// IMP=0x00100000003155ec
- (void)_paymentWebServiceContextChanged;	// IMP=0x0010000000314fb8
- (void)augmentedProductForInstallmentConfiguration:(id)arg1 experimentDetails:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000314bff
- (void)_updateApplicationWithIdentifier:(id)arg1 completionBlocks:(id)arg2;	// IMP=0x0010000000314376
- (void)queuePerformNextApplicationUpdateWithIdentifier:(id)arg1;	// IMP=0x001000000031428e
- (void)updateApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000314103
- (void)_queue_updateApplicationsForAccountIdentifier:(id)arg1 withCompletionBlocks:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000313492
- (void)_queue_updateApplicationsWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000311d3d
- (void)_queue_performNextApplicationsUpdate;	// IMP=0x00100000003116f4
- (void)updateApplicationsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000311474
- (void)_updateApplicationsFromPush:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003112e3
- (void)updateApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003112cc
- (void)updateApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003112ba
- (void)applicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000031107a
- (void)applicationWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000310dad
- (void)applicationsForAccountIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000310bfb
- (void)applicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000031093d
- (void)applicationIsInDirtyStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000031068f
- (void)applicationsForAccountIdentifierAreInDirtyState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000310324
- (void)_applicationsAreInDirtyWithFeatureFailures:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000030ff69
- (void)_applicationsAreInDirtyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000030fc50
- (void)_postApplicationsChangedNotification;	// IMP=0x001000000030fba1
- (void)_processDeletedApplications:(id)arg1;	// IMP=0x001000000030f87b
- (void)_processChangedApplications:(id)arg1;	// IMP=0x001000000030f0eb
- (void)_processAddedApplications:(id)arg1;	// IMP=0x001000000030eedf
- (void)_queue_deleteApplicationsForAccountIdentifier:(id)arg1;	// IMP=0x001000000030ee2b
- (void)_queue_deleteApplications;	// IMP=0x001000000030edba
- (void)deleteApplicationsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000030ec6e
- (void)deleteApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000030eb50
- (void)noteAccountDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000030e707
- (void)deleteLocalApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000030e460
- (void)insertOrReplaceApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000030df8a
- (void)mergeApplications:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000030de0c
- (void)mergeApplications:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000030dcbe
- (void)_queue_mergeApplications:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x001000000030d609
- (void)_queue_mergeApplications:(id)arg1 featureFailures:(id)arg2;	// IMP=0x001000000030ce74
- (void)databaseRestored;	// IMP=0x001000000030cd2d
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000030cb2f
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000030cad0
- (void)registerObserver:(id)arg1;	// IMP=0x001000000030ca71
- (void)dealloc;	// IMP=0x001000000030ca10
- (id)initWithPushNotificationManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 databaseManager:(id)arg3 accountManager:(id)arg4 databaseRecreated:(_Bool)arg5;	// IMP=0x001000000030c1e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

