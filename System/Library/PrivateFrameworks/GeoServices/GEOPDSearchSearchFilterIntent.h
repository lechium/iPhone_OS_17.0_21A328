//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSSearchFilter;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSearchFilterIntent : PBCodable
{
    GEOPDSSearchFilter *_searchFilter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b62beb
- (unsigned long long)hash;	// IMP=0x0000000000b62bce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b62b3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b62ac6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b62aa2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b62a93
- (id)jsonRepresentation;	// IMP=0x0000000000b62a84
- (id)dictionaryRepresentation;	// IMP=0x0000000000b629a2
- (id)description;	// IMP=0x0000000000b628f3

@end

