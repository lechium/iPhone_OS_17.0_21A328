//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionDirections : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000beccf1
- (unsigned long long)hash;	// IMP=0x0000000000becce9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000becca6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000becc49
- (void)writeTo:(id)arg1;	// IMP=0x0000000000becc2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000becc1f
- (id)jsonRepresentation;	// IMP=0x0000000000becb0f
- (id)dictionaryRepresentation;	// IMP=0x0000000000bec9a5
- (id)description;	// IMP=0x0000000000bec8f6

@end

