//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveResponseHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007ba5b
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007b9ae
- (unsigned long long)hash;	// IMP=0x000000000007b961
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007b8a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b80b
- (void)copyTo:(id)arg1;	// IMP=0x000000000007b79a
- (void)writeTo:(id)arg1;	// IMP=0x000000000007b6ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007b6f2
- (id)dictionaryRepresentation;	// IMP=0x000000000007b505
- (id)description;	// IMP=0x000000000007b456

@end
