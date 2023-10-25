//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying>
{
    unsigned int _secondaryVersion;	// 8 = 0x8
    NSData *_signingKey;	// 16 = 0x10
    CDStruct_f773167c _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001abc0
@property(nonatomic) unsigned int secondaryVersion; // @synthesize secondaryVersion=_secondaryVersion;
@property(retain, nonatomic) NSData *signingKey; // @synthesize signingKey=_signingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ab28
- (unsigned long long)hash;	// IMP=0x000000000001aad6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001aa1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a984
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a926
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a8b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a8a9
- (id)dictionaryRepresentation;	// IMP=0x000000000001a607
- (id)description;	// IMP=0x000000000001a558
@property(nonatomic) _Bool hasSecondaryVersion;

@end
