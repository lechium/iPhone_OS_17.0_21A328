//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSaliencyHeatmapBoundingBoxGenerator
{
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00800000002a876f
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00800000002a8764
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000002a8757
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00800000002a86f4
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00800000002a8658
+ (id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 configurationOptions:(id)arg3 originatingRequestSpecifier:(id)arg4 regionOfInterest:(struct CGRect)arg5 qosClass:(unsigned int)arg6 warningRecorder:(id)arg7 error:(id *)arg8;	// IMP=0x00800000002a8388
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002a97bf
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002a9652
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a936b
- (struct __CVBuffer *)_createPixelBufferOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 fromImageBuffer:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000002a912f
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 error:(id *)arg4;	// IMP=0x00000000002a884f

@end

