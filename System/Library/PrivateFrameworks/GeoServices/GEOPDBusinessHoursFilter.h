//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHoursFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bd2fbe
- (unsigned long long)hash;	// IMP=0x0000000000bd2fb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd2f73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd2f16
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd2ef9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd2eec
- (id)jsonRepresentation;	// IMP=0x0000000000bd2c30
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd2ac6
- (id)description;	// IMP=0x0000000000bd2a17

@end

