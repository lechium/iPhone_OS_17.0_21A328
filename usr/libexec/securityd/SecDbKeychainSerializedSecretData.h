//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SecDbKeychainSerializedSecretData : PBCodable
{
    NSData *_ciphertext;	// 8 = 0x8
    NSString *_tamperCheck;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000019d9af
@property(retain, nonatomic) NSString *tamperCheck; // @synthesize tamperCheck=_tamperCheck;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(retain, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019d8bd
- (unsigned long long)hash;	// IMP=0x001000000019d850
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019d770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019d6ac
- (void)copyTo:(id)arg1;	// IMP=0x001000000019d623
- (void)writeTo:(id)arg1;	// IMP=0x001000000019d5ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019d420
- (id)dictionaryRepresentation;	// IMP=0x001000000019d376
- (id)description;	// IMP=0x001000000019d2c7

@end
