//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCertifiedDeliveryReplayCommitter, IDSEndpoint, IDSSigningKeyDiversifier, NSString;
@protocol IDSMPFullDeviceIdentityContainerEncrypter, IDSMPFullDeviceIdentitySigner;

@interface IDSEndpointEncrypter : NSObject
{
    _Bool _forceLegacyPK;	// 8 = 0x8
    unsigned int _keyType;	// 12 = 0xc
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityContainerEncrypter;	// 16 = 0x10
    IDSCertifiedDeliveryReplayCommitter *_replayCommitter;	// 24 = 0x18
    IDSEndpoint *_endpoint;	// 32 = 0x20
    id <IDSMPFullDeviceIdentitySigner> _fullDeviceIdentitySigner;	// 40 = 0x28
    IDSSigningKeyDiversifier *_keyDiversifier;	// 48 = 0x30
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityEncrypter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000003033e2
@property(retain, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityEncrypter; // @synthesize fullDeviceIdentityEncrypter=_fullDeviceIdentityEncrypter;
@property(readonly, nonatomic) IDSSigningKeyDiversifier *keyDiversifier; // @synthesize keyDiversifier=_keyDiversifier;
@property(readonly, nonatomic) unsigned int keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentitySigner> fullDeviceIdentitySigner; // @synthesize fullDeviceIdentitySigner=_fullDeviceIdentitySigner;
@property(nonatomic) _Bool forceLegacyPK; // @synthesize forceLegacyPK=_forceLegacyPK;
@property(retain, nonatomic) IDSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) IDSCertifiedDeliveryReplayCommitter *replayCommitter; // @synthesize replayCommitter=_replayCommitter;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
- (_Bool)_isSecKeyType;	// IMP=0x0010000000303350
- (_Bool)_isNGMKeyType;	// IMP=0x0010000000303338
- (_Bool)verifySignedData:(id)arg1 matchesData:(id)arg2 forType:(long long)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000302ee2
- (void)verifySignedData:(id)arg1 matchesData:(id)arg2 forType:(long long)arg3 onQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000302b67
- (void)decryptData:(id)arg1 guid:(id)arg2 usingIdentifier:(id)arg3 onQueue:(id)arg4 isRetry:(_Bool)arg5 replayKey:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000302b33
- (void)decryptData:(id)arg1 usingIdentifier:(id)arg2 onQueue:(id)arg3 isRetry:(_Bool)arg4 replayKey:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x001000000030238c
- (id)decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(_Bool)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000301e05
- (id)encryptData:(id)arg1 forceSizeOptimizations:(_Bool)arg2 resetState:(_Bool)arg3 withEncryptedAttributes:(id)arg4 usedIdentifier:(id *)arg5 onQueue:(id)arg6 metadata:(id *)arg7 error:(id *)arg8;	// IMP=0x001000000030188f
- (id)initWithEndpoint:(id)arg1 fullDeviceIdentitySigner:(id)arg2 keyType:(unsigned int)arg3 keyDiversifier:(id)arg4;	// IMP=0x00100000003017ca
- (id)initWithEndpoint:(id)arg1 fullDeviceIdentityContainerEncrypter:(id)arg2 replayCommitter:(id)arg3 forceLegacyPK:(_Bool)arg4;	// IMP=0x0010000000301705

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
