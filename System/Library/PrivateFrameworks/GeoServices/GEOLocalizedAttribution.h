//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLocalizedAttribution : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_captionDisplayString;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    NSMutableArray *_logoURLs;	// 40 = 0x28
    NSMutableArray *_snippetLogoURLs;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_captionDisplayString:1;
        unsigned int read_displayName:1;
        unsigned int read_language:1;
        unsigned int read_logoURLs:1;
        unsigned int read_snippetLogoURLs:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000113de3c
- (unsigned long long)hash;	// IMP=0x000000000113dd93
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113dc41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000113d784
- (void)writeTo:(id)arg1;	// IMP=0x000000000113d3d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000113d3c7
- (id)jsonRepresentation;	// IMP=0x000000000113d14e
- (id)dictionaryRepresentation;	// IMP=0x000000000113cfb6
- (id)description;	// IMP=0x000000000113cf07
- (id)initWithData:(id)arg1;	// IMP=0x000000000113c1e8
- (id)init;	// IMP=0x000000000113c18c
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;	// IMP=0x0000000001244746

@end

