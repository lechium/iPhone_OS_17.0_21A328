//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper;

@interface IDSRegistrationKeyManagerIdentityDataSource : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;	// 8 = 0x8
}

+ (id)containerStorageItemNameForKTDataAtKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2;	// IMP=0x0040000000423d89
+ (id)containerStorageItemNameForIsRegisteredAtApplicationKeyIndex:(unsigned short)arg1;	// IMP=0x0010000000423d5d
+ (id)containerStorageItemNameForContainerIdentityIdentifier:(long long)arg1 applicationKeyIndex:(unsigned short)arg2;	// IMP=0x0010000000423ce2
+ (id)containerStorageItemNameForContainerIdentityIdentifier:(long long)arg1;	// IMP=0x0010000000423cac
+ (id)legacyStorageItemNameForContainerIdentityIdentifier:(long long)arg1;	// IMP=0x0010000000423c76
+ (id)storageItemNameForLegacyIdentityIdentifier:(long long)arg1;	// IMP=0x0010000000423c51
- (void).cxx_destruct;	// IMP=0x0020000000427b7d
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (unsigned int)ngmVersionFromDataRepresentation:(id)arg1;	// IMP=0x0010000000427a86
- (id)dataRepresentationForNGMVersion:(unsigned int)arg1;	// IMP=0x0010000000427998
- (unsigned int)ngmVersion;	// IMP=0x00100000004278c6
- (id)_loadContainerWithIdentifier:(id)arg1 serializationDidChage:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 needsEncryptionIdentityRoll:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0010000000427397
- (id)_loadIdentityWithIdentifier:(id)arg1 serializationDidChage:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0010000000426edc
- (id)_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0010000000426b90
- (id)_retrying_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00100000004268c2
- (_Bool)removeIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000042667b
- (_Bool)removeIdentityWithApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0010000000426547
- (_Bool)_removeDataFromKeychainForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000004263d4
- (void)_eraseNGMIdentityFromKeychain:(id)arg1;	// IMP=0x00100000004262be
- (_Bool)removeKTRegistrationDataForKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000426224
- (_Bool)saveKTRegistrationData:(id)arg1 forKeyIndex:(unsigned short)arg2 isRegistered:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000042615e
- (id)loadKTRegistrationDataForKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000004260ba
- (_Bool)saveIsRegistered:(_Bool)arg1 forApplicationKeyIndex:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x0010000000425f8e
- (_Bool)loadIsIdentityRegisteredForApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0010000000425eda
- (id)loadIdentityContainerWithIdentifier:(long long)arg1 withLegacyFallback:(_Bool)arg2 serializationDidChange:(_Bool *)arg3 deserializationDidFail:(_Bool *)arg4 needsEncryptionIdentityRoll:(_Bool *)arg5 nonLegacyError:(id *)arg6 error:(id *)arg7;	// IMP=0x00100000004256c0
- (struct __SecKey *)copyIdentityFromKeychainWithApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0010000000425257
- (_Bool)saveIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000424f92
- (id)generateIdentityContainerWithIdentifier:(long long)arg1 existingLegacyIdentity:(id)arg2 existingNGMIdentity:(id)arg3 dataProtectionClass:(long long)arg4 nonLegacyError:(id *)arg5 error:(id *)arg6;	// IMP=0x0010000000424ace
- (struct __SecKey *)createIdentityForApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x001000000042482c
- (_Bool)removeLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000004244ec
- (id)loadLegacyIdentityWithIdentifier:(long long)arg1 serializationDidChange:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000004243d4
- (_Bool)saveLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000424027
- (id)generateLegacyIdentityWithIdentifier:(long long)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000423e40
- (id)initWithKeychainWrapper:(id)arg1;	// IMP=0x0010000000423dd5

@end
