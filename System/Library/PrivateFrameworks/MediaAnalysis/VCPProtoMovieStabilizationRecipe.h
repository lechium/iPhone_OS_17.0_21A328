//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoMovieStabilizationRecipe : PBCodable
{
    CDStruct_fae3dc92 _homographyParams;	// 8 = 0x8
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _timeValues;	// 32 = 0x20
    float _cropRectHeight;	// 56 = 0x38
    float _cropRectWidth;	// 60 = 0x3c
    float _cropRectX;	// 64 = 0x40
    float _cropRectY;	// 68 = 0x44
    float _inputBoundsHeight;	// 72 = 0x48
    float _inputBoundsWidth;	// 76 = 0x4c
    float _inputBoundsX;	// 80 = 0x50
    float _inputBoundsY;	// 84 = 0x54
    float _sourceSizeHeight;	// 88 = 0x58
    float _sourceSizeWidth;	// 92 = 0x5c
    int _timeScale;	// 96 = 0x60
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002b9e5b
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) float sourceSizeWidth; // @synthesize sourceSizeWidth=_sourceSizeWidth;
@property(nonatomic) float sourceSizeHeight; // @synthesize sourceSizeHeight=_sourceSizeHeight;
@property(nonatomic) float inputBoundsWidth; // @synthesize inputBoundsWidth=_inputBoundsWidth;
@property(nonatomic) float inputBoundsHeight; // @synthesize inputBoundsHeight=_inputBoundsHeight;
@property(nonatomic) float inputBoundsY; // @synthesize inputBoundsY=_inputBoundsY;
@property(nonatomic) float inputBoundsX; // @synthesize inputBoundsX=_inputBoundsX;
@property(nonatomic) float cropRectWidth; // @synthesize cropRectWidth=_cropRectWidth;
@property(nonatomic) float cropRectHeight; // @synthesize cropRectHeight=_cropRectHeight;
@property(nonatomic) float cropRectY; // @synthesize cropRectY=_cropRectY;
@property(nonatomic) float cropRectX; // @synthesize cropRectX=_cropRectX;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000030bfb4
- (unsigned long long)hash;	// IMP=0x000000000030b6f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030b53b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030b406
- (void)copyTo:(id)arg1;	// IMP=0x000000000030b231
- (void)writeTo:(id)arg1;	// IMP=0x000000000030b025
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030b018
- (id)dictionaryRepresentation;	// IMP=0x000000000030a544
- (id)description;	// IMP=0x000000000030a495
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000030a47e
- (float)homographyParamsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000030a3ac
- (void)addHomographyParams:(float)arg1;	// IMP=0x000000000030a39b
- (void)clearHomographyParams;	// IMP=0x000000000030a38a
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)setTimeValues:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000030a350
- (long long)timeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000030a27f
- (void)addTimeValue:(long long)arg1;	// IMP=0x000000000030a26b
- (void)clearTimeValues;	// IMP=0x000000000030a25a
@property(readonly, nonatomic) long long *timeValues;
@property(readonly, nonatomic) unsigned long long timeValuesCount;
- (void)dealloc;	// IMP=0x000000000030a1e8
- (id)exportToLegacyDictionary;	// IMP=0x00000000002ba7a6

@end
