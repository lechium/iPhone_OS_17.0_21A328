//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011db7f
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011dad2
- (unsigned long long)hash;	// IMP=0x000000000011da85
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011d9cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d92f
- (void)copyTo:(id)arg1;	// IMP=0x000000000011d8be
- (void)writeTo:(id)arg1;	// IMP=0x000000000011d823
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011d816
- (id)dictionaryRepresentation;	// IMP=0x000000000011d629
- (id)description;	// IMP=0x000000000011d57a

@end

