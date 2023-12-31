//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHomographicImageRegistrationDetector
{
}

+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x008000000024e379
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000024dfa7
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000024dab8
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024da89
- (_Bool)_calculateHomographicWarpTransform:(CDStruct_8e0628e6 *)arg1 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg2 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg3 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg4 seededWithPreviousWarpTransform:(const CDStruct_8e0628e6 *)arg5 error:(id *)arg6;	// IMP=0x000000000024d6a0
- (struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000024d5d1
- (_Bool)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer **)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000024d3c2
- (id)_validatedImageBufferForKey:(id)arg1 inOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000024d2cd

@end

