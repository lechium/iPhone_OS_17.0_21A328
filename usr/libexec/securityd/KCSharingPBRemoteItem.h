//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class KCSharingPBInternetPasswordCredential, KCSharingPBPrivateKeyCredential, PBUnknownFields;

@interface KCSharingPBRemoteItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    KCSharingPBInternetPasswordCredential *_internetPassword;	// 16 = 0x10
    KCSharingPBPrivateKeyCredential *_privateKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000125ff9
@property(retain, nonatomic) KCSharingPBInternetPasswordCredential *internetPassword; // @synthesize internetPassword=_internetPassword;
@property(retain, nonatomic) KCSharingPBPrivateKeyCredential *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000125f0b
- (unsigned long long)hash;	// IMP=0x0010000000125ebe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000125e06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000125d55
- (void)writeTo:(id)arg1;	// IMP=0x0010000000125cdd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000125a8c
- (id)dictionaryRepresentation;	// IMP=0x001000000012596b
- (id)description;	// IMP=0x00100000001258bc
@property(readonly, nonatomic) _Bool hasInternetPassword;
@property(readonly, nonatomic) _Bool hasPrivateKey;

@end

