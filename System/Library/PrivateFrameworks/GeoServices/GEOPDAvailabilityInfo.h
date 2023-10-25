//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAvailabilityInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _availableNum;	// 16 = 0x10
    int _status;	// 20 = 0x14
    unsigned int _totalNum;	// 24 = 0x18
    struct {
        unsigned int has_availableNum:1;
        unsigned int has_status:1;
        unsigned int has_totalNum:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000bc2c31
- (unsigned long long)hash;	// IMP=0x0000000000bc2bcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bc2afa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bc2a42
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bc2994
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bc2987
- (id)jsonRepresentation;	// IMP=0x0000000000bc2048
- (id)dictionaryRepresentation;	// IMP=0x0000000000bc1d90
- (id)description;	// IMP=0x0000000000bc1ce1

@end
