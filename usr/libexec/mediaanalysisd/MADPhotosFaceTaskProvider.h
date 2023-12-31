//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_queue;

@interface MADPhotosFaceTaskProvider
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPhotosFaceProcessingContext *_context;	// 16 = 0x10
    unsigned long long _personProcessingRequirement;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managementQueue;	// 32 = 0x20
    VCPFaceClusterer *_faceClusterer;	// 40 = 0x28
    NSString *_logPrefix;	// 48 = 0x30
    unsigned long long _previousCountOfFaceCropsToBeGenerated;	// 56 = 0x38
    unsigned long long _previousCountOfUnprocessedFaceCrops;	// 64 = 0x40
    _Bool _assetProcessingTaskDone;	// 72 = 0x48
    _Bool _downloadAssetProcessingTaskDone;	// 73 = 0x49
}

+ (unsigned long long)taskID;	// IMP=0x00400000000ee295
+ (id)name;	// IMP=0x00100000000ee288
- (void).cxx_destruct;	// IMP=0x00200000000eedf9
- (void)retireTask:(id)arg1;	// IMP=0x00100000000eebd7
- (id)nextClusterProcessingTask;	// IMP=0x00100000000ee855
- (id)nextDownloadAssetProcessingTask;	// IMP=0x00100000000ee6d4
- (id)nextAssetProcessingTask;	// IMP=0x00100000000ee45e
- (id)assetPriorityPredicates;	// IMP=0x00100000000ee35f
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x00100000000ee338
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000ee323
- (void)dealloc;	// IMP=0x00100000000ee2a0
- (id)initWithPhotoLibrary:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edfd8

@end

