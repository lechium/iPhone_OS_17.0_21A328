//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLBuffer, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNGeometryVariableTopologySampleDeformerMeshElementData : NSObject
{
    unsigned long long _originalPrimitiveCount;	// 8 = 0x8
    SCNMTLBuffer *_originalIndexBuffer;	// 16 = 0x10
    id <MTLBuffer> _deformedIndexBuffer;	// 24 = 0x18
    unsigned long long _drawIndexedPrimitivesIndirectBufferOffset;	// 32 = 0x20
    unsigned long long _subdividedVertexStartIndex;	// 40 = 0x28
    unsigned long long _deformedPrimitiveCountBufferOffset;	// 48 = 0x30
    SCNMTLComputePipeline *_computePipeline;	// 56 = 0x38
}

- (void)dealloc;	// IMP=0x000000000004df84

@end
