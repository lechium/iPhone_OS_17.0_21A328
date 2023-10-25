//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    VNEspressoResources *_espressoResources;	// 16 = 0x10
    unsigned long long _networkRequiredInputImageWidth;	// 24 = 0x18
    unsigned long long _networkRequiredInputImageHeight;	// 32 = 0x20
    unsigned long long _inputImageAspectRatioHandling;	// 40 = 0x28
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x006000000023b17a
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x006000000023b172
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000023b13f
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000023b014
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000023ae13
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000023abaa
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000023aaee
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x006000000023aa87
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000023aa24
- (void).cxx_destruct;	// IMP=0x000000000023c580
@property(readonly, nonatomic) unsigned long long inputImageAspectRatioHandling; // @synthesize inputImageAspectRatioHandling=_inputImageAspectRatioHandling;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
- (_Bool)executePlanForModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023c49b
- (_Bool)executePlanAndReturnError:(id *)arg1;	// IMP=0x000000000023c42f
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023c32a
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023c286
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023c176
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023c0d2
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 forModel:(id)arg5 error:(id *)arg6;	// IMP=0x000000000023bfb8
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 error:(id *)arg5;	// IMP=0x000000000023beff
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id *)arg4;	// IMP=0x000000000023be47
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023be1b
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023bd65
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023bd39
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023bc95
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023bc69
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023bbc5
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023ba0c
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;	// IMP=0x000000000023b967
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000023b707
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023b66c
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023b182

@end
