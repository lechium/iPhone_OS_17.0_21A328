//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSRegistrationPushHandler, NSMutableSet, NSString;

@interface IDSDRegistrationPushManager : NSObject
{
    IDSRegistrationPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableSet *_registeredAccountIDs;	// 16 = 0x10
    _Bool _registeredForPushes;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000fb54c
- (void).cxx_destruct;	// IMP=0x00200000000fe4b1
- (void)_handleValidateCredentialsActionForAccounts:(id)arg1;	// IMP=0x00100000000fdf59
- (void)_handleForceRepairRegistrationActionForAccounts:(id)arg1;	// IMP=0x00100000000fddf8
- (void)_handleReRegisterActionForAccounts:(id)arg1;	// IMP=0x00100000000fdbcf
- (void)_handleReProvisionActionForAccounts:(id)arg1;	// IMP=0x00100000000fd4f2
- (void)_handleReIdentifyActionForAccounts:(id)arg1;	// IMP=0x00100000000fcdcc
- (void)_handleAction:(long long)arg1 forAccounts:(id)arg2;	// IMP=0x00100000000fcce9
- (void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4;	// IMP=0x00100000000fc62f
- (void)handler:(id)arg1 requestedPromptThroughPushWithTitle:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 defaultUrl:(id)arg5 alternateButton:(id)arg6 alternateUrl:(id)arg7;	// IMP=0x00100000000fc33c
- (void)handler:(id)arg1 requestedSysdiagnoseWithTapToRadarPushPayload:(id)arg2;	// IMP=0x00100000000fbbe7
- (_Bool)_isAccountRelevantForRegistrationPush:(id)arg1;	// IMP=0x00100000000fbb4c
- (id)_accountsWithService:(id)arg1;	// IMP=0x00100000000fba51
- (void)fakeIncomingPushForUserID:(id)arg1 style:(id)arg2 service:(id)arg3;	// IMP=0x00100000000fba34
- (void)_ignoreIncomingPushes;	// IMP=0x00100000000fb9a8
- (void)_acceptIncomingPushes;	// IMP=0x00100000000fb919
- (void)_updatePushState;	// IMP=0x00100000000fb8c6
- (void)stopTrackingRegisteredAccountID:(id)arg1;	// IMP=0x00100000000fb7e6
- (void)startTrackingRegisteredAccountID:(id)arg1;	// IMP=0x00100000000fb706
- (void)dealloc;	// IMP=0x00100000000fb673
- (id)init;	// IMP=0x00100000000fb5a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
