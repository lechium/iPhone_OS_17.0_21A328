//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewPlainCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x002000000002fdaa
- (id)_malformedCertificateError;	// IMP=0x001000000002fcd7
- (id)_cannotStoreRootCertificateError;	// IMP=0x001000000002fc04
- (id)_cannotStoreCertificateError;	// IMP=0x001000000002fb31
- (id)_tooManyCertificatesError;	// IMP=0x001000000002fa5e
- (id)_invalidPasscodeError;	// IMP=0x001000000002f98b
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x001000000002f736
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x001000000002efb6
- (void)remove;	// IMP=0x001000000002ef33
- (void)unsetAside;	// IMP=0x001000000002ed3b
- (void)setAside;	// IMP=0x001000000002ecfd
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002e78d
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x001000000002ddec
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002dc9a
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002dae2
- (void)dealloc;	// IMP=0x001000000002da9c
- (id)userInputFields;	// IMP=0x001000000002d8f9

@end

