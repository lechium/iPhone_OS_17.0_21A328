//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKPCSAuthPushHandler, APSConnection, MISSING_TYPE, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AKAppleIDPushHelperService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
    APSConnection *_apsConnection;	// 16 = 0x10
    NSString *_activeAPSEnvironment;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_apsTokenSemaphore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pushServiceQueue;	// 40 = 0x28
    NSString *_loginCodeNotificationID;	// 48 = 0x30
    NSString *_appleCareNotificationID;	// 56 = 0x38
    NSMutableDictionary *_notificationsByPushID;	// 64 = 0x40
    NSArray *_pushDelegates;	// 72 = 0x48
    NSSet *_pushTopics;	// 80 = 0x50
    AKPCSAuthPushHandler *_pcsAuthPushHandler;	// 88 = 0x58
    NSString *_activeCode;	// 96 = 0x60
}

+ (id)sharedService;	// IMP=0x00200000000a9084
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000000ad47e
@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
- (void)setEnableCriticalReliability:(_Bool)arg1;	// IMP=0x00100000000ad45f
- (id)_pushCommandsPostingCFUserNotification;	// IMP=0x00100000000ad418
- (_Bool)_isPrimaryAccount:(id)arg1;	// IMP=0x00100000000ad35b
- (_Bool)_canProceedWithArmingForMessage:(id)arg1 account:(id)arg2;	// IMP=0x00100000000ad173
- (void)_unsafe_showNotificationForMessage:(id)arg1 account:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000acb1a
- (void)_startPasswordResetFlowForAccount:(id)arg1;	// IMP=0x00100000000ac8ce
- (void)_unsafe_tearDownNotificationWithID:(id)arg1;	// IMP=0x00100000000ac74a
- (void)_unsafe_teardownCurrentLoginNotification;	// IMP=0x00100000000ac6a4
- (void)_unsafe_showLoginNotificationWithCode:(id)arg1 incomingMessage:(id)arg2 piggy:(_Bool)arg3;	// IMP=0x00100000000ac540
- (void)tearDownLoginNotifications;	// IMP=0x00100000000ac4df
- (void)showPigCode:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x00100000000ac39e
- (void)_generateLoginCodeForAccount:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x00100000000abfc4
- (void)_performCommandForMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000abdfe
- (_Bool)_messageSupportsAlerts:(id)arg1;	// IMP=0x00100000000abd7b
- (void)_armDeviceWithMessage:(id)arg1 account:(id)arg2 notificationResult:(unsigned long long)arg3;	// IMP=0x00100000000abbd4
- (void)_unsafe_presentMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000ab889
- (_Bool)_shouldProcessPushMessage:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000ab4f6
- (id)_akPCSAuthPushHandler;	// IMP=0x00100000000ab453
- (void)_unsafe_processPushMessage:(id)arg1;	// IMP=0x00100000000aaf0d
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000aac6c
- (id)_publicAPSToken;	// IMP=0x00100000000aa72b
- (id)publicAPSTokenString;	// IMP=0x00100000000aa6db
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000aa49d
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00100000000aa441
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x00100000000aa3af
- (void)dealloc;	// IMP=0x00100000000aa2e4
- (void)_ensureDesiredAPSEnvironmentIsInUse;	// IMP=0x00100000000a9ef9
- (void)_processMessageWithDelegates:(id)arg1;	// IMP=0x00100000000a9c5b
- (_Bool)_queryDelegatesForSuppressAction:(id)arg1;	// IMP=0x00100000000a9a12
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2 payload:(id)arg3;	// IMP=0x00100000000a97f8
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2;	// IMP=0x00100000000a9603
- (void)setDelegates:(id)arg1;	// IMP=0x00100000000a9584
- (void)startWithDelegates:(id)arg1;	// IMP=0x00100000000a91e6
- (id)init;	// IMP=0x00100000000a90d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
