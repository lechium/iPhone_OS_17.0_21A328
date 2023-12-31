//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPDatabaseWriter;

@interface VCPDataCollectionTask
{
    VCPDatabaseWriter *_database;	// 8 = 0x8
}

+ (id)taskWithPhotoLibrary:(id)arg1;	// IMP=0x0040000000083e53
- (void).cxx_destruct;	// IMP=0x002000000008750a
- (int)mainInternal;	// IMP=0x00100000000871b3
- (int)_collectAndReportProgress;	// IMP=0x00100000000863f6
- (_Bool)queryBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double *)arg2;	// IMP=0x0010000000085fef
- (int)updateAnalysisProgressMetrics:(id)arg1;	// IMP=0x0010000000085b1d
- (int)processAssetBatch:(id)arg1 withDatabase:(id)arg2 andStatistics:(id)arg3 andVersionTime:(long long)arg4 andCurrentTime:(long long)arg5;	// IMP=0x00100000000851ac
- (void)updateAnalyzedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2 timeElapsed:(long long)arg3;	// IMP=0x001000000008511c
- (void)updateOutdatedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2;	// IMP=0x001000000008509e
- (void)updateUnanalyzedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2 isNewAsset:(_Bool)arg3 timeElapsed:(long long)arg4;	// IMP=0x0010000000084f24
- (int)resetBackgroundAnalysisMetrics;	// IMP=0x0010000000084a93
- (int)resetDailyBackgroundAnalysisMetrics;	// IMP=0x00100000000847ee
- (int)updateLivePhotoEffectsStatistics:(id)arg1;	// IMP=0x00100000000845bf
- (int)updateLivePhotoStatistics:(id)arg1 withFetchResult:(id)arg2 forAnalysisTypes:(id)arg3;	// IMP=0x0010000000083eb8
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0010000000083d9b

@end

