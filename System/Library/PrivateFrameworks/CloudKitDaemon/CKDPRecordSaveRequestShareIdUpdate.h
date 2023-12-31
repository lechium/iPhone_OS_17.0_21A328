//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShareIdentifier;

@interface CKDPRecordSaveRequestShareIdUpdate : PBCodable
{
    CKDPShareIdentifier *_shareId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003814f2
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000381474
- (unsigned long long)hash;	// IMP=0x0000000000381457
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003813c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038134f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000381325
- (void)writeTo:(id)arg1;	// IMP=0x0000000000381301
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003812f4
- (id)dictionaryRepresentation;	// IMP=0x00000000003810c0
- (id)description;	// IMP=0x0000000000381011
@property(readonly, nonatomic) _Bool hasShareId;

@end

