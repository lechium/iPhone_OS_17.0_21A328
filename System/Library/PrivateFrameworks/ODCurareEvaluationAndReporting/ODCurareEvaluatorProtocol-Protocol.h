//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLModel, NSArray, ODCurareCandidateModel, ODCurareReportFillerModelEvaluationSummary;
@protocol MLBatchProvider;

@protocol ODCurareEvaluatorProtocol

@optional
- (NSArray *)evaluateWithModel:(MLModel *)arg1 batchProvider:(id <MLBatchProvider>)arg2;
- (NSArray *)evaluateWithModel:(MLModel *)arg1 dataArray:(NSArray *)arg2 modelType:(unsigned long long)arg3;
- (ODCurareReportFillerModelEvaluationSummary *)evaluateWithModel:(ODCurareCandidateModel *)arg1;
@end
