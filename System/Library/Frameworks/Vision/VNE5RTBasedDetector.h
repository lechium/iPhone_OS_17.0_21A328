//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VisionCoreE5RTExecutionContext, VisionCoreE5RTInferenceFunctionDescriptor;

__attribute__((visibility("hidden")))
@interface VNE5RTBasedDetector
{
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;	// 16 = 0x10
    VisionCoreE5RTExecutionContext *_executionContext;	// 24 = 0x18
}

+ (id)classificationIdentifiersForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000265252
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000264fe8
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000264e4b
+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000264e07
+ (id)E5RTProgramLibraryCompilationOptionsForModelSource:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000264dee
+ (id)E5RTProgramLibraryForModelURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000264be4
- (void).cxx_destruct;	// IMP=0x0000000000264a93
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x0000000000264a8b
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000264906
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002644e4
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002643e3
- (id)observationsFromE5RTExecutionOutputs:(id)arg1 forFunctionDescriptor:(id)arg2 originatingRequestSpecifier:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000026439e
- (id)newE5RTExecutionInputsForFunctionDescriptor:(id)arg1 croppedPixelBuffer:(struct __CVBuffer *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002642ad
- (id)newE5RTExecutionContextForFunctionDescriptor:(id)arg1 configurationOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002641f2

@end

