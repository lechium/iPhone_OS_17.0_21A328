//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNMemeClassifier
{
    int _modelDrop;	// 12 = 0xc
}

+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000185283
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x0060000000185257
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x006000000018524c
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0060000000185203
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000018519b
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000185138
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0000000000185670
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x0000000000185665
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x00000000001855e4
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018551e
- (id)supportedIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001854fa

@end
