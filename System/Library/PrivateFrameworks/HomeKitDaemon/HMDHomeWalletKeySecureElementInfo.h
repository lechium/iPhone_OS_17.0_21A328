//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKeySecureElementInfo : HMFObject
{
    NSData *_deviceCredentialKey;	// 8 = 0x8
    NSString *_applicationIdentifier;	// 16 = 0x10
    NSString *_subCredentialIdentifier;	// 24 = 0x18
    NSString *_secureElementIdentifier;	// 32 = 0x20
    NSString *_pairedReaderIdentifier;	// 40 = 0x28
}

+ (id)shortDescription;	// IMP=0x00600000007c089c
+ (id)createForExpressConflictCheckWithSecureElementIdentifier:(id)arg1;	// IMP=0x00600000007c082f
+ (id)createForEasyProvisioning;	// IMP=0x00600000007c07e7
- (void).cxx_destruct;	// IMP=0x00000000007c0783
@property(readonly, copy) NSString *pairedReaderIdentifier; // @synthesize pairedReaderIdentifier=_pairedReaderIdentifier;
@property(readonly, copy) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, copy) NSString *subCredentialIdentifier; // @synthesize subCredentialIdentifier=_subCredentialIdentifier;
@property(readonly, copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, copy) NSData *deviceCredentialKey; // @synthesize deviceCredentialKey=_deviceCredentialKey;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007c070a
- (id)attributeDescriptions;	// IMP=0x00000000007c04b2
- (id)description;	// IMP=0x00000000007c04a8
- (id)privateDescription;	// IMP=0x00000000007c0496
- (id)shortDescription;	// IMP=0x00000000007c0484
- (unsigned long long)hash;	// IMP=0x00000000007c0354
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007c00af
- (id)initWithPKPass:(id)arg1;	// IMP=0x00000000007bff5e
- (id)initWithDeviceCredentialKey:(id)arg1 applicationIdentifier:(id)arg2 subCredentialIdentifier:(id)arg3 secureElementIdentifier:(id)arg4 pairedReaderIdentifier:(id)arg5;	// IMP=0x00000000007bfdf9

@end

