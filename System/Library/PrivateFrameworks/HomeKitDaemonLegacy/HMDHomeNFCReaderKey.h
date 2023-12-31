//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKey : HMFObject
{
    NSData *_publicKeyExternalRepresentation;	// 8 = 0x8
    NSData *_privateKey;	// 16 = 0x10
    NSData *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004674f1
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;	// IMP=0x00100000004674d2
+ (id)identifierForKey:(id)arg1;	// IMP=0x001000000046738b
+ (id)createWithExternalRepresentation:(id)arg1;	// IMP=0x00100000004671d0
+ (id)createRandomKey;	// IMP=0x0010000000466f87
+ (id)createWithKeychainItem:(id)arg1;	// IMP=0x0010000000708a16
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x001000000070896b
- (void).cxx_destruct;	// IMP=0x0000000000466f45
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;	// IMP=0x0000000000466d25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000466c77
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000466b8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000466b7f
- (unsigned long long)hash;	// IMP=0x0000000000466abe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000466910
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;	// IMP=0x0000000000466711
- (id)createKeychainItemForHome:(id)arg1;	// IMP=0x000000000070869a

@end

