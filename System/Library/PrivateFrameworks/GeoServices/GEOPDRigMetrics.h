//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDRigMetrics : PBCodable
{
    CDStruct_9f2792e4 _occlusionScores;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000011c6f85
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011c6f1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011c6ebf
- (void)writeTo:(id)arg1;	// IMP=0x00000000011c6e74
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011c6e67
- (id)jsonRepresentation;	// IMP=0x00000000011c6e58
- (id)dictionaryRepresentation;	// IMP=0x00000000011c6da8
- (id)description;	// IMP=0x00000000011c6cf9
- (void)dealloc;	// IMP=0x00000000011c6cb9

@end

