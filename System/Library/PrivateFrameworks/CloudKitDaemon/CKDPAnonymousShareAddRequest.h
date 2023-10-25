//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface CKDPAnonymousShareAddRequest : PBRequest
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x001000000016e0dd
- (void).cxx_destruct;	// IMP=0x000000000016e72c
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016e67f
- (unsigned long long)hash;	// IMP=0x000000000016e632
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016e57a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016e4dc
- (void)copyTo:(id)arg1;	// IMP=0x000000000016e479
- (Class)responseClass;	// IMP=0x000000000016e468
- (unsigned int)requestTypeCode;	// IMP=0x000000000016e45d
- (void)writeTo:(id)arg1;	// IMP=0x000000000016e400
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016e3f3
- (id)dictionaryRepresentation;	// IMP=0x000000000016e206
- (id)description;	// IMP=0x000000000016e157
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end
