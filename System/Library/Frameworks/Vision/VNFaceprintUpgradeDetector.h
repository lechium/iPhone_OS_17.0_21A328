//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceprintUpgradeDetector
{
}

+ (_Bool)isSupportedUpgradeFromPreviousEspressoprint:(id)arg1 toNewLowResolutionEspressoprint:(id)arg2;	// IMP=0x00800000002697ff
+ (Class)espressoprintClass;	// IMP=0x00800000002697ee
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000002697e1
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000002697d4
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002694e1

@end
