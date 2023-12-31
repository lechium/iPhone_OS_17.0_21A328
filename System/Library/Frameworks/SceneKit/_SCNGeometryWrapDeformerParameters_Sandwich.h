//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNGeometryWrapDeformerParameters.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _SCNGeometryWrapDeformerParameters_Sandwich : SCNGeometryWrapDeformerParameters
{
    unsigned long long _mode;	// 8 = 0x8
    unsigned int _vertexCount;	// 16 = 0x10
    NSArray *_extraLayers;	// 24 = 0x18
    CDStruct_14d5dc5e _deformedToDrivingBindingTransform;	// 32 = 0x20
    struct {
        void *pointIndices;
        unsigned long long pointIndicesStride;
        unsigned long long pointIndicesFormat;
        void *barycentricCoords;
        unsigned long long barycentricCoordsStride;
        unsigned long long barycentricCoordsFormat;
    } _bindingData[2];	// 96 = 0x60
    float *_bindingDriver0Influences;	// 192 = 0xc0
    unsigned long long _bindingDriver0InfluencesLength;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000013abcc
- (void)_initParametersIfNeededForSharedFaceIndicesWithDrivingNode0Ref:(struct __C3DNode *)arg1 drivingNode1Ref:(struct __C3DNode *)arg2 extraLayerMeshes:(id)arg3 deformedNodeRef:(struct __C3DNode *)arg4;	// IMP=0x000000000013b7f0
- (void)_initParametersIfNeededForDifferentFaceIndicesWithDrivingNode0Ref:(struct __C3DNode *)arg1 drivingNode1Ref:(struct __C3DNode *)arg2 deformedNodeRef:(struct __C3DNode *)arg3;	// IMP=0x000000000013b3e1
- (void)initParametersIfNeededWithDrivingNode0Ref:(struct __C3DNode *)arg1 drivingNode1Ref:(struct __C3DNode *)arg2 deformedNodeRef:(struct __C3DNode *)arg3;	// IMP=0x000000000013b1b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013adff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013abd4
- (void)dealloc;	// IMP=0x000000000013ab48
- (id)initWithDriverSandwichNode0:(id)arg1 driverSandwichNode1:(id)arg2 extraLayers:(id)arg3 deformedNode:(id)arg4 mode:(unsigned long long)arg5 bindingTransform:(CDStruct_14d5dc5e)arg6;	// IMP=0x000000000013a93d

@end

