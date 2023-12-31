//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable
{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;	// 8 = 0x8
    NSData *_serializedResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000329a2c
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // @synthesize attestationResponse=_attestationResponse;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000329969
- (unsigned long long)hash;	// IMP=0x000000000032991c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000329864
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003297c6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000329763
- (void)writeTo:(id)arg1;	// IMP=0x0000000000329706
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003296f9
- (id)dictionaryRepresentation;	// IMP=0x0000000000329482
- (id)description;	// IMP=0x00000000003293d3
@property(readonly, nonatomic) _Bool hasAttestationResponse;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end

