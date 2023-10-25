//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator, VisionCoreSmartCam5InferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface VNSmartCam5GatingDetector
{
    VisionCoreSmartCam5InferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 16 = 0x10
    NSDictionary *_documentIdentifierToSceneLabels;	// 24 = 0x18
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;	// 32 = 0x20
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000122a9f
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;	// IMP=0x0060000000122a97
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x0060000000122a02
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0060000000122961
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000122878
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x0060000000122870
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001227c2
+ (id)_inferenceNetworkDescriptorForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000122708
- (void).cxx_destruct;	// IMP=0x00000000001214c0
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0000000000120a44
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x0000000000120776
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000012064c
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x0000000000120641
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012044a
@property(readonly, copy) NSArray *supportedDocumentElementIdentifiers;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012039e

@end
