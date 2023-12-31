//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface IDSProtoKeyTransparencyTrustedDeviceMetadata : PBCodable
{
    double _timestamp;	// 8 = 0x8
    unsigned int _status;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c0cde
- (unsigned long long)hash;	// IMP=0x00100000000c0bbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c0b06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c0a85
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c0a27
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c09b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c09a5
- (id)dictionaryRepresentation;	// IMP=0x00100000000c069d
- (id)description;	// IMP=0x00100000000c05ee
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasStatus;

@end

