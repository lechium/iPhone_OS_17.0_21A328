//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackSyncAction : PBCodable
{
    NSString *_participantState;	// 8 = 0x8
    int _payload;	// 16 = 0x10
    NSString *_transportControlState;	// 24 = 0x18
    CDStruct_69063d38 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a1b11
- (unsigned long long)hash;	// IMP=0x00000000001a1a91
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a19ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a18eb
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a188e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a1881
- (id)dictionaryRepresentation;	// IMP=0x00000000001a1799
- (id)description;	// IMP=0x00000000001a16ea

@end

