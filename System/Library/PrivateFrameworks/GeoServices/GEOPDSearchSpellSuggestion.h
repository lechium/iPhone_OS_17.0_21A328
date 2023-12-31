//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSpellSuggestion : PBCodable
{
    double _score;	// 8 = 0x8
    GEOPDSearchTokenSet *_suggestion;	// 16 = 0x10
    unsigned int _editDistance;	// 24 = 0x18
    float _rawScore;	// 28 = 0x1c
    struct {
        unsigned int has_score:1;
        unsigned int has_editDistance:1;
        unsigned int has_rawScore:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000120da3f
- (unsigned long long)hash;	// IMP=0x000000000120d7e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000120d6df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000120d607
- (void)writeTo:(id)arg1;	// IMP=0x000000000120d553
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000120d544
- (id)jsonRepresentation;	// IMP=0x000000000120ccc0
- (id)dictionaryRepresentation;	// IMP=0x000000000120caac
- (id)description;	// IMP=0x000000000120c9fd

@end

