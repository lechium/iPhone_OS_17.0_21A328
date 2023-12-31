//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BGRBilinearUpsampler, VNEspressoResources, VNMetalContext;
@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface VNTrackMaskDetector
{
    VNEspressoResources *initializationModel;	// 16 = 0x10
    VNEspressoResources *updateModel;	// 24 = 0x18
    struct __CVBuffer *highResMaskPixelBuffer;	// 32 = 0x20
    BGRBilinearUpsampler *_bilinearUpsampler;	// 40 = 0x28
    VNMetalContext *_postProcessingMetalContext;	// 48 = 0x30
    id <MTLComputePipelineState> _applyMaskComputeState;	// 56 = 0x38
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x006000000012f16a
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x006000000012f15f
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000012f152
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000012f145
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000012f0e2
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x006000000012f070
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000012ef6b
- (void).cxx_destruct;	// IMP=0x000000000012ea95
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000012de90
- (_Bool)_runUpdateModelWithLockedPixelBuffer:(struct __CVBuffer *)arg1 forState:(id)arg2 outputQualityEspressoBuffer:(CDStruct_0a65202a *)arg3 error:(id *)arg4;	// IMP=0x000000000012db71
- (_Bool)_runInitializerModelWithLockedPixelBuffer:(struct __CVBuffer *)arg1 forState:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012d6a7
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000012d5a6
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012d304
- (_Bool)_removeBackgroundFromPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 usingMask:(struct __CVBuffer *)arg3 offset:(id *)arg4 error: /* Error: Ran out of types for this method. */;	// IMP=0x000000000012d215
- (struct __CVBuffer *)_upsampleLowResMask:(CDStruct_0a65202a *)arg1 reference:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x000000000012d0c4
- (id)_loadModelFromFileName:(id)arg1 inputBlobNames:(id)arg2 outputBlobNames:(id)arg3 forComputeDevice:(id)arg4 configurationOptions:(id)arg5 error:(id *)arg6;	// IMP=0x000000000012ce53
- (void)dealloc;	// IMP=0x000000000012cdd5

@end

