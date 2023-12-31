//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherSuggestionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _requestLocalTimestamp;	// 16 = 0x10
    GEOPDViewportInfo *_viewportInfo;	// 24 = 0x18
    struct {
        unsigned int has_requestLocalTimestamp:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000064066c
- (unsigned long long)hash;	// IMP=0x0000000000640545
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000640485
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006403d3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000640350
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000640341
- (id)jsonRepresentation;	// IMP=0x00000000006400bc
- (id)dictionaryRepresentation;	// IMP=0x000000000063fe5a
- (id)description;	// IMP=0x000000000063fdab

@end

