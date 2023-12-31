//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, NSString;

@interface AKUserInfoController : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x00200000000663c4
- (void).cxx_destruct;	// IMP=0x002000000006cbf6
- (_Bool)_birthYearChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006cb03
- (void)_refreshDeviceListForAccount:(id)arg1;	// IMP=0x001000000006c92b
- (_Bool)_managedAppleIDInfoChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006c619
- (_Bool)_loginHandlesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006c4e4
- (_Bool)_securityKeysChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006c3af
- (_Bool)_trustedPhoneNumbersChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006c27a
- (_Bool)_additionalInfoChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006c0f7
- (id)authorizationUserInformationForRequest:(id)arg1 shouldRequestUpdate:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000006b451
- (void)_sendNotification:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x001000000006b309
- (void)sendUserInfoChangeNotificationWithPayload:(id)arg1;	// IMP=0x001000000006b2ea
- (void)_broadcastEmailChangeNotification;	// IMP=0x001000000006b23f
- (_Bool)_updateAccount:(id)arg1 withUserInformationResponse:(id)arg2 modifyAliases:(_Bool)arg3;	// IMP=0x001000000006ae33
- (void)_setLastEmailListRequestDate:(id)arg1;	// IMP=0x001000000006ad9c
- (id)previousAccountInfoRefreshDate;	// IMP=0x001000000006ad3e
- (void)refreshAccountUsernamesForAltDSID:(id)arg1 withUserInformation:(id)arg2;	// IMP=0x001000000006aa5f
- (void)_refreshApplicationInformationForAltDSID:(id)arg1;	// IMP=0x001000000006a8cb
- (_Bool)_trustedContactPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006a1e2
- (_Bool)_authorizationPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x0010000000069477
- (_Bool)_deviceListPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x00100000000692ec
- (_Bool)_passcodeAuthPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x00100000000691ae
- (_Bool)_walrusPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x0010000000068ff4
- (_Bool)_passkeyPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x0010000000068e2b
- (id)_userInfoChangeNotificationDictionaryForAltDSID:(id)arg1 userInformation:(id)arg2;	// IMP=0x001000000006848e
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067c16
- (void)_updatePrivateEmailsWithInformation:(id)arg1;	// IMP=0x0010000000067a3a
- (void)_syncPrivateEmailsForAltDSID:(id)arg1 client:(id)arg2 userInformation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006775b
- (void)_processIncomingUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2;	// IMP=0x00100000000676b7
- (void)_processHideMyEmailForAltDSID:(id)arg1 userInfo:(id)arg2 response:(id)arg3;	// IMP=0x00100000000673c3
- (void)processPushMessage:(id)arg1;	// IMP=0x00100000000671a4
- (void)refreshAccountUsernamesForAltDSID:(id)arg1 dataCenter:(id)arg2;	// IMP=0x0010000000067104
- (unsigned long long)authModeFromResponse:(id)arg1 context:(id)arg2;	// IMP=0x0010000000066fad
- (id)translateToAuthModeErrorFromError:(id)arg1;	// IMP=0x0010000000066e39
- (void)_executefetchAuthModeInfoWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066d5a
- (void)fetchAuthModeWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066b07
- (void)_fetchUserInformationWithContext:(id)arg1 client:(id)arg2 dataCenter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000665a0
- (void)_fetchUserInformationForAltDSID:(id)arg1 client:(id)arg2 dataCenter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000664df
- (void)fetchUserInformationWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000664c7
- (void)fetchUserInformationForAltDSID:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000664af
- (id)init;	// IMP=0x0010000000066449

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

