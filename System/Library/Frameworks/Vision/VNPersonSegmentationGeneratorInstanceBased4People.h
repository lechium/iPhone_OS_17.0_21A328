//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNPersonSegmentationGeneratorInstanceBased4People
{
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _espressoConfidencesOutputBuffer;	// 16 = 0x10
}

+ (_Bool)inputMaskRequired;	// IMP=0x0060000000021ea9
+ (_Bool)rotateImageToMatchNetworkOrientation;	// IMP=0x0060000000021ea1
+ (id)outputConfidenceBlobNames;	// IMP=0x0060000000021e94
+ (id)outputMaskBlobNameToRequestKey;	// IMP=0x0060000000021e64
+ (id)outputMaskBlobNames;	// IMP=0x0060000000021e34
+ (id)inputMaskBlobName;	// IMP=0x0060000000021e2c
+ (id)inputImageBlobName;	// IMP=0x0060000000021e0d
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x0060000000021deb
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x0060000000021dde
- (id).cxx_construct;	// IMP=0x00000000000228ed
- (void).cxx_destruct;	// IMP=0x00000000000228dc
- (void)initializeOutputConfidenceBuffers:(void *)arg1;	// IMP=0x0000000000022595
- (_Bool)bindOutputConfidenceBuffersAndReturnError:(id *)arg1;	// IMP=0x0000000000022403
- (_Bool)validateMaskForBlobName:(id)arg1 options:(id)arg2 maskConfidence:(float *)arg3 maskAcceptable:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000000000220b8

@end
