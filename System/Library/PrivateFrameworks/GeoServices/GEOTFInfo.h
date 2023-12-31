//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_comment;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_comment:1;
        unsigned int read_language:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000033c9e4
- (unsigned long long)hash;	// IMP=0x000000000033c98d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033c8bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033c72c
- (void)writeTo:(id)arg1;	// IMP=0x000000000033c59c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033c58d
- (id)jsonRepresentation;	// IMP=0x000000000033c583
- (id)dictionaryRepresentation;	// IMP=0x000000000033c360
- (id)description;	// IMP=0x000000000033c2b1
- (id)initWithData:(id)arg1;	// IMP=0x000000000033be6c
- (id)init;	// IMP=0x000000000033be10

@end

