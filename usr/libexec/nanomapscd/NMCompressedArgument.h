//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NMCompressedArgument : PBCodable
{
    int _compressionType;	// 8 = 0x8
    NSData *_dataValue;	// 16 = 0x10
    struct {
        unsigned int compressionType:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00100000000054db
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000005453
- (unsigned long long)hash;	// IMP=0x0010000000005400
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000005346
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000052ae
- (void)copyTo:(id)arg1;	// IMP=0x001000000000524b
- (void)writeTo:(id)arg1;	// IMP=0x00100000000051e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000051d8
- (id)dictionaryRepresentation;	// IMP=0x0010000000004f1b
- (id)description;	// IMP=0x0010000000004e6c
- (int)StringAsCompressionType:(id)arg1;	// IMP=0x0010000000004e01
- (id)compressionTypeAsString:(int)arg1;	// IMP=0x0010000000004dab
@property(nonatomic) _Bool hasCompressionType;
@property(nonatomic) int compressionType; // @synthesize compressionType=_compressionType;
@property(readonly, nonatomic) _Bool hasDataValue;
- (id);	// IMP=0x001000000004fe6c

@end
