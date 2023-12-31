//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchBrandDensity, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchChainInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _relationshipTypes;	// 16 = 0x10
    GEOPDSearchBrandDensity *_brandDensity;	// 40 = 0x28
    NSString *_brandDisplayName;	// 48 = 0x30
    unsigned long long _muid;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_relationshipTypes:1;
        unsigned int read_brandDensity:1;
        unsigned int read_brandDisplayName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000b01792
- (unsigned long long)hash;	// IMP=0x0000000000b01707
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b01606
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b01450
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b01273
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b01264
- (id)jsonRepresentation;	// IMP=0x0000000000b0067c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b0029f
- (id)description;	// IMP=0x0000000000b001f0
- (void)dealloc;	// IMP=0x0000000000affa8e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000affa32
- (id)init;	// IMP=0x0000000000aff9d6

@end

