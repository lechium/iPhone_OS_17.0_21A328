//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAutoUnlockEscrowSecretInfo : PBCodable
{
    NSString *_pairingID;	// 8 = 0x8
    NSData *_secret;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010442e
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000104381
- (unsigned long long)hash;	// IMP=0x0010000000104334
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010427c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001041de
- (void)copyTo:(id)arg1;	// IMP=0x001000000010417b
- (void)writeTo:(id)arg1;	// IMP=0x001000000010411e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000104111
- (id)dictionaryRepresentation;	// IMP=0x0010000000103f24
- (id)description;	// IMP=0x0010000000103e75
@property(readonly, nonatomic) _Bool hasPairingID;
@property(readonly, nonatomic) _Bool hasSecret;

@end

