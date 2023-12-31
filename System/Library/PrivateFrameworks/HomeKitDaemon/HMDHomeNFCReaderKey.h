//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKey : HMFObject
{
    NSData *_publicKeyExternalRepresentation;	// 8 = 0x8
    NSData *_privateKey;	// 16 = 0x10
    NSData *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000051a519
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;	// IMP=0x001000000051a4fa
+ (id)identifierForKey:(id)arg1;	// IMP=0x001000000051a3b3
+ (id)createWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000051a2f2
+ (id)createWithExternalRepresentation:(id)arg1;	// IMP=0x001000000051a137
+ (id)createRandomKey;	// IMP=0x0010000000519eee
+ (id)createWithKeychainItem:(id)arg1;	// IMP=0x00100000007ed4df
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00100000007ed434
- (void).cxx_destruct;	// IMP=0x0000000000519eac
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;	// IMP=0x0000000000519c8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000519bde
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000519af1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000519ae6
- (unsigned long long)hash;	// IMP=0x0000000000519a25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000519877
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;	// IMP=0x0000000000519596
- (id)createKeychainItemForHome:(id)arg1;	// IMP=0x00000000007ed163

@end

