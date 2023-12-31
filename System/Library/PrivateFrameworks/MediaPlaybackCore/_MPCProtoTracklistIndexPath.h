//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _MPCProtoTracklistIndexPath : PBCodable
{
    long long _containerIndex;	// 8 = 0x8
    long long _itemIndex;	// 16 = 0x10
    struct {
        unsigned int containerIndex:1;
        unsigned int itemIndex:1;
    } _has;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x000000000011cba9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011caf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011ca73
- (void)writeTo:(id)arg1;	// IMP=0x000000000011ca00
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011c9f3
- (id)dictionaryRepresentation;	// IMP=0x000000000011c8fa
- (id)description;	// IMP=0x000000000011c84b

@end

