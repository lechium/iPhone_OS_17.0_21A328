//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAccountManager, PDDatabaseManager, PDFamilyCircleManager, PDPeerPaymentWebServiceCoordinator, PDUserNotificationManager;
@protocol OS_dispatch_queue;

@interface PDTransactionNotificationController : NSObject
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDAccountManager *_accountManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyCircleManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002dc335
- (_Bool)_shouldCreatePromotionRewardNotificationForTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002dc1d8
- (_Bool)_shouldCreateNotificationForTransactionUpdateReasons:(id)arg1 notificationTypeDescription:(id)arg2;	// IMP=0x00100000002dbf15
- (_Bool)_shouldDeleteNotificationForTransaction:(id)arg1;	// IMP=0x00100000002dbd46
- (_Bool)_shouldCreateMerchantTransactionNotificationForTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002db944
- (_Bool)_transactionHasBeenUpdatedRecentlyEnoughForNotification:(id)arg1;	// IMP=0x00100000002db7d6
- (void)_scheduleOrCancelReminderNotificationsForPendingTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002db49e
- (void)_scheduleOrCancelBalanceReminderNotificationIfNecessaryForPassUniqueIdentifier:(id)arg1 balance:(id)arg2 transaction:(id)arg3;	// IMP=0x00100000002db110
- (_Bool)_isValidTimeBetweenCreationAndAcceptForPeerPaymentTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002db031
- (_Bool)_shouldDisplayNotificationForReceivedPeerPaymentTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002dac4f
- (_Bool)_shouldDisplayNotificationForManuallyAcceptedPeerPaymentTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002da8dd
- (void)_updatePeerPaymentNotificationIfNecessaryForTransaction:(id)arg1 existingTransaction:(id)arg2 config:(id)arg3;	// IMP=0x00100000002d8da1
- (void)_updatePromotionRewardNotificationIfNecessaryForTransaction:(id)arg1 existingTransaction:(id)arg2 config:(id)arg3;	// IMP=0x00100000002d81b1
- (void)_updateFraudNotificationIfNecessaryForTransaction:(id)arg1 config:(id)arg2;	// IMP=0x00100000002d7dba
- (void)_updateTransactionNotificationIfNecessaryForTransaction:(id)arg1 existingTransaction:(id)arg2 config:(id)arg3;	// IMP=0x00100000002d6ebf
- (void)_fetchFamilyMemberIfNeccessaryForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6a92
- (void)transitPropertiesUpdated:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002d6703
- (void)paymentTransactionRemoved:(id)arg1 transactionSourceIdentifier:(id)arg2;	// IMP=0x00100000002d6608
- (void)paymentTransactionUpdated:(id)arg1 existingPaymentTransaction:(id)arg2 transactionSourceIdentifier:(id)arg3;	// IMP=0x00100000002d5b14
- (id)initWithUserNotificationManager:(id)arg1 databaseManager:(id)arg2 accountManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5;	// IMP=0x00100000002d59c3

@end

