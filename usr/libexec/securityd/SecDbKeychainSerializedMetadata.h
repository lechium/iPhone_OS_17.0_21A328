//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SecDbKeychainSerializedMetadata : PBCodable
{
    NSData *_ciphertext;	// 8 = 0x8
    NSString *_tamperCheck;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ab93b
@property(retain, nonatomic) NSString *tamperCheck; // @synthesize tamperCheck=_tamperCheck;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(retain, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ab849
- (unsigned long long)hash;	// IMP=0x00100000000ab7dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ab6fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ab638
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ab5af
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ab538
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ab3ac
- (id)dictionaryRepresentation;	// IMP=0x00100000000ab302
- (id)description;	// IMP=0x00100000000ab253

@end
