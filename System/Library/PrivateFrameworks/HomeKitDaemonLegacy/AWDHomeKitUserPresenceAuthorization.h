//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitUserPresenceAuthorization : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _auth;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int auth:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b3d9ae
- (unsigned long long)hash;	// IMP=0x0000000000b3d968
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3d8b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3d835
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b3d7d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b3d766
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b3d52d
- (id)dictionaryRepresentation;	// IMP=0x0000000000b3d419
- (id)description;	// IMP=0x0000000000b3d36a
- (int)StringAsAuth:(id)arg1;	// IMP=0x0000000000b3d2d3
- (id)authAsString:(int)arg1;	// IMP=0x0000000000b3d28b
@property(nonatomic) _Bool hasAuth;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(nonatomic) _Bool hasTimestamp;

@end
