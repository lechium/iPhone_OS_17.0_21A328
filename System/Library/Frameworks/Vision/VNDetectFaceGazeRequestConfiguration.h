//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDetectFaceGazeRequestConfiguration
{
    float _gazeHeatMapThreshold;	// 8 = 0x8
    float _minimumFaceDimension;	// 12 = 0xc
    float _commonGazeLocationRadius;	// 16 = 0x10
    _Bool _resolveSomewhereElseDirection;	// 20 = 0x14
}

@property(nonatomic) _Bool resolveSomewhereElseDirection; // @synthesize resolveSomewhereElseDirection=_resolveSomewhereElseDirection;
@property(nonatomic) float commonGazeLocationRadius; // @synthesize commonGazeLocationRadius=_commonGazeLocationRadius;
@property(nonatomic) float minimumFaceDimension; // @synthesize minimumFaceDimension=_minimumFaceDimension;
@property(nonatomic) float gazeHeatMapThreshold; // @synthesize gazeHeatMapThreshold=_gazeHeatMapThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bfbcb
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000000bfb62

@end

