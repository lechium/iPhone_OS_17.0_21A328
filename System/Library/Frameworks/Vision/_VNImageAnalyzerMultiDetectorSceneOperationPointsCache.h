//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VisionCoreSceneNetInferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject
{
    VisionCoreSceneNetInferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 8 = 0x8
    NSMutableDictionary *_originatingRequestSpecifierToOperationPoints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021e8bc
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021e737
- (id)initWithInferenceNetworkDescriptor:(id)arg1;	// IMP=0x000000000021e672

@end

