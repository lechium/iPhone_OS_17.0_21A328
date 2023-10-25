//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMPBMetadataCharacteristic : PBCodable
{
    NSString *_chrDescription;	// 8 = 0x8
    NSString *_uuidStr;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021fb73
@property(retain, nonatomic) NSString *chrDescription; // @synthesize chrDescription=_chrDescription;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021fac6
- (unsigned long long)hash;	// IMP=0x000000000021fa79
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f9c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f923
- (void)copyTo:(id)arg1;	// IMP=0x000000000021f8c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f863
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f856
- (id)dictionaryRepresentation;	// IMP=0x000000000021f7d3
- (id)description;	// IMP=0x000000000021f724
@property(readonly, nonatomic) _Bool hasChrDescription;
@property(readonly, nonatomic) _Bool hasUuidStr;

@end
