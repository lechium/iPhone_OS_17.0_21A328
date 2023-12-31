//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBInstallAttribution : PBCodable
{
    unsigned long long _adamId;	// 8 = 0x8
    unsigned long long _campaignId;	// 16 = 0x10
    unsigned long long _sourceAppAdamId;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    NSString *_adNetworkId;	// 40 = 0x28
    NSString *_attributionSignature;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
    NSString *_version;	// 64 = 0x40
    struct {
        unsigned int adamId:1;
        unsigned int campaignId:1;
        unsigned int sourceAppAdamId:1;
        unsigned int timestamp:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000006da1a
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long sourceAppAdamId; // @synthesize sourceAppAdamId=_sourceAppAdamId;
@property(nonatomic) unsigned long long adamId; // @synthesize adamId=_adamId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned long long campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006d820
- (unsigned long long)hash;	// IMP=0x001000000006d706
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d54f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d3e9
- (void)copyTo:(id)arg1;	// IMP=0x001000000006d2c7
- (void)writeTo:(id)arg1;	// IMP=0x001000000006d1a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006d194
- (id)dictionaryRepresentation;	// IMP=0x001000000006cb5b
- (id)description;	// IMP=0x001000000006caac
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasSourceAppAdamId;
@property(nonatomic) _Bool hasAdamId;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasAttributionSignature;
@property(readonly, nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasAdNetworkId;

@end

