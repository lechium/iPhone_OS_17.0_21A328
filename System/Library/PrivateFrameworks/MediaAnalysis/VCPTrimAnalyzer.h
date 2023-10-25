//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPActionAnalyzer, VCPSegment;

__attribute__((visibility("hidden")))
@interface VCPTrimAnalyzer : NSObject
{
    VCPActionAnalyzer *_actionAnalyzer;	// 8 = 0x8
    NSMutableArray *_internalResults;	// 16 = 0x10
    CDStruct_e83c9415 _bestTrimTimeRange;	// 24 = 0x18
    float _curationThreshold;	// 72 = 0x48
    _Bool _verbose;	// 76 = 0x4c
    CDStruct_1b6d18a9 _inTrimStart;	// 80 = 0x50
    CDStruct_1b6d18a9 _inTrimEnd;	// 104 = 0x68
    _Bool _firstFrame;	// 128 = 0x80
    VCPSegment *_activeSegment;	// 136 = 0x88
    CDStruct_1b6d18a9 _captureTime;	// 144 = 0x90
    _Bool _ready;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000002eff10
- (_Bool)checkTrimAt:(CDStruct_1b6d18a9)arg1 captureTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000002efd15
- (_Bool)isTimestampSkipable:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000002efa28
- (_Bool)shouldCutAt:(CDStruct_1b6d18a9)arg1 stillPTS:(CDStruct_1b6d18a9)arg2 withCut:(_Bool)arg3;	// IMP=0x00000000002ef7bc
- (CDStruct_e83c9415)bestTrimTimeRange;	// IMP=0x00000000002ef79c
- (float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(CDStruct_e83c9415 *)arg3 captureTime:(CDStruct_1b6d18a9)arg4;	// IMP=0x00000000002eeb80
- (int)prepareTrimmingWithTrimStart:(CDStruct_1b6d18a9)arg1 andTrimEnd:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000002ee6a1
- (int)generateInterestingTrimBasedOnCaptureTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000002ede96
- (void)generateCurationSegment;	// IMP=0x00000000002edbff
- (void)printSegments:(id)arg1;	// IMP=0x00000000002eda51
- (int)finalizeWithDestructiveTrimStart:(CDStruct_1b6d18a9)arg1 trimEnd:(CDStruct_1b6d18a9)arg2 andCaptureTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000002ed970
- (_Bool)isCurated:(float)arg1;	// IMP=0x00000000002ed963
- (void)updateCurationThreshold;	// IMP=0x00000000002ed887
- (_Bool)isReady;	// IMP=0x00000000002ed87b
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 analysisData:(id)arg2;	// IMP=0x00000000002ed787
- (id)init;	// IMP=0x00000000002ed652

@end
