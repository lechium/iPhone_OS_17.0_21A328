//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable
{
    NSMutableArray *_encodeDecodeFeatures;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 16 = 0x10
    struct {
        unsigned int rtpSSRC:1;
    } _has;	// 20 = 0x14
}

+ (Class)encodeDecodeFeaturesType;	// IMP=0x0010000000275a17
@property(retain, nonatomic) NSMutableArray *encodeDecodeFeatures; // @synthesize encodeDecodeFeatures=_encodeDecodeFeatures;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002763ac
- (unsigned long long)hash;	// IMP=0x0000000000276360
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002762db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027611d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000276071
- (void)writeTo:(id)arg1;	// IMP=0x0000000000275f52
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000275f45
- (id)dictionaryRepresentation;	// IMP=0x0000000000275ac2
- (id)description;	// IMP=0x0000000000275a28
- (id)encodeDecodeFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002759fa
- (unsigned long long)encodeDecodeFeaturesCount;	// IMP=0x00000000002759dd
- (void)addEncodeDecodeFeatures:(id)arg1;	// IMP=0x0000000000275990
- (void)clearEncodeDecodeFeatures;	// IMP=0x0000000000275973
@property(nonatomic) _Bool hasRtpSSRC;
- (void)dealloc;	// IMP=0x00000000002758cb
- (_Bool)loadEncodeDecodeFeatures:(id)arg1;	// IMP=0x00000000003416d1
- (id)u1Config;	// IMP=0x000000000034166c
- (id)initWithU1Config:(id)arg1;	// IMP=0x000000000034155d

@end

