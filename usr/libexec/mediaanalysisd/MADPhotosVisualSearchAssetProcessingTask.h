//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, VCPDatabaseWriter, VCPObjectPool, VNSession;
@protocol OS_dispatch_queue;

@interface MADPhotosVisualSearchAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPObjectPool *_servicePool;	// 16 = 0x10
    VNSession *_visionSession;	// 24 = 0x18
    VCPDatabaseWriter *_analysisDatabase;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_stickerQueue;	// 40 = 0x28
    int _status;	// 48 = 0x30
}

+ (int)concurrentAssetCount;	// IMP=0x00400000000bde64
+ (id)taskWithServicePool:(id)arg1 visionSession:(id)arg2 analysisDatabase:(id)arg3;	// IMP=0x00100000000bddb4
- (void).cxx_destruct;	// IMP=0x00200000000c20af
- (void)publish;	// IMP=0x00100000000c2081
- (int)_publish;	// IMP=0x00100000000c0f6a
- (void)process;	// IMP=0x00100000000c0f3c
- (int)_process;	// IMP=0x00100000000bf145
- (int)_calculateStickerScore:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 regionOfInterest:(struct CGRect)arg3 stickerScore:(float *)arg4;	// IMP=0x00100000000bedbc
- (struct CGRect)_computeRegionOfInterest:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;	// IMP=0x00100000000be82b
- (void)prepare;	// IMP=0x00100000000be804
- (int)_prepare;	// IMP=0x00100000000be314
- (void)addPhotosAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2 attempts:(unsigned long long)arg3 andAttemptDate:(id)arg4;	// IMP=0x00100000000bde9c
- (int)status;	// IMP=0x00100000000bde8c
- (unsigned long long)count;	// IMP=0x00100000000bde6f
- (id)initWithServicePool:(id)arg1 visionSession:(id)arg2 analysisDatabase:(id)arg3;	// IMP=0x00100000000bdc41

@end

