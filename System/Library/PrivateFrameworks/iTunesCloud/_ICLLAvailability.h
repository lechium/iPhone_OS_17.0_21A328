//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _ICLLAvailability : PBCodable
{
    CDStruct_95bda58d _repeatModes;	// 8 = 0x8
    CDStruct_95bda58d _shuffleModes;	// 32 = 0x20
    _Bool _autoPlay;	// 56 = 0x38
    struct {
        unsigned int autoPlay:1;
    } _has;	// 60 = 0x3c
}

- (unsigned long long)hash;	// IMP=0x00000000001b96ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b95d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b9546
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b9492
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b9485
- (id)dictionaryRepresentation;	// IMP=0x00000000001b9368
- (id)description;	// IMP=0x00000000001b92b9
- (void)dealloc;	// IMP=0x00000000001b926a

@end

