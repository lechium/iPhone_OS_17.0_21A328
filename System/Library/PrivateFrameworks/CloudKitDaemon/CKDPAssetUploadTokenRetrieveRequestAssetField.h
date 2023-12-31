//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable
{
    NSMutableArray *_assets;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_field;	// 16 = 0x10
}

+ (Class)assetsType;	// IMP=0x00100000001d64d2
- (void).cxx_destruct;	// IMP=0x00000000001d70f5
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d6f21
- (unsigned long long)hash;	// IMP=0x00000000001d6ed4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d6e1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d6c44
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d6b5c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d6a0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d69fd
- (id)dictionaryRepresentation;	// IMP=0x00000000001d6592
- (id)description;	// IMP=0x00000000001d64e3
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d64b5
- (unsigned long long)assetsCount;	// IMP=0x00000000001d6498
- (void)addAssets:(id)arg1;	// IMP=0x00000000001d642e
- (void)clearAssets;	// IMP=0x00000000001d6411
@property(readonly, nonatomic) _Bool hasField;

@end

