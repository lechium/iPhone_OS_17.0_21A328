//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface MADProtoSceneClassification : PBCodable
{
    double _confidence;	// 8 = 0x8
    VCPProtoBounds *_boundingBox;	// 16 = 0x10
    unsigned int _sceneIdentifier;	// 24 = 0x18
}

+ (id)protoFromPhotosSceneClassification:(id)arg1;	// IMP=0x00100000001070d9
- (void).cxx_destruct;	// IMP=0x000000000031754b
@property(retain, nonatomic) VCPProtoBounds *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000317469
- (unsigned long long)hash;	// IMP=0x0000000000317340
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031728a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003171f0
- (void)copyTo:(id)arg1;	// IMP=0x00000000003171a8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000317136
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000317129
- (id)dictionaryRepresentation;	// IMP=0x0000000000316d88
- (id)description;	// IMP=0x0000000000316cd9
@property(readonly, nonatomic) _Bool hasBoundingBox;
- (id)photosSceneClassification;	// IMP=0x0000000000107231

@end
