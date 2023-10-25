//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, ACAccountType, ANAccountNotifier, NSOperationQueue, NSString;

@interface INAccountEventPushHandler : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    ACAccountType *_iCloudAccountType;	// 16 = 0x10
    NSOperationQueue *_networkingQueue;	// 24 = 0x18
    ANAccountNotifier *_accountNotifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001a49f
- (id)_iCloudAccountType;	// IMP=0x001000000001a457
- (void)_sendAcknowledgementForNotification:(id)arg1;	// IMP=0x001000000001a147
- (void)accountNotifier:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x001000000001a086
- (void)accountNotifier:(id)arg1 didClearNotification:(id)arg2;	// IMP=0x0010000000019fdf
- (void)accountNotifier:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x0010000000019f1e
- (void)_dismissNotificationsForPushEventWithID:(id)arg1;	// IMP=0x0010000000019e39
- (void)_handleEventDetailsResponse:(id)arg1 forEventID:(id)arg2 accountID:(id)arg3 pushMessage:(id)arg4;	// IMP=0x0010000000019905
- (void)_requestEventDetailsForPushMessage:(id)arg1 withEventID:(id)arg2 recipientDSID:(id)arg3;	// IMP=0x00100000000195d7
- (void)handleIncomingPushNotification:(id)arg1;	// IMP=0x00100000000192fc
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0010000000019229
- (id)init;	// IMP=0x00100000000191fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
