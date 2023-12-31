//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPCluster : NSObject
{
    const CDStruct_1ec70fb1 *profile;	// 8 = 0x8
    unsigned int xCount;	// 16 = 0x10
    double *x;	// 24 = 0x18
    double *dx;	// 32 = 0x20
    unsigned int *dxOrderIndex;	// 40 = 0x28
    unsigned int interClusterMinIndex;	// 48 = 0x30
    double *ddx;	// 56 = 0x38
    unsigned int *ddxOrderIndex;	// 64 = 0x40
    unsigned int interLevelMinIndex;	// 72 = 0x48
    unsigned int minClusterSize;	// 76 = 0x4c
    double maxClusterSpread;	// 80 = 0x50
    double minInterClusterDiff;	// 88 = 0x58
    double minInterLevel2ndDiff;	// 96 = 0x60
    unsigned int clusterCount;	// 104 = 0x68
    CDStruct_2a61e2ef *xStats;	// 112 = 0x70
    unsigned int levels;	// 120 = 0x78
    CDStruct_2a61e2ef *dxStats;	// 128 = 0x80
    _Bool ownData;	// 136 = 0x88
    _Bool ownDifferences;	// 137 = 0x89
}

+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;	// IMP=0x00100000002f1961
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;	// IMP=0x00100000003c5f5c
+ (void)clusterTextLine:(id)arg1;	// IMP=0x00100000003c5dee
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double *)arg4 andMaximumLetterGap:(double *)arg5;	// IMP=0x00100000003c5cd2
- (CDStruct_2a61e2ef)largestClusterStatistics;	// IMP=0x00000000002f18cc
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;	// IMP=0x00000000002f1898
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;	// IMP=0x00000000002f183e
- (unsigned int)levels;	// IMP=0x00000000002f1835
- (unsigned int)clusterCount;	// IMP=0x00000000002f17eb
- (_Bool)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;	// IMP=0x00000000002f149f
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x00000000002f1465
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x00000000002f144a
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x00000000002f1410
- (void)analyzeDensities;	// IMP=0x00000000002f116a
- (void)assembleDensityDifferenceStats;	// IMP=0x00000000002f103f
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;	// IMP=0x00000000002f1034
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;	// IMP=0x00000000002f1029
- (void)setMaximumClusterSpread:(double)arg1;	// IMP=0x00000000002f101e
- (void)setMinimumClusterSize:(unsigned int)arg1;	// IMP=0x00000000002f1015
- (void)assembleDataStats;	// IMP=0x00000000002f0dd8
- (void)analyzeDifferences;	// IMP=0x00000000002f0cb7
- (void)resetAnalysis;	// IMP=0x00000000002f0c56
- (_Bool)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x00000000002f085b
- (_Bool)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;	// IMP=0x00000000002f0517
- (_Bool)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x00000000002f0481
- (_Bool)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x00000000002f039c
- (void)assembleDifferenceStats;	// IMP=0x00000000002f0218
- (void)splitSecondDifferences;	// IMP=0x00000000002eff11
- (void)computeDataFromDifferences;	// IMP=0x00000000002efe9b
- (void)computeDifferencesFromData;	// IMP=0x00000000002efe2d
- (void)dealloc;	// IMP=0x00000000002efdef
- (void)finalize;	// IMP=0x00000000002efdb1
- (void)dispose;	// IMP=0x00000000002efd3e
- (id)initWithProfile:(const CDStruct_1ec70fb1 *)arg1;	// IMP=0x00000000002efcf3
- (id)init;	// IMP=0x00000000002efcda
- (void)makeWords:(CDStruct_2e2afed4 *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;	// IMP=0x00000000003c57e9
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(_Bool)arg2;	// IMP=0x00000000003c534b
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;	// IMP=0x00000000003c530c

@end

