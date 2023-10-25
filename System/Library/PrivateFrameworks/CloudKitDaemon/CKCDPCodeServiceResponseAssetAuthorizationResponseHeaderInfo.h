//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponseHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000172f3f
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000172e92
- (unsigned long long)hash;	// IMP=0x0000000000172e45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000172d8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000172cef
- (void)copyTo:(id)arg1;	// IMP=0x0000000000172c8c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000172c2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000172c22
- (id)dictionaryRepresentation;	// IMP=0x0000000000172a35
- (id)description;	// IMP=0x0000000000172986
@property(readonly, nonatomic) _Bool hasHeaderValue;
@property(readonly, nonatomic) _Bool hasHeaderKey;

@end
