//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitSoftwareUpdateAutomaticUpdateToggled : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    _Bool _isEnabled;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b30c43
- (unsigned long long)hash;	// IMP=0x0000000000b30bfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b30b39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b30ab8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b30a5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b309e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b307a9
- (id)dictionaryRepresentation;	// IMP=0x0000000000b306af
- (id)description;	// IMP=0x0000000000b30600
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasTimestamp;

@end

