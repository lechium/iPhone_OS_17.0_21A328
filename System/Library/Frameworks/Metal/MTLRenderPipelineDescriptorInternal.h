//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor
{
    struct MTLRenderPipelineDescriptorPrivate _private;	// 48 = 0x30
}

- (id)newPipelineScript;	// IMP=0x000000000011ef71
- (id)newSerializedMeshDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000011ef3b
- (id)newSerializedObjectDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000011ef05
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000011e365
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000011e34e
- (id)serializeFragmentData;	// IMP=0x000000000011e336
- (id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000011deb8
- (void)validateWithDevice:(id)arg1;	// IMP=0x000000000011da22
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011d570
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000011c9db
- (unsigned long long)stencilAttachmentPixelFormat;	// IMP=0x000000000011c9c9
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000011c9b7
- (unsigned long long)depthAttachmentPixelFormat;	// IMP=0x000000000011c9a5
- (id)colorAttachments;	// IMP=0x000000000011c994
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011c1a0
- (unsigned long long)hash;	// IMP=0x000000000011bbaf
- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000011bb9f
- (id)gpuCompilerSPIOptions;	// IMP=0x000000000011bb8a
- (void)setGpuCompilerSPIOptions:(id)arg1;	// IMP=0x000000000011bb3d
- (id)driverCompilerOptions;	// IMP=0x000000000011bb28
- (void)setDriverCompilerOptions:(id)arg1;	// IMP=0x000000000011badb
- (id)vertexDescriptor;	// IMP=0x000000000011baa4
- (void)setVertexDescriptor:(id)arg1;	// IMP=0x000000000011ba16
- (void)attachVertexDescriptor:(id)arg1;	// IMP=0x000000000011b98f
- (id)pipelineLibrary;	// IMP=0x000000000011b97a
- (void)setPipelineLibrary:(id)arg1;	// IMP=0x000000000011b934
- (void)setMaxPipelineChildren:(CDStruct_da2e99ad)arg1;	// IMP=0x000000000011b90f
- (CDStruct_da2e99ad)maxPipelineChildren;	// IMP=0x000000000011b8e8
- (void)setPipelineMemoryLength:(unsigned long long)arg1;	// IMP=0x000000000011b8d3
- (unsigned long long)pipelineMemoryLength;	// IMP=0x000000000011b8be
- (void)setMeshThreadgroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;	// IMP=0x000000000011b890
- (_Bool)meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;	// IMP=0x000000000011b877
- (void)setObjectThreadgroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;	// IMP=0x000000000011b849
- (_Bool)objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;	// IMP=0x000000000011b830
- (void)setMaxTotalThreadsPerMeshThreadgroup:(unsigned long long)arg1;	// IMP=0x000000000011b81b
- (unsigned long long)maxTotalThreadsPerMeshThreadgroup;	// IMP=0x000000000011b806
- (void)setMaxTotalThreadsPerObjectThreadgroup:(unsigned long long)arg1;	// IMP=0x000000000011b7f1
- (unsigned long long)maxTotalThreadsPerObjectThreadgroup;	// IMP=0x000000000011b7dc
- (void)setMeshThreadsPerThreadgroup:(CDStruct_da2e99ad)arg1;	// IMP=0x000000000011b7b7
- (CDStruct_da2e99ad)meshThreadsPerThreadgroup;	// IMP=0x000000000011b790
- (void)setObjectThreadsPerThreadgroup:(CDStruct_da2e99ad)arg1;	// IMP=0x000000000011b76b
- (CDStruct_da2e99ad)objectThreadsPerThreadgroup;	// IMP=0x000000000011b744
- (id)meshBuffers;	// IMP=0x000000000011b72f
- (id)objectBuffers;	// IMP=0x000000000011b71a
- (id)meshFunction;	// IMP=0x000000000011b705
- (void)setMeshFunction:(id)arg1;	// IMP=0x000000000011b638
- (id)objectFunction;	// IMP=0x000000000011b623
- (void)setObjectFunction:(id)arg1;	// IMP=0x000000000011b556
- (id)fragmentFunction;	// IMP=0x000000000011b541
- (void)setFragmentFunction:(id)arg1;	// IMP=0x000000000011b474
- (id)vertexFunction;	// IMP=0x000000000011b45f
- (void)setVertexFunction:(id)arg1;	// IMP=0x000000000011b392
- (void)setLabel:(id)arg1;	// IMP=0x000000000011b2ed
- (id)label;	// IMP=0x000000000011b2d8
- (void)reset;	// IMP=0x000000000011af76
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;	// IMP=0x000000000011af61
- (unsigned long long)maxAccelerationStructureTraversalDepth;	// IMP=0x000000000011af4c
- (void)setProfileControl:(id)arg1;	// IMP=0x000000000011aeff
- (id)profileControl;	// IMP=0x000000000011aeea
- (void)setExplicitVisibilityGroupID:(unsigned int)arg1;	// IMP=0x000000000011aed6
- (unsigned int)explicitVisibilityGroupID;	// IMP=0x000000000011aec2
- (id)fragmentBuffers;	// IMP=0x000000000011aead
- (id)vertexBuffers;	// IMP=0x000000000011ae98
- (void)setMaxObjectCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000011ae83
- (unsigned long long)maxObjectCallStackDepth;	// IMP=0x000000000011ae6e
- (void)setMaxMeshCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000011ae59
- (unsigned long long)maxMeshCallStackDepth;	// IMP=0x000000000011ae44
- (void)setSupportAddingObjectBinaryFunctions:(_Bool)arg1;	// IMP=0x000000000011ae30
- (_Bool)supportAddingObjectBinaryFunctions;	// IMP=0x000000000011ae1c
- (void)setSupportAddingMeshBinaryFunctions:(_Bool)arg1;	// IMP=0x000000000011ae08
- (_Bool)supportAddingMeshBinaryFunctions;	// IMP=0x000000000011adf4
- (void)setMaxFragmentCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000011addf
- (unsigned long long)maxFragmentCallStackDepth;	// IMP=0x000000000011adca
- (void)setMaxVertexCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000011adb5
- (unsigned long long)maxVertexCallStackDepth;	// IMP=0x000000000011ada0
- (void)setSupportAddingFragmentBinaryFunctions:(_Bool)arg1;	// IMP=0x000000000011ad8c
- (_Bool)supportAddingFragmentBinaryFunctions;	// IMP=0x000000000011ad78
- (void)setSupportAddingVertexBinaryFunctions:(_Bool)arg1;	// IMP=0x000000000011ad64
- (_Bool)supportAddingVertexBinaryFunctions;	// IMP=0x000000000011ad50
- (void)setInsertMeshLibraries:(id)arg1;	// IMP=0x000000000011ad32
- (id)insertMeshLibraries;	// IMP=0x000000000011ad1d
- (void)setInsertObjectLibraries:(id)arg1;	// IMP=0x000000000011acff
- (id)insertObjectLibraries;	// IMP=0x000000000011acea
- (void)setInsertFragmentLibraries:(id)arg1;	// IMP=0x000000000011accc
- (id)insertFragmentLibraries;	// IMP=0x000000000011acb7
- (void)setInsertVertexLibraries:(id)arg1;	// IMP=0x000000000011ac99
- (id)insertVertexLibraries;	// IMP=0x000000000011ac84
- (void)setMeshPreloadedLibraries:(id)arg1;	// IMP=0x000000000011ac37
- (id)meshPreloadedLibraries;	// IMP=0x000000000011ac22
- (void)setObjectPreloadedLibraries:(id)arg1;	// IMP=0x000000000011abd5
- (id)objectPreloadedLibraries;	// IMP=0x000000000011abc0
- (void)setFragmentPreloadedLibraries:(id)arg1;	// IMP=0x000000000011ab73
- (id)fragmentPreloadedLibraries;	// IMP=0x000000000011ab5e
- (void)setVertexPreloadedLibraries:(id)arg1;	// IMP=0x000000000011ab11
- (id)vertexPreloadedLibraries;	// IMP=0x000000000011aafc
- (void)setMeshLinkedFunctions:(id)arg1;	// IMP=0x000000000011aa64
- (id)meshLinkedFunctions;	// IMP=0x000000000011aa09
- (void)setObjectLinkedFunctions:(id)arg1;	// IMP=0x000000000011a971
- (id)objectLinkedFunctions;	// IMP=0x000000000011a916
- (void)setFragmentLinkedFunctions:(id)arg1;	// IMP=0x000000000011a87e
- (id)fragmentLinkedFunctions;	// IMP=0x000000000011a823
- (void)setVertexLinkedFunctions:(id)arg1;	// IMP=0x000000000011a78b
- (id)vertexLinkedFunctions;	// IMP=0x000000000011a730
- (id)binaryArchives;	// IMP=0x000000000011a71b
- (void)setBinaryArchives:(id)arg1;	// IMP=0x000000000011a6ce
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;	// IMP=0x000000000011a672
- (unsigned long long)inputPrimitiveTopology;	// IMP=0x000000000011a658
- (void)setDepthStencilWriteDisabled:(_Bool)arg1;	// IMP=0x000000000011a62e
- (_Bool)isDepthStencilWriteDisabled;	// IMP=0x000000000011a615
- (void)setSampleCoverageInvert:(_Bool)arg1;	// IMP=0x000000000011a5e8
- (_Bool)sampleCoverageInvert;	// IMP=0x000000000011a5d2
- (void)setNeedsCustomBorderColorSamplers:(_Bool)arg1;	// IMP=0x000000000011a5be
- (_Bool)needsCustomBorderColorSamplers;	// IMP=0x000000000011a5aa
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x000000000011a57d
- (_Bool)openGLModeEnabled;	// IMP=0x000000000011a566
- (void)setPluginData:(id)arg1;	// IMP=0x000000000011a520
- (id)pluginData;	// IMP=0x000000000011a50b
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;	// IMP=0x000000000011a4f7
- (unsigned int)fragmentDepthCompareClampMask;	// IMP=0x000000000011a4e3
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;	// IMP=0x000000000011a4cf
- (unsigned int)vertexDepthCompareClampMask;	// IMP=0x000000000011a4bb
- (void)setTwoSideEnabled:(_Bool)arg1;	// IMP=0x000000000011a48e
- (_Bool)isTwoSideEnabled;	// IMP=0x000000000011a475
- (void)setPointSizeOutputVS:(_Bool)arg1;	// IMP=0x000000000011a448
- (_Bool)isPointSizeOutputVS;	// IMP=0x000000000011a42f
- (void)setPointCoordLowerLeft:(_Bool)arg1;	// IMP=0x000000000011a402
- (_Bool)isPointCoordLowerLeft;	// IMP=0x000000000011a3e9
- (void)setPointSmoothEnabled:(_Bool)arg1;	// IMP=0x000000000011a3bc
- (_Bool)isPointSmoothEnabled;	// IMP=0x000000000011a3a3
- (unsigned char)clipDistanceEnableMask;	// IMP=0x000000000011a389
- (void)setClipDistanceEnableMask:(unsigned char)arg1;	// IMP=0x000000000011a35c
- (void)setAlphaTestFunction:(unsigned long long)arg1;	// IMP=0x000000000011a32e
- (unsigned long long)alphaTestFunction;	// IMP=0x000000000011a314
- (void)setAlphaTestEnabled:(_Bool)arg1;	// IMP=0x000000000011a2e7
- (_Bool)isAlphaTestEnabled;	// IMP=0x000000000011a2ce
- (void)setLogicOperation:(unsigned long long)arg1;	// IMP=0x000000000011a2a0
- (unsigned long long)logicOperation;	// IMP=0x000000000011a286
- (void)setLogicOperationEnabled:(_Bool)arg1;	// IMP=0x000000000011a256
- (_Bool)isLogicOperationEnabled;	// IMP=0x000000000011a23f
- (void)setColorSampleCount:(unsigned long long)arg1;	// IMP=0x000000000011a22a
- (unsigned long long)colorSampleCount;	// IMP=0x000000000011a215
- (void)setMaxVertexAmplificationCount:(unsigned long long)arg1;	// IMP=0x000000000011a201
- (unsigned long long)maxVertexAmplificationCount;	// IMP=0x000000000011a1ed
- (void)setVertexAmplificationMode:(unsigned long long)arg1;	// IMP=0x000000000011a18b
- (unsigned long long)vertexAmplificationMode;	// IMP=0x000000000011a171
- (void)setRasterizationEnabled:(_Bool)arg1;	// IMP=0x000000000011a14a
- (_Bool)isRasterizationEnabled;	// IMP=0x000000000011a131
- (void)setAlphaToOneEnabled:(_Bool)arg1;	// IMP=0x000000000011a10a
- (_Bool)isAlphaToOneEnabled;	// IMP=0x000000000011a0f2
- (void)setAlphaToCoverageEnabled:(_Bool)arg1;	// IMP=0x000000000011a0cc
- (_Bool)isAlphaToCoverageEnabled;	// IMP=0x000000000011a0b6
- (void)setSampleCoverage:(float)arg1;	// IMP=0x000000000011a0a0
- (float)sampleCoverage;	// IMP=0x000000000011a08a
- (void)setSampleMask:(unsigned long long)arg1;	// IMP=0x000000000011a075
- (unsigned long long)sampleMask;	// IMP=0x000000000011a060
- (void)setRasterSampleCount:(unsigned long long)arg1;	// IMP=0x000000000011a04b
- (unsigned long long)rasterSampleCount;	// IMP=0x000000000011a036
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x000000000011a024
- (unsigned long long)sampleCount;	// IMP=0x000000000011a012
@property(nonatomic) unsigned long long postVertexDumpBufferIndex;
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x0000000000119fd3
- (unsigned long long)resourceIndex;	// IMP=0x0000000000119fbe
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x0000000000119f90
- (_Bool)forceResourceIndex;	// IMP=0x0000000000119f7a
- (long long)textureWriteRoundingMode;	// IMP=0x0000000000119f62
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x0000000000119f4d
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;	// IMP=0x0000000000119f39
- (_Bool)supportIndirectCommandBuffers;	// IMP=0x0000000000119f25
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;	// IMP=0x0000000000119ee2
- (unsigned long long)tessellationOutputWindingOrder;	// IMP=0x0000000000119ecd
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;	// IMP=0x0000000000119e8a
- (unsigned long long)tessellationFactorStepFunction;	// IMP=0x0000000000119e75
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;	// IMP=0x0000000000119e35
- (unsigned long long)tessellationControlPointIndexType;	// IMP=0x0000000000119e23
- (void)setTessellationFactorFormat:(unsigned long long)arg1;	// IMP=0x0000000000119de3
- (unsigned long long)tessellationFactorFormat;	// IMP=0x0000000000119dd1
- (void)setTessellationFactorScaleEnabled:(_Bool)arg1;	// IMP=0x0000000000119dc0
- (_Bool)isTessellationFactorScaleEnabled;	// IMP=0x0000000000119daf
- (void)setMaxTessellationFactor:(unsigned long long)arg1;	// IMP=0x0000000000119d69
- (unsigned long long)maxTessellationFactor;	// IMP=0x0000000000119d57
- (void)setTessellationPartitionMode:(unsigned long long)arg1;	// IMP=0x0000000000119d17
- (unsigned long long)tessellationPartitionMode;	// IMP=0x0000000000119d05
@property(nonatomic) _Bool forceSoftwareVertexFetch;
- (id)description;	// IMP=0x0000000000119cab
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000118e6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118887
- (void)dealloc;	// IMP=0x0000000000118731
- (id)init;	// IMP=0x0000000000118526

@end
