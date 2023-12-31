//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PUProtoPasscodePolicy : PBCodable
{
    unsigned int _minimumLength;	// 8 = 0x8
    _Bool _modificationAllowed;	// 12 = 0xc
    struct {
        unsigned int minimumLength:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int minimumLength; // @synthesize minimumLength=_minimumLength;
@property(nonatomic) _Bool modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000bc24
- (unsigned long long)hash;	// IMP=0x001000000000bbe8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000bb3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000bacc
- (void)copyTo:(id)arg1;	// IMP=0x001000000000ba9b
- (void)writeTo:(id)arg1;	// IMP=0x001000000000ba39
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000ba2c
- (id)dictionaryRepresentation;	// IMP=0x001000000000b712
- (id)description;	// IMP=0x001000000000b663
@property(nonatomic) _Bool hasMinimumLength;

@end

