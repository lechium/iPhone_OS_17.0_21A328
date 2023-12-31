//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoFirstUnlockState : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int firstUnlocked:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool firstUnlocked; // @synthesize firstUnlocked=_firstUnlocked;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000028b62
- (unsigned long long)hash;	// IMP=0x0010000000028b1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000028a5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000289db
- (void)copyTo:(id)arg1;	// IMP=0x001000000002897f
- (void)writeTo:(id)arg1;	// IMP=0x001000000002890b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000288fe
- (id)dictionaryRepresentation;	// IMP=0x00100000000285c7
- (id)description;	// IMP=0x0010000000028518
@property(nonatomic) _Bool hasFirstUnlocked;
@property(nonatomic) _Bool hasVersion;

@end

