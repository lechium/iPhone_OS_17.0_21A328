//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    long long _pushEnabledState;	// 56 = 0x38
    NSMutableArray *_registerBlocks;	// 64 = 0x40
    NSMutableArray *_tokenOperations;	// 72 = 0x48
}

+ (id)_newPushHandlerWithURLBag:(id)arg1;	// IMP=0x00200000000a039a
+ (_Bool)_amsHandleNotification:(id)arg1 urlBag:(id)arg2;	// IMP=0x001000000009df51
+ (id)soundFilesDirectoryPath;	// IMP=0x001000000009acc0
+ (id)sharedInstance;	// IMP=0x001000000009ac33
- (void).cxx_destruct;	// IMP=0x00200000000a37a2
- (void)_updatePushEnabledState;	// IMP=0x00100000000a3227
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x00100000000a2f26
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x00100000000a2f03
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x00100000000a2ebf
- (void)_resetLastRegisterAttemptTime;	// IMP=0x00100000000a2e9d
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x00100000000a2904
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x00100000000a246c
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x00100000000a1c13
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000a12ee
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x00100000000a12da
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x00100000000a0c4f
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x00100000000a096b
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x00100000000a08f7
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x00100000000a059e
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x00100000000a04fc
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x00100000000a02a5
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x00100000000a01a2
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x001000000009f9fd
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x001000000009f973
- (_Bool)_isPushEnabled;	// IMP=0x001000000009f965
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f7a2
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x001000000009f20e
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x001000000009f068
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x001000000009eb4c
- (id)_enabledTopics;	// IMP=0x001000000009eb07
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000009e6cc
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x001000000009e1ed
- (id)_bag;	// IMP=0x001000000009e153
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x001000000009de3e
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x001000000009dd27
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x001000000009dc61
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x001000000009db43
- (void)_deviceNameChanged;	// IMP=0x001000000009d8ef
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x001000000009d829
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000009cebb
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000009cad6
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009c599
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009c4e1
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009c156
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009bd33
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000009bc8a
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b736
- (void)postPushTokens;	// IMP=0x001000000009b4e5
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x001000000009ad83
- (void)dealloc;	// IMP=0x001000000009a9a8
- (id)init;	// IMP=0x001000000009a5c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

