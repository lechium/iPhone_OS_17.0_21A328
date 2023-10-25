//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable
{
    NSData *_featureBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000dfa2a
- (void).cxx_destruct;	// IMP=0x000000000017fb85
@property(retain, nonatomic) NSData *featureBlob; // @synthesize featureBlob=_featureBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017fac2
- (unsigned long long)hash;	// IMP=0x000000000017fa75
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017f9bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f91f
- (void)copyTo:(id)arg1;	// IMP=0x000000000017f8ae
- (void)writeTo:(id)arg1;	// IMP=0x000000000017f84f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017f842
- (id)dictionaryRepresentation;	// IMP=0x000000000017f5c4
- (id)description;	// IMP=0x000000000017f515
- (id)exportToLegacyDictionary;	// IMP=0x00000000000dfbd6

@end
