//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKCDPInitializeContainerResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000362fc1
- (unsigned long long)hash;	// IMP=0x0000000000362f96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000362ef4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000362e90
- (void)copyTo:(id)arg1;	// IMP=0x0000000000362e6a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000362e3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000362c86
- (id)dictionaryRepresentation;	// IMP=0x0000000000362beb
- (id)description;	// IMP=0x0000000000362b3c
@property(nonatomic) _Bool hasSuccess;

@end

