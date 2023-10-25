//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAccountManager, PDDatabaseManager, PDFamilyCircleManager, PDNotificationStreamManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDUserNotificationManager, PKFamilyMemberCollection;
@protocol OS_dispatch_queue;

@interface PDAccountNotificationController : NSObject
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDAccountManager *_accountManager;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyMemberManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 56 = 0x38
    PDNotificationStreamManager *_notificationStreamManager;	// 64 = 0x40
    _Bool _hasAccounts;	// 72 = 0x48
    PKFamilyMemberCollection *_familyMemberCollection;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00100000002ee688
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
- (void)_queue_loadFamilyMemberCollectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ee461
- (void)_updateAccountUserIdentityStatusNotificationsWithAccount:(id)arg1 accountUserCollection:(id)arg2 oldAccountUserCollection:(id)arg3;	// IMP=0x00100000002ee305
- (void)_updateAccountUserMonthlySpendLimitNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 accountUserCollection:(id)arg3;	// IMP=0x00100000002ed4cd
- (void)updateDailyCashNotificationsForAccountIdentifier:(id)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ec963
- (void)updateDailyCashNotificationsWithAccount:(id)arg1;	// IMP=0x00100000002ec619
- (id)_notificationForAccountEvent:(id)arg1 account:(id)arg2;	// IMP=0x00100000002ec483
- (void)_notificationForAccountEvent:(id)arg1 withManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ebf34
- (id)_paymentDueNotificationsForAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2;	// IMP=0x00100000002ebd1c
- (id)_upcomingScheduledPaymentNotificationsForPayment:(id)arg1 account:(id)arg2;	// IMP=0x00100000002ebb67
- (void)_recomputePaymentNotificationsForScheduledPayments:(id)arg1 account:(id)arg2;	// IMP=0x00100000002ea25a
- (void)_updatePastDueNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00100000002e9cdb
- (void)_updateInstallmentNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00100000002e923e
- (void)accountManager:(id)arg1 didSetScheduledPayments:(id)arg2 forAccountIdentifier:(id)arg3;	// IMP=0x00100000002e90d5
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00100000002e8d69
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00100000002e83ce
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00100000002e8359
- (void)accountManager:(id)arg1 accountUsersChanged:(id)arg2 oldUsers:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00100000002e7e58
- (void)accountManager:(id)arg1 didRemoveAccountEvent:(id)arg2;	// IMP=0x00100000002e7d21
- (void)accountManager:(id)arg1 didUpdateAccountEvent:(id)arg2;	// IMP=0x00100000002e7b9d
- (void)accountManager:(id)arg1 didAddAccountEvent:(id)arg2;	// IMP=0x00100000002e7a48
- (void)familyCircleManagerDidUpdateFamilyMembers:(id)arg1;	// IMP=0x00100000002e79e2
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000002e7637
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00100000002e75be
- (void)_recomputeSummaryNotificationsForAccountIdentifier:(id)arg1 paymentPass:(id)arg2 dateForSummary:(id)arg3 summaryTypes:(id)arg4 fireImmediately:(_Bool)arg5;	// IMP=0x00100000002e5cf7
- (void)_recomputeSummaryNotificationsForTransactionSourceIdentifier:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00100000002e5a92
- (void)insertSummaryNotificationForAccountIdentifier:(id)arg1 summaryType:(unsigned long long)arg2;	// IMP=0x00100000002e5934
- (void)_resurfaceRecentNotificationsForAccount:(id)arg1 andPromote:(_Bool)arg2;	// IMP=0x00100000002e5467
- (void)_resurfaceRecentNotificationsAndPromote:(_Bool)arg1;	// IMP=0x00100000002e52df
- (void)paymentTransactionUpdated:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000002e526e
- (id)initWithAccountManager:(id)arg1 notificationStreamManager:(id)arg2 userNotificationManager:(id)arg3 databaseManager:(id)arg4 paymentWebServiceCoordinator:(id)arg5 peerPaymentWebServiceCoordinator:(id)arg6 familyMemberManager:(id)arg7;	// IMP=0x00100000002e4f7a
- (_Bool)_canShowPayLaterNotificationsForAccount:(id)arg1 financingPlan:(id)arg2;	// IMP=0x001000000001135d
- (_Bool)_canShowPayLaterNotificationsForAccount:(id)arg1 overrideBlockNotifications:(_Bool)arg2;	// IMP=0x00100000000110c1
- (_Bool)_didPayOffFinancingPlan:(id)arg1 oldFinancingPlan:(id)arg2;	// IMP=0x0010000000010f7a
- (void)_queue_addOrUpdateNotification:(id)arg1 updateLogLine:(id)arg2 addLogLine:(id)arg3 newNotificationSuppressionBehavior:(unsigned long long)arg4;	// IMP=0x0010000000010bb0
- (void)_queue_addOrUpdateNotification:(id)arg1 updateLogLine:(id)arg2 addLogLine:(id)arg3;	// IMP=0x0010000000010b98
- (void)_accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010939
- (id)_latestNewFinancingPlanPaymentOfType:(unsigned long long)arg1 financingPlan:(id)arg2 oldFinancingPlan:(id)arg3;	// IMP=0x0010000000010553
- (void)_queue_removeSummaryTimesForAccountChangedIfNecessary:(id)arg1 oldAccount:(id)arg2;	// IMP=0x0010000000010409
- (void)_queue_computeAccountStateChangeNotification:(id)arg1 oldAccount:(id)arg2;	// IMP=0x00100000000102b8
- (void)_queue_computeFinancingPlanDisputeNotifications:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000f267
- (void)_queue_computeRefundPaymentNotification:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000efea
- (void)_queue_computeFinancingPlanScheduleSummaryReasonNotifications:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000eb2f
- (void)_queue_computeFinancingPlanPastDueNotifications:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000e3c0
- (void)_queue_computeFinancingPlanPaymentReminderNotifications:(id)arg1 account:(id)arg2;	// IMP=0x001000000000d995
- (void)_queue_computeDeclinedPaymentNotification:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000d52a
- (void)_queue_computeNewPaymentNotification:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000d1cd
- (void)_queue_computeCanceledFinancingPlanNotification:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000cfd6
- (void)_queue_computeNewFinancingPlanNotification:(id)arg1 oldFinancingPlan:(id)arg2 account:(id)arg3;	// IMP=0x001000000000cc5f
- (void)updatedPayLaterAccount:(id)arg1 oldAccount:(id)arg2;	// IMP=0x001000000000cad0
- (void)accountManager:(id)arg1 didRemoveFinancingPlan:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x001000000000c2bc
- (void)accountManager:(id)arg1 didAddFinancingPlan:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x001000000000c163
- (void)accountManager:(id)arg1 didUpdateFinancingPlan:(id)arg2 oldFinancingPlan:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x001000000000bf4e
- (void)_removePayLaterNotificationsForAccount:(id)arg1 removeAccountStateChangeNotification:(_Bool)arg2;	// IMP=0x001000000000bd1a
- (void)removePayLaterNotificationsForAccount:(id)arg1;	// IMP=0x001000000000bd03
- (void)_updateCanShowFixRewardsMessageForNewAccount:(id)arg1 oldAccount:(id)arg2;	// IMP=0x00100000004cccff
- (void)_updateAccountBalanceNotificationForNewAccount:(id)arg1 oldAccount:(id)arg2;	// IMP=0x00100000004ccae7
- (void)_updateAccountAPYMessageForNewAccount:(id)arg1 oldAccount:(id)arg2 blockNotifications:(_Bool)arg3;	// IMP=0x00100000004cc908
- (void)_updateAccountStateNotificationForNewAccount:(id)arg1 oldAccount:(id)arg2;	// IMP=0x00100000004cc77f
- (void)updatedSavingsAccount:(id)arg1 oldAccount:(id)arg2;	// IMP=0x00100000004cc6ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
