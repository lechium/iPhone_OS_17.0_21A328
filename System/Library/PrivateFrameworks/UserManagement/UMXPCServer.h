//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol UMSideEffectsProviding;

@interface UMXPCServer : NSObject
{
    _Bool _currentlyBroadcastingWillSwitchToUser;	// 8 = 0x8
    _Bool _didRegisterStakeholder;	// 9 = 0x9
    _Bool _didBroadcastWillSwitchToUser;	// 10 = 0xa
    _Bool _didSendTasks;	// 11 = 0xb
    _Bool _didBroadcastUploadContent;	// 12 = 0xc
    _Bool _didRegisterPersonaCalbackStakeholder;	// 13 = 0xd
    unsigned int _interruptionRetryCount;	// 16 = 0x10
    NSObject<UMSideEffectsProviding> *_se;	// 24 = 0x18
    id _stakeholder;	// 32 = 0x20
    unsigned long long _stakeholderType;	// 40 = 0x28
    NSString *_machServiceName;	// 48 = 0x30
    unsigned long long _unregistrationStatus;	// 56 = 0x38
    NSString *_unregistrationReason;	// 64 = 0x40
    NSDictionary *_personaSpec;	// 72 = 0x48
    NSData *_passcodeData;	// 80 = 0x50
    NSData *_contextData;	// 88 = 0x58
    NSDictionary *_preferencesDict;	// 96 = 0x60
    NSDictionary *_personaProfileDict;	// 104 = 0x68
    NSDictionary *_provisionDict;	// 112 = 0x70
    CDUnknownBlockType _provisionCompletionHandler;	// 120 = 0x78
    CDUnknownBlockType _registrationCompletionHandler;	// 128 = 0x80
    CDUnknownBlockType _switchCompletionHandler;	// 136 = 0x88
    CDUnknownBlockType _suspendQuotasCompletionHandler;	// 144 = 0x90
    CDUnknownBlockType _directSwitchCompletionHandler;	// 152 = 0x98
    CDUnknownBlockType _logoutToLoginSessionCompletionHandler;	// 160 = 0xa0
    CDUnknownBlockType _loginUICheckinSessionCompletionHandler;	// 168 = 0xa8
    CDUnknownBlockType _uploadContentCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _willSwitchCompletionHandler;	// 184 = 0xb8
    NSMutableArray *_switchBlockingTasks;	// 192 = 0xc0
    NSMutableArray *_syncTasks;	// 200 = 0xc8
    CDUnknownBlockType _bubblePopHandler;	// 208 = 0xd0
    unsigned long long _willSwitchToUserAddedTaskCount;	// 216 = 0xd8
    NSXPCConnection *_xpcConnection;	// 224 = 0xe0
    NSXPCListener *_xpcListener;	// 232 = 0xe8
    id _personaStakeholder;	// 240 = 0xf0
    CDUnknownBlockType _personaRegistrationCompletionHandler;	// 248 = 0xf8
    id _personaUpdateCallbackStakeholder;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000000fedb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000d7f9
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d613
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d42d
- (void)bubbleDidPop;	// IMP=0x000000000000d2b8
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cfa1
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000000000cf58
- (void)userSwitchTaskListDidUpdate;	// IMP=0x000000000000c94c
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c7aa
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c573
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c286
- (void)userInteractionIsEnabled;	// IMP=0x000000000000a0b5
- (void)resumeSync;	// IMP=0x0000000000008a06
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008909
- (void)resumeQuotas;	// IMP=0x000000000000887e
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008781
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008684
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008459
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008152
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008130
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008033
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f1f
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007f08
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;	// IMP=0x0000000000007cc8
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;	// IMP=0x0000000000007a15
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;	// IMP=0x0000000000007933
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000774a
- (void)registerUserSwitchStakeHolder:(id)arg1;	// IMP=0x0000000000007736
- (id)init;	// IMP=0x0000000000007562

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

