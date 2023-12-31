//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKKSSerializedKey : PBCodable
{
    NSData *_key;	// 8 = 0x8
    NSString *_keyclass;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002a771
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002a63a
- (unsigned long long)hash;	// IMP=0x001000000002a5b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002a4aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002a3c0
- (void)copyTo:(id)arg1;	// IMP=0x001000000002a31f
- (void)writeTo:(id)arg1;	// IMP=0x001000000002a290
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002a0cd
- (id)dictionaryRepresentation;	// IMP=0x0010000000029ffc
- (id)description;	// IMP=0x0010000000029f4d

@end

