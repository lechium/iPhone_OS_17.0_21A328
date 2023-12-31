//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable
{
    NSString *_containerScopedUserId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000197ecc
@property(retain, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000197e1f
- (unsigned long long)hash;	// IMP=0x0000000000197dd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000197d1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000197c7c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000197c19
- (void)writeTo:(id)arg1;	// IMP=0x0000000000197bbc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000197baf
- (id)dictionaryRepresentation;	// IMP=0x00000000001979c2
- (id)description;	// IMP=0x0000000000197913
@property(readonly, nonatomic) _Bool hasContainerScopedUserId;
@property(readonly, nonatomic) _Bool hasToken;

@end

