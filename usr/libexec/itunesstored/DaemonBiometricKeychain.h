//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DaemonBiometricKeychain : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueueX509;	// 16 = 0x10
}

+ (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00400000000f0c18
+ (void)x509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000f0929
+ (void)signDataUsingContextWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000f031b
+ (void)signDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000efcdc
+ (void)getPublicKeyDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000efabd
+ (void)deleteKeychainTokensWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ef8dd
+ (void)createX509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ef6be
+ (void)createAttestationDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ef49f
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000ef3ab
+ (id)sharedInstance;	// IMP=0x00100000000ecb11
- (void).cxx_destruct;	// IMP=0x00200000000f2e1d
- (id)_signData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f2dd0
- (id)_regenerateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f2d83
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2 useTokenID:(_Bool)arg3;	// IMP=0x00100000000f2a86
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2;	// IMP=0x00100000000f2a6e
- (id)_publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000f2a21
- (id)_presentPaymentSheetForChallenge:(id)arg1 authContext:(id)arg2 biometricContext:(id)arg3 touchIDContext:(id)arg4 touchIDOptions:(id)arg5 accessControlRef:(struct __SecAccessControl *)arg6 passwordToken:(id *)arg7 paymentTokenData:(id *)arg8 fpanID:(id *)arg9 error:(id *)arg10;	// IMP=0x00100000000f17e0
- (_Bool)_generateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f1793
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f1746
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f16f3
- (id)_createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f1680
- (id)_createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f1633
- (id)_copyPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f161f
- (id)_constraintsForPurchase;	// IMP=0x00100000000f116c
- (id)_constraintsForExtendedActions;	// IMP=0x00100000000f0f41
- (_Bool)_isDeviceUnlocked;	// IMP=0x00100000000f0f39
- (id)_amsKeychainLabelForPurpose:(long long)arg1;	// IMP=0x00100000000f0bb4
- (id)_amsCertificateLabelForPurpose:(long long)arg1;	// IMP=0x00100000000f0b8f
- (id)signDataWithKeychain:(id)arg1 accountIdentifier:(id)arg2 purpose:(long long)arg3 localAuthContext:(id)arg4 localAuthOptions:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000ef35d
- (struct __SecAccessControl *)copyAccessControlListForPrivateKeyWithBiometricAuthenticationContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000eed95
- (struct __SecAccessControl *)copyAccessControlListForKey:(struct __SecKey *)arg1 error:(id *)arg2;	// IMP=0x00100000000ee9d1
- (id)x509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateCerts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000edcd8
- (id)signData_:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ed81b
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000ed35c
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000ed341
- (_Bool)deleteKeychainTokensForAccountIdentifier_:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ed131
- (id)createX509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000ecc64
- (id)createAttestationDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000ecc17
- (id)init;	// IMP=0x00100000000ecb9e

@end
