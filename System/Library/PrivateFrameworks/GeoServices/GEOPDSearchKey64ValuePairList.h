//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000412956
- (unsigned long long)hash;	// IMP=0x0000000000412939
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004128a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041270b
- (void)writeTo:(id)arg1;	// IMP=0x00000000004125d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004123fa
- (id)jsonRepresentation;	// IMP=0x00000000004123eb
- (id)dictionaryRepresentation;	// IMP=0x000000000041217d
- (id)description;	// IMP=0x00000000004120ce

@end

