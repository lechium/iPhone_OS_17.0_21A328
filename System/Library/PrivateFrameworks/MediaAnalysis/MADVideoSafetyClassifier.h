//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, SCMLHandler, SCMLVideoAnalyzer;

__attribute__((visibility("hidden")))
@interface MADVideoSafetyClassifier
{
    CDStruct_1b6d18a9 _timeLastProcess;	// 8 = 0x8
    CDStruct_1b6d18a9 _start;	// 32 = 0x20
    CDStruct_1b6d18a9 _end;	// 56 = 0x38
    float _processTimeInterval;	// 80 = 0x50
    short _sensitivity;	// 84 = 0x54
    NSMutableArray *_results;	// 88 = 0x58
    NSDictionary *_scoresForLabels;	// 96 = 0x60
    SCMLHandler *_handler;	// 104 = 0x68
    SCMLVideoAnalyzer *_videoAnalyzer;	// 112 = 0x70
}

+ (id)analyzeVideoAssetOnDemandWithURL:(id)arg1 localIdentifier:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 cancelBlock:(CDUnknownBlockType)arg4 andProgressHandler:(CDUnknownBlockType)arg5;	// IMP=0x006000000022bdf0
- (void).cxx_destruct;	// IMP=0x000000000022e213
- (id)results;	// IMP=0x000000000022e196
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000022de34
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000022dc5e
- (int)analyzeFrameWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 andFlags:(unsigned long long *)arg4;	// IMP=0x000000000022d81a
- (void)addAnalysisResults;	// IMP=0x000000000022d31a
- (int)configureAndStartVideoAnalyzer;	// IMP=0x000000000022d1c7
- (void)configureProcessTimeIntervalFrom:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022d11d
- (id)init;	// IMP=0x000000000022cd43

@end

