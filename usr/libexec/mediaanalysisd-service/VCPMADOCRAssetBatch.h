//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSMutableArray, NSMutableDictionary, VCPDatabaseWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADOCRAssetBatch : NSObject
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    _Bool _allowDownload;	// 24 = 0x18
    CDUnknownBlockType _cancelBlock;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_downloadGroup;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 48 = 0x30
    NSMutableDictionary *_downloadRequestIDs;	// 56 = 0x38
    NSDate *_downloadStateChange;	// 64 = 0x40
    int _downloadStatus;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_computeGroup;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_computeQueue;	// 88 = 0x58
}

+ (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00200000000b7c28
- (void).cxx_destruct;	// IMP=0x00200000000bc8f6
- (int)publish;	// IMP=0x00100000000bb9bf
- (int)process;	// IMP=0x00100000000ba8d2
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x00100000000ba610
- (double)downloadInactiveTimeInterval;	// IMP=0x00100000000ba507
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x00100000000ba2e6
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x00100000000ba171
- (MISSING_TYPE *)processAssetEntry:resource:resourceURL: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000b8f76
- (id)remoteResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x00100000000b8d07
- (id)localResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x00100000000b8b84
- (id)acceptableResourcesForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x00100000000b853c
- (int)prepare;	// IMP=0x00100000000b807c
- (void)addPhotosAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2 attempts:(unsigned long long)arg3 andAttemptDate:(id)arg4;	// IMP=0x00100000000b7cda
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b7aa5

@end

