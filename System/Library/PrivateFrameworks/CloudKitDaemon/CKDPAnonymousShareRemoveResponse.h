//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAnonymousShareRemoveResponse : PBCodable
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001cf4d8
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cf48f
- (unsigned long long)hash;	// IMP=0x00000000001cf472
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cf3e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cf36a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001cf340
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cf31c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cf30f
- (id)dictionaryRepresentation;	// IMP=0x00000000001cf16a
- (id)description;	// IMP=0x00000000001cf0bb
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

