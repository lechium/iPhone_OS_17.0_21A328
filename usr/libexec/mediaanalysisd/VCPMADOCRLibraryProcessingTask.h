//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPMADOCRLibraryProcessingTask
{
}

+ (id)fetchPropertySets;	// IMP=0x00200000000daa90
+ (unsigned long long)taskID;	// IMP=0x00100000000daa85
+ (id)name;	// IMP=0x00100000000daa78
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000da9cb
- (id)assetPriorityPredicates;	// IMP=0x00400000000dabc7
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000dabae
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000dab99
- (void);	// IMP=0x00100000000dab16

@end

