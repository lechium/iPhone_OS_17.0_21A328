//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI29SavingsDashboardMessageSource : NSObject
{
    MISSING_TYPE *_messages;	// 0 = 0x0
    MISSING_TYPE *localMessages;	// 0 = 0x0
    MISSING_TYPE *engagementMessages;	// 0 = 0x0
    MISSING_TYPE *engagementMessagePendingDismissalIds;	// 0 = 0x0
    MISSING_TYPE *updateLocalMessagePublisher;	// 0 = 0x0
    MISSING_TYPE *updateEngagementMessagePublisher;	// 0 = 0x0
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *iconSize;	// 0 = 0x0
    MISSING_TYPE *transactionProvider;	// 0 = 0x0
    MISSING_TYPE *accountService;	// 0 = 0x0
    MISSING_TYPE *discoveryService;	// 0 = 0x0
    MISSING_TYPE *presentActionSheet;	// 45928 = 0xb368
    MISSING_TYPE *_presentContactSupport;	// 0 = 0x0
    MISSING_TYPE *accountModel;	// 0 = 0x0
    MISSING_TYPE *fccStepUpModel;	// 0 = 0x0
    MISSING_TYPE *rdfiTransferCompleted;	// 0 = 0x0
    MISSING_TYPE *messageIdentifierAccountStatus;	// 13279808 = 0xcaa240
    MISSING_TYPE *messageIdentifierFCCStepUpCompletion;	// 0 = 0x0
    MISSING_TYPE *messageIdentifierAccountAPYUpdate;	// 0 = 0x0
    MISSING_TYPE *messageIdentifierSavingsInterest;	// 0 = 0x0
    MISSING_TYPE *messageIdentifierAccountNegativeBalance;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *messageIdentifierTransferCash;	// 1936941407 = 0x7373615f
    MISSING_TYPE *messageIdentifierHold;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x000000000046e800
- (id)init;	// IMP=0x0000000000476f50
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x0000000000476ec0
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)arg1;	// IMP=0x0000000000476930
- (void)discoveryService:(id)arg1 dialogRequestsChangedForPlacement:(id)arg2;	// IMP=0x0000000000476740
- (void)dealloc;	// IMP=0x000000000046e7e0

@end

